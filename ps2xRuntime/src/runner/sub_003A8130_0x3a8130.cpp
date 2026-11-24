#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003A8130
// Address: 0x3a8130 - 0x3a8980
void sub_003A8130_0x3a8130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A8130_0x3a8130");
#endif

    switch (ctx->pc) {
        case 0x3a81e0u: goto label_3a81e0;
        case 0x3a8228u: goto label_3a8228;
        case 0x3a8258u: goto label_3a8258;
        case 0x3a82a0u: goto label_3a82a0;
        case 0x3a82d0u: goto label_3a82d0;
        case 0x3a8318u: goto label_3a8318;
        case 0x3a8404u: goto label_3a8404;
        case 0x3a8414u: goto label_3a8414;
        case 0x3a842cu: goto label_3a842c;
        case 0x3a8438u: goto label_3a8438;
        case 0x3a8464u: goto label_3a8464;
        case 0x3a8474u: goto label_3a8474;
        case 0x3a8484u: goto label_3a8484;
        case 0x3a8494u: goto label_3a8494;
        case 0x3a84a0u: goto label_3a84a0;
        case 0x3a84a8u: goto label_3a84a8;
        case 0x3a84b8u: goto label_3a84b8;
        case 0x3a84c8u: goto label_3a84c8;
        case 0x3a84e8u: goto label_3a84e8;
        case 0x3a84f8u: goto label_3a84f8;
        case 0x3a8500u: goto label_3a8500;
        case 0x3a8508u: goto label_3a8508;
        case 0x3a8518u: goto label_3a8518;
        case 0x3a8520u: goto label_3a8520;
        case 0x3a8554u: goto label_3a8554;
        case 0x3a858cu: goto label_3a858c;
        case 0x3a85acu: goto label_3a85ac;
        case 0x3a8600u: goto label_3a8600;
        case 0x3a86dcu: goto label_3a86dc;
        case 0x3a86f0u: goto label_3a86f0;
        case 0x3a86f8u: goto label_3a86f8;
        case 0x3a8728u: goto label_3a8728;
        case 0x3a875cu: goto label_3a875c;
        case 0x3a8768u: goto label_3a8768;
        case 0x3a8770u: goto label_3a8770;
        case 0x3a8780u: goto label_3a8780;
        case 0x3a878cu: goto label_3a878c;
        case 0x3a87a0u: goto label_3a87a0;
        case 0x3a87b8u: goto label_3a87b8;
        case 0x3a87c8u: goto label_3a87c8;
        case 0x3a87e0u: goto label_3a87e0;
        case 0x3a87ecu: goto label_3a87ec;
        case 0x3a88e4u: goto label_3a88e4;
        case 0x3a88f0u: goto label_3a88f0;
        case 0x3a8900u: goto label_3a8900;
        case 0x3a8910u: goto label_3a8910;
        case 0x3a8934u: goto label_3a8934;
        case 0x3a893cu: goto label_3a893c;
        case 0x3a895cu: goto label_3a895c;
        default: break;
    }

    ctx->pc = 0x3a8130u;

    // 0x3a8130: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a8130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a8134: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x3a8134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x3a8138: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a8138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3a813c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a813cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3a8140: 0x8c22ea24  lw          $v0, -0x15DC($at)
    ctx->pc = 0x3a8140u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x3a8144: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x3a8144u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x3a8148: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x3a8148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x3a814c: 0x8c22ea28  lw          $v0, -0x15D8($at)
    ctx->pc = 0x3a814cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x3a8150: 0xac820024  sw          $v0, 0x24($a0)
    ctx->pc = 0x3a8150u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
    // 0x3a8154: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x3a8154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x3a8158: 0x8c22ea20  lw          $v0, -0x15E0($at)
    ctx->pc = 0x3a8158u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8EEA20u));
    // 0x3a815c: 0xac820028  sw          $v0, 0x28($a0)
    ctx->pc = 0x3a815cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
    // 0x3a8160: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x3a8160u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a8164: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x3a8164u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x3a8168: 0x102001ff  beqz        $at, . + 4 + (0x1FF << 2)
    ctx->pc = 0x3A8168u;
    {
        const bool branch_taken_0x3a8168 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A816Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8168u;
        // 0x3a816c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8168) {
            ctx->pc = 0x3A8968u;
            goto label_3a8968;
        }
    }
    ctx->pc = 0x3A8170u;
    // 0x3a8170: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3a8170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3a8174: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x3a8174u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3a8178: 0x24632880  addiu       $v1, $v1, 0x2880
    ctx->pc = 0x3a8178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10368));
    // 0x3a817c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a817cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a8180: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3a8180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a8184: 0x400008  jr          $v0
    ctx->pc = 0x3A8184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3A8190u: goto label_3a8190;
            case 0x3A84B0u: goto label_3a84b0;
            case 0x3A85B8u: goto label_3a85b8;
            case 0x3A8700u: goto label_3a8700;
            case 0x3A8778u: goto label_3a8778;
            case 0x3A8828u: goto label_3a8828;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A8184u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3A818Cu;
    // 0x3a818c: 0x0  nop
    ctx->pc = 0x3a818cu;
    // NOP
label_3a8190:
    // 0x3a8190: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x3a8190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3a8194: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x3a8194u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a8198: 0x300400ff  andi        $a0, $zero, 0xFF
    ctx->pc = 0x3a8198u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)255);
    // 0x3a819c: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x3a819cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a81a0: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x3a81a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x3a81a4: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x3a81a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a81a8: 0x3c050093  lui         $a1, 0x93
    ctx->pc = 0x3a81a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)147 << 16));
    // 0x3a81ac: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x3a81acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a81b0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3a81b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a81b4: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x3a81b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a81b8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3a81b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3a81bc: 0xa2030006  sb          $v1, 0x6($s0)
    ctx->pc = 0x3a81bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a81c0: 0x24a599e0  addiu       $a1, $a1, -0x6620
    ctx->pc = 0x3a81c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941152));
    // 0x3a81c4: 0xa200000b  sb          $zero, 0xB($s0)
    ctx->pc = 0x3a81c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a81c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a81c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a81cc: 0xa604001a  sh          $a0, 0x1A($s0)
    ctx->pc = 0x3a81ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 4));
    // 0x3a81d0: 0xa202000a  sb          $v0, 0xA($s0)
    ctx->pc = 0x3a81d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a81d4: 0xa2000046  sb          $zero, 0x46($s0)
    ctx->pc = 0x3a81d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 70), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a81d8: 0xa2000047  sb          $zero, 0x47($s0)
    ctx->pc = 0x3a81d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 71), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a81dc: 0xa2000052  sb          $zero, 0x52($s0)
    ctx->pc = 0x3a81dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 82), (uint8_t)GPR_U32(ctx, 0));
