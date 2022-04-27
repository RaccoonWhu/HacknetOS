//
// Created by 16950 on 2022/4/15.
//
#include"HackEmail.h"

#include <utility>

HackEmail::HackEmail(const std::wstring &title, const std::wstring &sender, const std::wstring &content, int mid) :
        emailTitle(title), sender(sender), emailContent(content), missionId(mid)
{}

const HackEmail Email[] = {
        HackEmail(L"初次联系", L"Bit", L"Hi. \n"
                                   "我不认识你, 而且很遗憾的是我也没机会再认识你了, 但是如果你读到这封邮件, 那就意味着你还有机会来挽救这一切. \n"
                                   "我现在深陷危机, 留给我的时间已经不多了. 有件事我想求你帮我. \n"
                                   "但在这之前, 还有件更重要的事情需要你尽快处理, 越快越好. \n"
                                   "现在这个状态的Hacknet操作系统并不应该发布出去...  ..你的电脑里马上就会有一个追踪软件自动激活, 赶快删掉它. \n"
                                   "连接到你自己的节点(在网络图中的绿色节点), 然后找到并删除\"SecurityTracer.exe\". \n"
                                   "当你完成时, 回复这个邮件就行. \n"
                                   "快快快! \n"
                                   "\n"
                                   "-Bit\n"
                                   "0", 1),
        HackEmail(L"让我们来一起获取一些工具",L"Bit",L"很好 - 你现在应该安全了! 至少在你的电脑上...  \n"
                                         "\n"
                                         "在我们开始之前, 你需要获取一些工具 - 只使用porthack是无法侵入你将来发现的大部分电脑的...  至少你入侵不了那些你感兴趣的东西. \n"
                                         "      \n"
                                         "你应该从调查我朋友的服务器开始 - 他自称自己是\"Viper(毒蛇)\" - 听起来很可怕是吧? 老实说...  他干这行水平不怎么样, 但他总是有一些实用的代码. \n"
                                         "\n"
                                         "入侵他的电脑对你来说应该不是问题 - 问题在于能否找到有用的文件. \n"
                                         "\n"
                                         "在大多数情况下, 你可以忽略掉一些关于登陆记录, 程序的存储文件, IRC日志等等的这种\"普通\"文件. 像这种后缀为\".exe\"的文件才是你所寻找的. \n"
                                         "\n"
                                         "你可以使用命令\"scp\"下载任何文件. \n"
                                         "\n"
                                         "祝你好运 - 完成之后给我回信! \n"
                                         "      \n"
                                         "--Bit\n"
                                         "0"),
        HackEmail(L"初试牛刀",L"Bit",L"首先祝贺你! \n"
                                  "说实话...  .你这样回复我, 也不知道你到底成功了没, 不过既然你正在读这封邮件意味着你至少发现了一些东西, 我先假定你找到的那程序是有用的. \n"
                                  "\n"
                                  "我给你准备了一个小游戏, 让你试试你找到的新工具. 说实话, 我做这游戏可花了不少时间  -  -  我差点以为我要把这游戏带进坟墓里了. \n"
                                  "\n"
                                  "这个服务器的安全性对你来说应该不是太高, 我想让你黑进去, 找到我的帐号, 然后删掉它. \n"
                                  "\n"
                                  "你可能会需要使用你的新工具. 你可以通过输入\"程序名 端口号\"来调用它, 就像这样: \n"
                                  "\n"
                                  ">SSHCrack 22\n"
                                  " ^文件名   ^端口号\n"
                                  "    \n"
                                  "黑掉你找到的端口. \n"
                                  "\n"
                                  "对了, 给你提醒一下, 当你输入\"ssh\"然后按下Tab键就会自动补全命令, 这适用于所有的命令. \n"
                                  "\n"
                                  "祝你好运! \n"
                                  "\n"
                                  "Bitwise 测试PC@210.175.139.250\n"
                                  "\n"
                                  "--Bit\n"
                                  "0"),
        HackEmail(L"善始善终",L"Bit",L"好样的! 从现在开始事情变得越来越复杂了. \n"
                                   "我需要你帮我一个忙. \n"
                                   "最近我因一点点小马虎而给自己惹了不少麻烦. 这就是为什么我给你写这封邮件. 总而言之, 我的意思是, 有几台电脑上有一些我本不想存放在那里的操作日志. \n"
                                   "你一定要记住这点 -- 不要忘记删除你的操作日志. 如果你之前从没删过, 那就从现在开始. 你在任何现代的操作系统上所做的一切都会被跟踪记载在日志文件夹(~/log)下. 只需要进入这个文件夹, 使用\"rm *\"命令删除所有信息即可. 永远不要忘记这点. \n"
                                   "Anderson的卧室电脑:247.112.153.237\n"
                                   "--Bit\n"
                                   "0\n"
                                   "   "),
        HackEmail(L"生涯起点",L"Bit",L"好样的! 如果你收到这封邮件, 说明你做的很好... 恩, 也许这一切真的是值得的. \n"
                                 "我对你抱有的期望是不是太大了? 也许吧. \n"
                                 "我知道我没有充裕的时间来一点点教你, 你要学的东西太多了. 所以, 我的决定如下. \n"
                                 "有一个叫'Entropy'的组织目前正在招收新成员. 他们会教你更多黑客知识. 当你的黑客技术足以帮我完成我的夙愿时, 我会再联系你. \n"
                                 "为了进入Entropy, 你需要绕过一个代理服务器, 在你已经得到管理员权限计算机上运行几个shell(使用shell命令), 它可以用来过载代理服务器. \n"
                                 "祝你好运... \n"
                                 "还有, 谢谢. \n"
                                 "Entropy测试服务器:199.59.149.230\n"
                                 "--Bit\n"
                                 "0\n"
                                 "\n"),
        HackEmail(L"任务完成",L"Entropy",L"你好,\n"
                                     "\n"
                                     "首先, 祝贺你成功通过了Entropy黑客组织的考试! 当然了, 这种程度的考试对于一个经验丰富的黑客来说是小事一桩. 然而令人惊讶的是, 能通过这场考试的人并不多. \n"
                                     "在你正式加入我们组织之前, 我们必须对你的能力进行进一步的考验.\n"
                                     "最近, 有一家新闻网站摆明了同我们的对立立场. 我们希望你能临时瘫痪他们的服务器. 作为测试你能力的第二项任务, 我们要求你搞垮他们的新闻版块. 如果可以的话, 不要破坏无关的服务器和那些与Entropy无关的文章 -- 我们没必要把事情做的那么绝. \n"
                                     "这项任务可不是仅仅让你删除文章这么简单 -- 我们还要搞垮他们的程序. \n"
                                     "Slash-Bot 新闻服务器:183.198.0.210\n"
                                     "-Tex"),
        HackEmail(L"欢迎",L"Entropy",L"\n"
                                   "恭喜, \n"
                                   "你出色及时地完成了你的第一项任务, 让我们见识到了你的能力. 现在, 我诚挚地欢迎你来到Entropy黑客组织. \n"
                                   "在我们的资源服务器里, 你可以找到管理员账户的详细资料. 作为组织送给你的见面礼, 你可以去资源服务器里面随意下载你所需要的程序, 同时记得阅读我们组织的宗旨. 一旦你准备好了, 请回复这封邮件. 我会给你安排一些真正有挑战的任务. \n"
                                   "再次的恭喜你通过测试. \n"
                                   "Entropy资源服务器:196.21.2.201\n"
                                   "-Tex\n"),
        HackEmail(L"RE:欢迎",L"Entropy",L"很好, 看来你拿到了你所需的东西. 那么, 你就可以正式地开始接受Enpropy黑客组织的各项任务了. 附件里我给出了我们组织的任务资源数据库的ip地址, 还一并给出了你的用户名和密码以用于获得登录权限. \n"
                                     "当你有空的时候, 就去接受并完成你的第一项任务吧. \n"
                                     "届时我将会再次联系你来评估你的任务进度. \n"
                                     "-Tex\n"),
        HackEmail(L"Point_Clicker",L"Entropy MailBot",L"你好, \n"
                                                     "我现在有点郁闷, 但更倒霉的是, 我的那些同事没一个能帮的上忙的. \n"
                                                     "虽然我很反感向外界寻求帮助, 但是我只能这么做了. \n"
                                                     "把你们组织介绍给我的那个人向我保证你们会保密, 所以我就简要说明一下: 我在PointClicker里已经刷到无敌了, 我希望我能再刷一遍二周目来证明我在这个游戏里的王者地位. 然而这个游戏并没有重置按钮. \n"
                                                     "我希望你能黑进游戏服务器删掉我的存档, 这样我就能再爽一次了. 我的用户名是\"Mengsk\". 你要是想的话, 在你删之前可以先感受一下我的存档有多屌. \n"
                                                     "即将\"脱坑\"的, \n"
                                                     "PointClicker服务器:38.228.127.137\n"
                                                     "-M"),
        HackEmail(L"经典的反黑客攻击",L"Entropy MailBot",L"你好黑客, \n"
                                                 "\"PP市场\"公司最近雇佣了一名自由黑客, 他入侵了竞争对手公司的服务器窃取了一些敏感信息(我们猜测应该是邮件形式的简历列表). 他把这些简历从对手公司的服务器里删掉了, 并将简历转交到雇主公司的招聘部门. \n"
                                                 "这种商业间谍行为很明显是在给黑客的声誉抹黑. 虽然我们对他们公司之间的竞争并不感兴趣, 但是\"PP市场\"公司雇佣黑客的消息已经传遍了整个网络, 所以我们要确保\"PP市场\"这次吃不了兜着走. \n"
                                                 "我们不知道那些文件的确切名字, 所以你找的时候要费点心思. 记住, 你要找的是一份被偷走的邮件列表 -- 它们可能被加密或归档了. 注意, PP公司可能会对此有所防范, 他们应该会采取相应的安全措施. \n"
                                                 "PP市场:234.228.181.58\n"
                                                 "-Entropy 管理员")

};
std::wstring displayedEmail[1000];

void HackEmail::lsMail(int missionid)
{
    int pos = 0;
    for (const auto &i: Email)
    {
        if (i.missionId <= missionid)
        {
            if (pos >= 40)
                break;
            displayedEmail[pos++] = i.emailTitle;
        }
    }
}

void HackEmail::cdMail(const std::wstring &title)
{
    for (const auto &i: Email)
        if (i.emailTitle == title)
        {
            displayedEmail[0] = i.emailTitle;
            displayedEmail[1] = i.sender;
            int pos = 2;
            int num = 60;
            int len = i.emailContent.length();//字符串长度
            int end = num;//分割定长大小
            std::wstring s;
            for (int start = 0; start < len;)
            {
                if (start > len)
                {
                    break;
                }
                s = i.emailContent.substr(start, num);//从0开始，分割num位字符串
                start = end;
                end = end + num;
                displayedEmail[pos++] = s;
            }
            break;
        }
}

const std::wstring &HackEmail::getEmailTitle() const
{
    return emailTitle;
}

const std::wstring &HackEmail::getSender() const
{
    return sender;
}

const std::wstring &HackEmail::getEmailContent() const
{
    return emailContent;
}

int HackEmail::getMissionId() const
{
    return missionId;
}