label_3a81e0:
    // 0x3a81e0: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x3a81e0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a81e4: 0xa0a00001  sb          $zero, 0x1($a1)
    ctx->pc = 0x3a81e4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a81e8: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x3a81e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x3a81ec: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x3a81ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x3a81f0: 0x2cc20088  sltiu       $v0, $a2, 0x88
    ctx->pc = 0x3a81f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)136) ? 1 : 0);
    // 0x3a81f4: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x3a81f4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a81f8: 0xa0a00001  sb          $zero, 0x1($a1)
    ctx->pc = 0x3a81f8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a81fc: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x3a81fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x3a8200: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x3a8200u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a8204: 0xa0a00001  sb          $zero, 0x1($a1)
    ctx->pc = 0x3a8204u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a8208: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x3a8208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x3a820c: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x3a820cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a8210: 0xa0a00001  sb          $zero, 0x1($a1)
    ctx->pc = 0x3a8210u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a8214: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x3A8214u;
    {
        const bool branch_taken_0x3a8214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A8218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8214u;
        // 0x3a8218: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8214) {
            ctx->pc = 0x3A81E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a81e0;
        }
    }
    ctx->pc = 0x3A821Cu;
    // 0x3a821c: 0x2cc10090  sltiu       $at, $a2, 0x90
    ctx->pc = 0x3a821cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)144) ? 1 : 0);
    // 0x3a8220: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A8220u;
    {
        const bool branch_taken_0x3a8220 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a8220) {
            ctx->pc = 0x3A8248u;
            goto label_3a8248;
        }
    }
    ctx->pc = 0x3A8228u;
label_3a8228:
    // 0x3a8228: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3a8228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3a822c: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x3a822cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a8230: 0x2cc20090  sltiu       $v0, $a2, 0x90
    ctx->pc = 0x3a8230u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)144) ? 1 : 0);
    // 0x3a8234: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3a8234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3a8238: 0x0  nop
    ctx->pc = 0x3a8238u;
    // NOP
    // 0x3a823c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A823Cu;
    {
        const bool branch_taken_0x3a823c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a823c) {
            ctx->pc = 0x3A8228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a8228;
        }
    }
    ctx->pc = 0x3A8244u;
    // 0x3a8244: 0x0  nop
    ctx->pc = 0x3a8244u;
    // NOP
label_3a8248:
    // 0x3a8248: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x3a8248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x3a824c: 0x24639a70  addiu       $v1, $v1, -0x6590
    ctx->pc = 0x3a824cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941296));
    // 0x3a8250: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a8250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8254: 0x0  nop
    ctx->pc = 0x3a8254u;
    // NOP
label_3a8258:
    // 0x3a8258: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a8258u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a825c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3a825cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a8260: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x3a8260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x3a8264: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3a8264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3a8268: 0x2c820328  sltiu       $v0, $a0, 0x328
    ctx->pc = 0x3a8268u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)808) ? 1 : 0);
    // 0x3a826c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a826cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a8270: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3a8270u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a8274: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3a8274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3a8278: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a8278u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a827c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3a827cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a8280: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3a8280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3a8284: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a8284u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a8288: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3a8288u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a828c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x3A828Cu;
    {
        const bool branch_taken_0x3a828c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A8290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A828Cu;
        // 0x3a8290: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a828c) {
            ctx->pc = 0x3A8258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a8258;
        }
    }
    ctx->pc = 0x3A8294u;
    // 0x3a8294: 0x2c810330  sltiu       $at, $a0, 0x330
    ctx->pc = 0x3a8294u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)816) ? 1 : 0);
    // 0x3a8298: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A8298u;
    {
        const bool branch_taken_0x3a8298 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a8298) {
            ctx->pc = 0x3A82C0u;
            goto label_3a82c0;
        }
    }
    ctx->pc = 0x3A82A0u;
label_3a82a0:
    // 0x3a82a0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3a82a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3a82a4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a82a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a82a8: 0x2c820330  sltiu       $v0, $a0, 0x330
    ctx->pc = 0x3a82a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)816) ? 1 : 0);
    // 0x3a82ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a82acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a82b0: 0x0  nop
    ctx->pc = 0x3a82b0u;
    // NOP
    // 0x3a82b4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A82B4u;
    {
        const bool branch_taken_0x3a82b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a82b4) {
            ctx->pc = 0x3A82A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a82a0;
        }
    }
    ctx->pc = 0x3A82BCu;
    // 0x3a82bc: 0x0  nop
    ctx->pc = 0x3a82bcu;
    // NOP
label_3a82c0:
    // 0x3a82c0: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x3a82c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x3a82c4: 0x24639da0  addiu       $v1, $v1, -0x6260
    ctx->pc = 0x3a82c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942112));
    // 0x3a82c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a82c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a82cc: 0x0  nop
    ctx->pc = 0x3a82ccu;
    // NOP
label_3a82d0:
    // 0x3a82d0: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a82d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a82d4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3a82d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a82d8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x3a82d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x3a82dc: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3a82dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3a82e0: 0x2c825ea8  sltiu       $v0, $a0, 0x5EA8
    ctx->pc = 0x3a82e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24232) ? 1 : 0);
    // 0x3a82e4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a82e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a82e8: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3a82e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a82ec: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3a82ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3a82f0: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a82f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a82f4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3a82f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a82f8: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3a82f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3a82fc: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a82fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a8300: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3a8300u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a8304: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x3A8304u;
    {
        const bool branch_taken_0x3a8304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A8308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8304u;
        // 0x3a8308: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8304) {
            ctx->pc = 0x3A82D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a82d0;
        }
    }
    ctx->pc = 0x3A830Cu;
    // 0x3a830c: 0x2c815eb0  sltiu       $at, $a0, 0x5EB0
    ctx->pc = 0x3a830cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24240) ? 1 : 0);
    // 0x3a8310: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A8310u;
    {
        const bool branch_taken_0x3a8310 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a8310) {
            ctx->pc = 0x3A8338u;
            goto label_3a8338;
        }
    }
    ctx->pc = 0x3A8318u;
label_3a8318:
    // 0x3a8318: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3a8318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3a831c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a831cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a8320: 0x2c825eb0  sltiu       $v0, $a0, 0x5EB0
    ctx->pc = 0x3a8320u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24240) ? 1 : 0);
    // 0x3a8324: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a8324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a8328: 0x0  nop
    ctx->pc = 0x3a8328u;
    // NOP
    // 0x3a832c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A832Cu;
    {
        const bool branch_taken_0x3a832c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a832c) {
            ctx->pc = 0x3A8318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a8318;
        }
    }
    ctx->pc = 0x3A8334u;
    // 0x3a8334: 0x0  nop
    ctx->pc = 0x3a8334u;
    // NOP
label_3a8338:
    // 0x3a8338: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a8338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a833c: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x3a833cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x3a8340: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x3a8340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x3a8344: 0x344dffff  ori         $t5, $v0, 0xFFFF
    ctx->pc = 0x3a8344u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a8348: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a8348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a834c: 0x3c074000  lui         $a3, 0x4000
    ctx->pc = 0x3a834cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
    // 0x3a8350: 0x3c05eff0  lui         $a1, 0xEFF0
    ctx->pc = 0x3a8350u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61424 << 16));
    // 0x3a8354: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x3a8354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x3a8358: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x3a8358u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a835c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a835cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a8360: 0x34621000  ori         $v0, $v1, 0x1000
    ctx->pc = 0x3a8360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x3a8364: 0x8c28ceb8  lw          $t0, -0x3148($at)
    ctx->pc = 0x3a8364u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x3a8368: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a8368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a836c: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x3a836cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x3a8370: 0x8c26cec4  lw          $a2, -0x313C($at)
    ctx->pc = 0x3a8370u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x3a8374: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a8374u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8378: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a8378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a837c: 0x8c2ccec8  lw          $t4, -0x3138($at)
    ctx->pc = 0x3a837cu;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x81CEC8u));
    // 0x3a8380: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a8380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a8384: 0x8c2bcecc  lw          $t3, -0x3134($at)
    ctx->pc = 0x3a8384u;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x81CECCu));
    // 0x3a8388: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a8388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a838c: 0x8c2aced0  lw          $t2, -0x3130($at)
    ctx->pc = 0x3a838cu;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x81CED0u));
    // 0x3a8390: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a8390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a8394: 0x8c23ced8  lw          $v1, -0x3128($at)
    ctx->pc = 0x3a8394u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CED8u));
    // 0x3a8398: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a8398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a839c: 0xac22cebc  sw          $v0, -0x3144($at)
    ctx->pc = 0x3a839cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x3a83a0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a83a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a83a4: 0xc51025  or          $v0, $a2, $a1
    ctx->pc = 0x3a83a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x3a83a8: 0xac27ceb8  sw          $a3, -0x3148($at)
    ctx->pc = 0x3a83a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x3a83ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a83acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a83b0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a83b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a83b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a83b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a83b8: 0xac22cec4  sw          $v0, -0x313C($at)
    ctx->pc = 0x3a83b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x3a83bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a83bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a83c0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a83c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a83c4: 0x8c2ecec4  lw          $t6, -0x313C($at)
    ctx->pc = 0x3a83c4u;
    SET_GPR_S32(ctx, 14, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x3a83c8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a83c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a83cc: 0x1cd6824  and         $t5, $t6, $t5
    ctx->pc = 0x3a83ccu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) & GPR_U64(ctx, 13));
    // 0x3a83d0: 0x8c22cedc  lw          $v0, -0x3124($at)
    ctx->pc = 0x3a83d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954716)));
    // 0x3a83d4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a83d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a83d8: 0xac2dcec4  sw          $t5, -0x313C($at)
    ctx->pc = 0x3a83d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x3a83dc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a83dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a83e0: 0x8c2dcec4  lw          $t5, -0x313C($at)
    ctx->pc = 0x3a83e0u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x3a83e4: 0x1ac6025  or          $t4, $t5, $t4
    ctx->pc = 0x3a83e4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 13) | GPR_U64(ctx, 12));
    // 0x3a83e8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a83e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a83ec: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x3a83ecu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
    // 0x3a83f0: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x3a83f0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x3a83f4: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x3a83f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x3a83f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3a83f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3a83fc: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x3A83FCu;
    SET_GPR_U32(ctx, 31, 0x3A8404u);
    ctx->pc = 0x3A8400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A83FCu;
    // 0x3a8400: 0xac22cec0  sw          $v0, -0x3140($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954688), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x3A83FCu, 0x3A8404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8404u;
label_3a8404:
    // 0x3a8404: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a8404u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a8408: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a8408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a840c: 0xc05ee50  jal         func_17B940
    ctx->pc = 0x3A840Cu;
    SET_GPR_U32(ctx, 31, 0x3A8414u);
    ctx->pc = 0x3A8410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A840Cu;
    // 0x3a8410: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B940u, 0x3A840Cu, 0x3A8414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8414u;
label_3a8414:
    // 0x3a8414: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a8414u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a8418: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x3a8418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3a841c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3a841cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3a8420: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3a8420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a8424: 0xc05ee20  jal         func_17B880
    ctx->pc = 0x3A8424u;
    SET_GPR_U32(ctx, 31, 0x3A842Cu);
    ctx->pc = 0x3A8428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8424u;
    // 0x3a8428: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B880u, 0x3A8424u, 0x3A842Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A842Cu;
label_3a842c:
    // 0x3a842c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a842cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a8430: 0xc05ee4c  jal         func_17B930
    ctx->pc = 0x3A8430u;
    SET_GPR_U32(ctx, 31, 0x3A8438u);
    ctx->pc = 0x3A8434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8430u;
    // 0x3a8434: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B930u, 0x3A8430u, 0x3A8438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8438u;
label_3a8438:
    // 0x3a8438: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a8438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a843c: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x3a843cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
    // 0x3a8440: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x3a8440u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x3a8444: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a8444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a8448: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3a8448u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3a844c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x3a844cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3a8450: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x3a8450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x3a8454: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3a8454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3a8458: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a8458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a845c: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x3A845Cu;
    SET_GPR_U32(ctx, 31, 0x3A8464u);
    ctx->pc = 0x3A8460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A845Cu;
    // 0x3a8460: 0xac22ceb8  sw          $v0, -0x3148($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x3A845Cu, 0x3A8464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8464u;
label_3a8464:
    // 0x3a8464: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3a8464u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3a8468: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x3a8468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3a846c: 0xc04ca14  jal         func_132850
    ctx->pc = 0x3A846Cu;
    SET_GPR_U32(ctx, 31, 0x3A8474u);
    ctx->pc = 0x3A8470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A846Cu;
    // 0x3a8470: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x3A846Cu, 0x3A8474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8474u;
label_3a8474:
    // 0x3a8474: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3a8474u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3a8478: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x3a8478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3a847c: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x3A847Cu;
    SET_GPR_U32(ctx, 31, 0x3A8484u);
    ctx->pc = 0x3A8480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A847Cu;
    // 0x3a8480: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x3A847Cu, 0x3A8484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8484u;
label_3a8484:
    // 0x3a8484: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3a8484u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3a8488: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x3a8488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3a848c: 0xc04ca14  jal         func_132850
    ctx->pc = 0x3A848Cu;
    SET_GPR_U32(ctx, 31, 0x3A8494u);
    ctx->pc = 0x3A8490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A848Cu;
    // 0x3a8490: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x3A848Cu, 0x3A8494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8494u;
label_3a8494:
    // 0x3a8494: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x3a8494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x3a8498: 0xc054d98  jal         func_153660
    ctx->pc = 0x3A8498u;
    SET_GPR_U32(ctx, 31, 0x3A84A0u);
    ctx->pc = 0x3A849Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8498u;
    // 0x3a849c: 0x3c0501b2  lui         $a1, 0x1B2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)434 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153660u, 0x3A8498u, 0x3A84A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A84A0u;
label_3a84a0:
    // 0x3a84a0: 0xc0550b0  jal         func_1542C0
    ctx->pc = 0x3A84A0u;
    SET_GPR_U32(ctx, 31, 0x3A84A8u);
    ctx->pc = 0x3A84A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A84A0u;
    // 0x3a84a4: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1542C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1542C0u, 0x3A84A0u, 0x3A84A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A84A8u;
label_3a84a8:
    // 0x3a84a8: 0x1000012f  b           . + 4 + (0x12F << 2)
    ctx->pc = 0x3A84A8u;
    {
        const bool branch_taken_0x3a84a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a84a8) {
            ctx->pc = 0x3A8968u;
            goto label_3a8968;
        }
    }
    ctx->pc = 0x3A84B0u;
label_3a84b0:
    // 0x3a84b0: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x3A84B0u;
    SET_GPR_U32(ctx, 31, 0x3A84B8u);
    ctx->pc = 0x3A84B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A84B0u;
    // 0x3a84b4: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x3A84B0u, 0x3A84B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A84B8u;
label_3a84b8:
    // 0x3a84b8: 0x1440012b  bnez        $v0, . + 4 + (0x12B << 2)
    ctx->pc = 0x3A84B8u;
    {
        const bool branch_taken_0x3a84b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A84BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A84B8u;
        // 0x3a84bc: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a84b8) {
            ctx->pc = 0x3A8968u;
            goto label_3a8968;
        }
    }
    ctx->pc = 0x3A84C0u;
    // 0x3a84c0: 0xc05551c  jal         func_155470
    ctx->pc = 0x3A84C0u;
    SET_GPR_U32(ctx, 31, 0x3A84C8u);
    ctx->pc = 0x155470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155470u, 0x3A84C0u, 0x3A84C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A84C8u;
label_3a84c8:
    // 0x3a84c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a84c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a84cc: 0x10430126  beq         $v0, $v1, . + 4 + (0x126 << 2)
    ctx->pc = 0x3A84CCu;
    {
        const bool branch_taken_0x3a84cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a84cc) {
            ctx->pc = 0x3A8968u;
            goto label_3a8968;
        }
    }
    ctx->pc = 0x3A84D4u;
    // 0x3a84d4: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x3a84d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a84d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a84d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a84dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a84dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3a84e0: 0xc0eb6ac  jal         func_3ADAB0
    ctx->pc = 0x3A84E0u;
    SET_GPR_U32(ctx, 31, 0x3A84E8u);
    ctx->pc = 0x3A84E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A84E0u;
    // 0x3a84e4: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ADAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ADAB0u, 0x3A84E0u, 0x3A84E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A84E8u;
label_3a84e8:
    // 0x3a84e8: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x3a84e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x3a84ec: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x3a84ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3a84f0: 0xc052ec4  jal         func_14BB10
    ctx->pc = 0x3A84F0u;
    SET_GPR_U32(ctx, 31, 0x3A84F8u);
    ctx->pc = 0x3A84F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A84F0u;
    // 0x3a84f4: 0x24842620  addiu       $a0, $a0, 0x2620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BB10u, 0x3A84F0u, 0x3A84F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A84F8u;
label_3a84f8:
    // 0x3a84f8: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x3A84F8u;
    SET_GPR_U32(ctx, 31, 0x3A8500u);
    ctx->pc = 0x3A84FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A84F8u;
    // 0x3a84fc: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x3A84F8u, 0x3A8500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8500u;
label_3a8500:
    // 0x3a8500: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A8500u;
    {
        const bool branch_taken_0x3a8500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a8500) {
            ctx->pc = 0x3A8528u;
            goto label_3a8528;
        }
    }
    ctx->pc = 0x3A8508u;
label_3a8508:
    // 0x3a8508: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3a8508u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3a850c: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x3a850cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    // 0x3a8510: 0xc04c918  jal         func_132460
    ctx->pc = 0x3A8510u;
    SET_GPR_U32(ctx, 31, 0x3A8518u);
    ctx->pc = 0x3A8514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8510u;
    // 0x3a8514: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x3A8510u, 0x3A8518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8518u;
label_3a8518:
    // 0x3a8518: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x3A8518u;
    SET_GPR_U32(ctx, 31, 0x3A8520u);
    ctx->pc = 0x3A851Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8518u;
    // 0x3a851c: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x3A8518u, 0x3A8520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8520u;
label_3a8520:
    // 0x3a8520: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3A8520u;
    {
        const bool branch_taken_0x3a8520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a8520) {
            ctx->pc = 0x3A8508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a8508;
        }
    }
    ctx->pc = 0x3A8528u;
label_3a8528:
    // 0x3a8528: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a8528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a852c: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x3a852cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x3a8530: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3a8530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3a8534: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3a8534u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3a8538: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x3a8538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3a853c: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x3a853cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x3a8540: 0x2406020e  addiu       $a2, $zero, 0x20E
    ctx->pc = 0x3a8540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 526));
    // 0x3a8544: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3a8544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3a8548: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a8548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a854c: 0xc04cd28  jal         func_1334A0
    ctx->pc = 0x3A854Cu;
    SET_GPR_U32(ctx, 31, 0x3A8554u);
    ctx->pc = 0x3A8550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A854Cu;
    // 0x3a8550: 0xac22ceb8  sw          $v0, -0x3148($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A0u, 0x3A854Cu, 0x3A8554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8554u;
label_3a8554:
    // 0x3a8554: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x3a8554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x3a8558: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a8558u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a855c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a855cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a8560: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3a8560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3a8564: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3a8564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3a8568: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a8568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a856c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x3a856cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x3a8570: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a8570u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8574: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3a8574u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3a8578: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a8578u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a857c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3a857cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8580: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3a8580u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8584: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3A8584u;
    SET_GPR_U32(ctx, 31, 0x3A858Cu);
    ctx->pc = 0x3A8588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8584u;
    // 0x3a8588: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3A8584u, 0x3A858Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A858Cu;
label_3a858c:
    // 0x3a858c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a858cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a8590: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x3a8590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3a8594: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x3a8594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x3a8598: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a8598u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a859c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a859cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a85a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a85a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a85a4: 0xc063c70  jal         func_18F1C0
    ctx->pc = 0x3A85A4u;
    SET_GPR_U32(ctx, 31, 0x3A85ACu);
    ctx->pc = 0x3A85A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A85A4u;
    // 0x3a85a8: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F1C0u, 0x3A85A4u, 0x3A85ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A85ACu;
label_3a85ac:
    // 0x3a85ac: 0x100000ee  b           . + 4 + (0xEE << 2)
    ctx->pc = 0x3A85ACu;
    {
        const bool branch_taken_0x3a85ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a85ac) {
            ctx->pc = 0x3A8968u;
            goto label_3a8968;
        }
    }
    ctx->pc = 0x3A85B4u;
    // 0x3a85b4: 0x0  nop
    ctx->pc = 0x3a85b4u;
    // NOP
label_3a85b8:
    // 0x3a85b8: 0x86020016  lh          $v0, 0x16($s0)
    ctx->pc = 0x3a85b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x3a85bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A85BCu;
    {
        const bool branch_taken_0x3a85bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a85bc) {
            ctx->pc = 0x3A85D0u;
            goto label_3a85d0;
        }
    }
    ctx->pc = 0x3A85C4u;
    // 0x3a85c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3a85c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3a85c8: 0xa6020016  sh          $v0, 0x16($s0)
    ctx->pc = 0x3a85c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x3a85cc: 0x0  nop
    ctx->pc = 0x3a85ccu;
    // NOP
label_3a85d0:
    // 0x3a85d0: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x3a85d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
    // 0x3a85d4: 0x90228c11  lbu         $v0, -0x73EF($at)
    ctx->pc = 0x3a85d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x6B8C11u));
    // 0x3a85d8: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x3A85D8u;
    {
        const bool branch_taken_0x3a85d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a85d8) {
            ctx->pc = 0x3A86C8u;
            goto label_3a86c8;
        }
    }
    ctx->pc = 0x3A85E0u;
    // 0x3a85e0: 0x92020047  lbu         $v0, 0x47($s0)
    ctx->pc = 0x3a85e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 71)));
    // 0x3a85e4: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x3A85E4u;
    {
        const bool branch_taken_0x3a85e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a85e4) {
            ctx->pc = 0x3A86C8u;
            goto label_3a86c8;
        }
    }
    ctx->pc = 0x3A85ECu;
    // 0x3a85ec: 0x9205000b  lbu         $a1, 0xB($s0)
    ctx->pc = 0x3a85ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
    // 0x3a85f0: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3a85f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3a85f4: 0x24848c10  addiu       $a0, $a0, -0x73F0
    ctx->pc = 0x3a85f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    // 0x3a85f8: 0xc052754  jal         func_149D50
    ctx->pc = 0x3A85F8u;
    SET_GPR_U32(ctx, 31, 0x3A8600u);
    ctx->pc = 0x3A85FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A85F8u;
    // 0x3a85fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149D50u, 0x3A85F8u, 0x3A8600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8600u;
label_3a8600:
    // 0x3a8600: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x3a8600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3a8604: 0x10430016  beq         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x3A8604u;
    {
        const bool branch_taken_0x3a8604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A8608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8604u;
        // 0x3a8608: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8604) {
            ctx->pc = 0x3A8660u;
            goto label_3a8660;
        }
    }
    ctx->pc = 0x3A860Cu;
    // 0x3a860c: 0x10450014  beq         $v0, $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3A860Cu;
    {
        const bool branch_taken_0x3a860c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x3a860c) {
            ctx->pc = 0x3A8660u;
            goto label_3a8660;
        }
    }
    ctx->pc = 0x3A8614u;
    // 0x3a8614: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A8614u;
    {
        const bool branch_taken_0x3a8614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8614u;
        // 0x3a8618: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8614) {
            ctx->pc = 0x3A8630u;
            goto label_3a8630;
        }
    }
    ctx->pc = 0x3A861Cu;
    // 0x3a861c: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A861Cu;
    {
        const bool branch_taken_0x3a861c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a861c) {
            ctx->pc = 0x3A8630u;
            goto label_3a8630;
        }
    }
    ctx->pc = 0x3A8624u;
    // 0x3a8624: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x3A8624u;
    {
        const bool branch_taken_0x3a8624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a8624) {
            ctx->pc = 0x3A8690u;
            goto label_3a8690;
        }
    }
    ctx->pc = 0x3A862Cu;
    // 0x3a862c: 0x0  nop
    ctx->pc = 0x3a862cu;
    // NOP
label_3a8630:
    // 0x3a8630: 0x9204000b  lbu         $a0, 0xB($s0)
    ctx->pc = 0x3a8630u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
    // 0x3a8634: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a8634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3a8638: 0x24428e98  addiu       $v0, $v0, -0x7168
    ctx->pc = 0x3a8638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938264));
    // 0x3a863c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x3a863cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3a8640: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3a8640u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a8644: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a8644u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a8648: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3a8648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a864c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a864cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a8650: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a8650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a8654: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3A8654u;
    {
        const bool branch_taken_0x3a8654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8654u;
        // 0x3a8658: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8654) {
            ctx->pc = 0x3A86B8u;
            goto label_3a86b8;
        }
    }
    ctx->pc = 0x3A865Cu;
    // 0x3a865c: 0x0  nop
    ctx->pc = 0x3a865cu;
    // NOP
label_3a8660:
    // 0x3a8660: 0x9204000b  lbu         $a0, 0xB($s0)
    ctx->pc = 0x3a8660u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
    // 0x3a8664: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a8664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3a8668: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a8668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a866c: 0x24428e98  addiu       $v0, $v0, -0x7168
    ctx->pc = 0x3a866cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938264));
    // 0x3a8670: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x3a8670u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3a8674: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3a8674u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a8678: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a8678u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a867c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3a867cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a8680: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a8680u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a8684: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a8684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a8688: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3A8688u;
    {
        const bool branch_taken_0x3a8688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A868Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8688u;
        // 0x3a868c: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8688) {
            ctx->pc = 0x3A86B8u;
            goto label_3a86b8;
        }
    }
    ctx->pc = 0x3A8690u;
label_3a8690:
    // 0x3a8690: 0x9204000b  lbu         $a0, 0xB($s0)
    ctx->pc = 0x3a8690u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
    // 0x3a8694: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a8694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3a8698: 0x24428e98  addiu       $v0, $v0, -0x7168
    ctx->pc = 0x3a8698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938264));
    // 0x3a869c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x3a869cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3a86a0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3a86a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a86a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a86a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a86a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3a86a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a86ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a86acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a86b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a86b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a86b4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x3a86b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_3a86b8:
    // 0x3a86b8: 0x9202000b  lbu         $v0, 0xB($s0)
    ctx->pc = 0x3a86b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
    // 0x3a86bc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3a86bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3a86c0: 0xa202000b  sb          $v0, 0xB($s0)
    ctx->pc = 0x3a86c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a86c4: 0x0  nop
    ctx->pc = 0x3a86c4u;
    // NOP
label_3a86c8:
    // 0x3a86c8: 0x9202000a  lbu         $v0, 0xA($s0)
    ctx->pc = 0x3a86c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x3a86cc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A86CCu;
    {
        const bool branch_taken_0x3a86cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A86D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A86CCu;
        // 0x3a86d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a86cc) {
            ctx->pc = 0x3A86E8u;
            goto label_3a86e8;
        }
    }
    ctx->pc = 0x3A86D4u;
    // 0x3a86d4: 0xc0ea260  jal         func_3A8980
    ctx->pc = 0x3A86D4u;
    SET_GPR_U32(ctx, 31, 0x3A86DCu);
    ctx->pc = 0x3A8980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8980u, 0x3A86D4u, 0x3A86DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A86DCu;
label_3a86dc:
    // 0x3a86dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3A86DCu;
    {
        const bool branch_taken_0x3a86dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a86dc) {
            ctx->pc = 0x3A86F0u;
            goto label_3a86f0;
        }
    }
    ctx->pc = 0x3A86E4u;
    // 0x3a86e4: 0x0  nop
    ctx->pc = 0x3a86e4u;
    // NOP
label_3a86e8:
    // 0x3a86e8: 0xc0ea47c  jal         func_3A91F0
    ctx->pc = 0x3A86E8u;
    SET_GPR_U32(ctx, 31, 0x3A86F0u);
    ctx->pc = 0x3A86ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A86E8u;
    // 0x3a86ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A91F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A91F0u, 0x3A86E8u, 0x3A86F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A86F0u;
label_3a86f0:
    // 0x3a86f0: 0xc0eb134  jal         func_3AC4D0
    ctx->pc = 0x3A86F0u;
    SET_GPR_U32(ctx, 31, 0x3A86F8u);
    ctx->pc = 0x3A86F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A86F0u;
    // 0x3a86f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC4D0u, 0x3A86F0u, 0x3A86F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A86F8u;
label_3a86f8:
    // 0x3a86f8: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x3A86F8u;
    {
        const bool branch_taken_0x3a86f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a86f8) {
            ctx->pc = 0x3A8968u;
            goto label_3a8968;
        }
    }
    ctx->pc = 0x3A8700u;
label_3a8700:
    // 0x3a8700: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x3a8700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3a8704: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a8704u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a8708: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x3a8708u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a870c: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x3a870cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x3a8710: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x3a8710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3a8714: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a8714u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8718: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a8718u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a871c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a871cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8720: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x3A8720u;
    SET_GPR_U32(ctx, 31, 0x3A8728u);
    ctx->pc = 0x3A8724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8720u;
    // 0x3a8724: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x3A8720u, 0x3A8728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8728u;
label_3a8728:
    // 0x3a8728: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a8728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a872c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a872cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a8730: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3a8730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3a8734: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3a8734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3a8738: 0x3c020500  lui         $v0, 0x500
    ctx->pc = 0x3a8738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1280 << 16));
    // 0x3a873c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a873cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8740: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3a8740u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3a8744: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a8744u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8748: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a8748u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a874c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3a874cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8750: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3a8750u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8754: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3A8754u;
    SET_GPR_U32(ctx, 31, 0x3A875Cu);
    ctx->pc = 0x3A8758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8754u;
    // 0x3a8758: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3A8754u, 0x3A875Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A875Cu;
label_3a875c:
    // 0x3a875c: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3a875cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3a8760: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x3A8760u;
    SET_GPR_U32(ctx, 31, 0x3A8768u);
    ctx->pc = 0x3A8764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8760u;
    // 0x3a8764: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x3A8760u, 0x3A8768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8768u;
label_3a8768:
    // 0x3a8768: 0xc0eb134  jal         func_3AC4D0
    ctx->pc = 0x3A8768u;
    SET_GPR_U32(ctx, 31, 0x3A8770u);
    ctx->pc = 0x3A876Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8768u;
    // 0x3a876c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC4D0u, 0x3A8768u, 0x3A8770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8770u;
label_3a8770:
    // 0x3a8770: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x3A8770u;
    {
        const bool branch_taken_0x3a8770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a8770) {
            ctx->pc = 0x3A8968u;
            goto label_3a8968;
        }
    }
    ctx->pc = 0x3A8778u;
label_3a8778:
    // 0x3a8778: 0xc0eb134  jal         func_3AC4D0
    ctx->pc = 0x3A8778u;
    SET_GPR_U32(ctx, 31, 0x3A8780u);
    ctx->pc = 0x3AC4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC4D0u, 0x3A8778u, 0x3A8780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8780u;
label_3a8780:
    // 0x3a8780: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a8780u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a8784: 0xc063d48  jal         func_18F520
    ctx->pc = 0x3A8784u;
    SET_GPR_U32(ctx, 31, 0x3A878Cu);
    ctx->pc = 0x3A8788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8784u;
    // 0x3a8788: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x3A8784u, 0x3A878Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A878Cu;
label_3a878c:
    // 0x3a878c: 0x14400076  bnez        $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x3A878Cu;
    {
        const bool branch_taken_0x3a878c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A8790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A878Cu;
        // 0x3a8790: 0x3c040082  lui         $a0, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a878c) {
            ctx->pc = 0x3A8968u;
            goto label_3a8968;
        }
    }
    ctx->pc = 0x3A8794u;
    // 0x3a8794: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3a8794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a8798: 0xc04c918  jal         func_132460
    ctx->pc = 0x3A8798u;
    SET_GPR_U32(ctx, 31, 0x3A87A0u);
    ctx->pc = 0x3A879Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8798u;
    // 0x3a879c: 0x2484fca0  addiu       $a0, $a0, -0x360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x3A8798u, 0x3A87A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A87A0u;
label_3a87a0:
    // 0x3a87a0: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x3a87a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a87a4: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3a87a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3a87a8: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3a87a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3a87ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a87acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3a87b0: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x3A87B0u;
    SET_GPR_U32(ctx, 31, 0x3A87B8u);
    ctx->pc = 0x3A87B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A87B0u;
    // 0x3a87b4: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x3A87B0u, 0x3A87B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A87B8u;
label_3a87b8:
    // 0x3a87b8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a87b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a87bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a87bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a87c0: 0xc05ee50  jal         func_17B940
    ctx->pc = 0x3A87C0u;
    SET_GPR_U32(ctx, 31, 0x3A87C8u);
    ctx->pc = 0x3A87C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A87C0u;
    // 0x3a87c4: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B940u, 0x3A87C0u, 0x3A87C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A87C8u;
label_3a87c8:
    // 0x3a87c8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a87c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a87cc: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x3a87ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3a87d0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3a87d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3a87d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3a87d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a87d8: 0xc05ee20  jal         func_17B880
    ctx->pc = 0x3A87D8u;
    SET_GPR_U32(ctx, 31, 0x3A87E0u);
    ctx->pc = 0x3A87DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A87D8u;
    // 0x3a87dc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B880u, 0x3A87D8u, 0x3A87E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A87E0u;
label_3a87e0:
    // 0x3a87e0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a87e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a87e4: 0xc05ee4c  jal         func_17B930
    ctx->pc = 0x3A87E4u;
    SET_GPR_U32(ctx, 31, 0x3A87ECu);
    ctx->pc = 0x3A87E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A87E4u;
    // 0x3a87e8: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B930u, 0x3A87E4u, 0x3A87ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A87ECu;
label_3a87ec:
    // 0x3a87ec: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a87ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a87f0: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x3a87f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x3a87f4: 0x8c24ceb8  lw          $a0, -0x3148($at)
    ctx->pc = 0x3a87f4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x3a87f8: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x3a87f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a87fc: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x3a87fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
    // 0x3a8800: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a8800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a8804: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3a8804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3a8808: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a8808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a880c: 0xac23ceb8  sw          $v1, -0x3148($at)
    ctx->pc = 0x3a880cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x3a8810: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a8810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a8814: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x3a8814u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x3a8818: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3a8818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3a881c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a881cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a8820: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x3A8820u;
    {
        const bool branch_taken_0x3a8820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8820u;
        // 0x3a8824: 0xac22ceb8  sw          $v0, -0x3148($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8820) {
            ctx->pc = 0x3A8968u;
            goto label_3a8968;
        }
    }
    ctx->pc = 0x3A8828u;
label_3a8828:
    // 0x3a8828: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3a8828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3a882c: 0x9022ff2c  lbu         $v0, -0xD4($at)
    ctx->pc = 0x3a882cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x92FF2Cu));
    // 0x3a8830: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x3a8830u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3a8834: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3a8834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3a8838: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3a8838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3a883c: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x3A883Cu;
    {
        const bool branch_taken_0x3a883c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a883c) {
            ctx->pc = 0x3A8968u;
            goto label_3a8968;
        }
    }
    ctx->pc = 0x3A8844u;
    // 0x3a8844: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x3a8844u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a8848: 0x3c02100f  lui         $v0, 0x100F
    ctx->pc = 0x3a8848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4111 << 16));
    // 0x3a884c: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x3a884cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a8850: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x3a8850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a8854: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x3a8854u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a8858: 0x3c02fbff  lui         $v0, 0xFBFF
    ctx->pc = 0x3a8858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64511 << 16));
    // 0x3a885c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x3a885cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a8860: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a8860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a8864: 0x8c2acec4  lw          $t2, -0x313C($at)
    ctx->pc = 0x3a8864u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x3a8868: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3a8868u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3a886c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a886cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a8870: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3a8870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3a8874: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a8874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a8878: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x3a8878u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x3a887c: 0x8c29cec8  lw          $t1, -0x3138($at)
    ctx->pc = 0x3a887cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954696)));
    // 0x3a8880: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a8880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a8884: 0x8c28cecc  lw          $t0, -0x3134($at)
    ctx->pc = 0x3a8884u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81CECCu));
    // 0x3a8888: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a8888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a888c: 0x8c27ced0  lw          $a3, -0x3130($at)
    ctx->pc = 0x3a888cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81CED0u));
    // 0x3a8890: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a8890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a8894: 0x8c26ced8  lw          $a2, -0x3128($at)
    ctx->pc = 0x3a8894u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CED8u));
    // 0x3a8898: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a8898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a889c: 0x8c25cedc  lw          $a1, -0x3124($at)
    ctx->pc = 0x3a889cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81CEDCu));
    // 0x3a88a0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a88a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a88a4: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x3a88a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x3a88a8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a88a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a88ac: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3a88acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3a88b0: 0xac2acec4  sw          $t2, -0x313C($at)
    ctx->pc = 0x3a88b0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954692), GPR_U32(ctx, 10));
    // 0x3a88b4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a88b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a88b8: 0x8c2acec4  lw          $t2, -0x313C($at)
    ctx->pc = 0x3a88b8u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x3a88bc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a88bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a88c0: 0xac22cebc  sw          $v0, -0x3144($at)
    ctx->pc = 0x3a88c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x3a88c4: 0x1491025  or          $v0, $t2, $t1
    ctx->pc = 0x3a88c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x3a88c8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a88c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a88cc: 0x1021025  or          $v0, $t0, $v0
    ctx->pc = 0x3a88ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x3a88d0: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x3a88d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x3a88d4: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x3a88d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x3a88d8: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x3a88d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x3a88dc: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x3A88DCu;
    SET_GPR_U32(ctx, 31, 0x3A88E4u);
    ctx->pc = 0x3A88E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A88DCu;
    // 0x3a88e0: 0xac22cec0  sw          $v0, -0x3140($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954688), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x3A88DCu, 0x3A88E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A88E4u;
label_3a88e4:
    // 0x3a88e4: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3a88e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3a88e8: 0xc095128  jal         func_2544A0
    ctx->pc = 0x3A88E8u;
    SET_GPR_U32(ctx, 31, 0x3A88F0u);
    ctx->pc = 0x3A88ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A88E8u;
    // 0x3a88ec: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544A0u, 0x3A88E8u, 0x3A88F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A88F0u;
label_3a88f0:
    // 0x3a88f0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3a88f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3a88f4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x3a88f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3a88f8: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x3A88F8u;
    SET_GPR_U32(ctx, 31, 0x3A8900u);
    ctx->pc = 0x3A88FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A88F8u;
    // 0x3a88fc: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x3A88F8u, 0x3A8900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8900u;
label_3a8900:
    // 0x3a8900: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3a8900u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3a8904: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x3a8904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3a8908: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x3A8908u;
    SET_GPR_U32(ctx, 31, 0x3A8910u);
    ctx->pc = 0x3A890Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8908u;
    // 0x3a890c: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x3A8908u, 0x3A8910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8910u;
label_3a8910:
    // 0x3a8910: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a8910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a8914: 0x2402efff  addiu       $v0, $zero, -0x1001
    ctx->pc = 0x3a8914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x3a8918: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x3a8918u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x3a891c: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x3a891cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x3a8920: 0x3c0501b2  lui         $a1, 0x1B2
    ctx->pc = 0x3a8920u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)434 << 16));
    // 0x3a8924: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3a8924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3a8928: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a8928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a892c: 0xc054ddc  jal         func_153770
    ctx->pc = 0x3A892Cu;
    SET_GPR_U32(ctx, 31, 0x3A8934u);
    ctx->pc = 0x3A8930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A892Cu;
    // 0x3a8930: 0xac22cebc  sw          $v0, -0x3144($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153770u, 0x3A892Cu, 0x3A8934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8934u;
label_3a8934:
    // 0x3a8934: 0xc0550b4  jal         func_1542D0
    ctx->pc = 0x3A8934u;
    SET_GPR_U32(ctx, 31, 0x3A893Cu);
    ctx->pc = 0x3A8938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8934u;
    // 0x3a8938: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1542D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1542D0u, 0x3A8934u, 0x3A893Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A893Cu;
label_3a893c:
    // 0x3a893c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a893cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a8940: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x3a8940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3a8944: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x3a8944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x3a8948: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a8948u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a894c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a894cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8950: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a8950u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8954: 0xc063c70  jal         func_18F1C0
    ctx->pc = 0x3A8954u;
    SET_GPR_U32(ctx, 31, 0x3A895Cu);
    ctx->pc = 0x3A8958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8954u;
    // 0x3a8958: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F1C0u, 0x3A8954u, 0x3A895Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A895Cu;
label_3a895c:
    // 0x3a895c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3A895Cu;
    {
        const bool branch_taken_0x3a895c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A895Cu;
        // 0x3a8960: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a895c) {
            ctx->pc = 0x3A8970u;
            goto label_3a8970;
        }
    }
    ctx->pc = 0x3A8964u;
    // 0x3a8964: 0x0  nop
    ctx->pc = 0x3a8964u;
    // NOP
label_3a8968:
    // 0x3a8968: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a8968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a896c: 0x0  nop
    ctx->pc = 0x3a896cu;
    // NOP
label_3a8970:
    // 0x3a8970: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a8970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a8974: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a8974u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a8978: 0x3e00008  jr          $ra
    ctx->pc = 0x3A8978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A897Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8978u;
        // 0x3a897c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A8978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A8980u;
}
