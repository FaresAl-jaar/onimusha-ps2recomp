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

// Function: sub_00297CC0
// Address: 0x297cc0 - 0x297ebc
void sub_00297CC0_0x297cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297CC0_0x297cc0");
#endif

    switch (ctx->pc) {
        case 0x297d00u: goto label_297d00;
        case 0x297d10u: goto label_297d10;
        case 0x297d20u: goto label_297d20;
        case 0x297d30u: goto label_297d30;
        case 0x297d40u: goto label_297d40;
        case 0x297d50u: goto label_297d50;
        case 0x297d60u: goto label_297d60;
        case 0x297d70u: goto label_297d70;
        case 0x297d80u: goto label_297d80;
        case 0x297d90u: goto label_297d90;
        case 0x297da0u: goto label_297da0;
        case 0x297db0u: goto label_297db0;
        case 0x297dc0u: goto label_297dc0;
        case 0x297dd0u: goto label_297dd0;
        case 0x297de0u: goto label_297de0;
        case 0x297df0u: goto label_297df0;
        case 0x297e00u: goto label_297e00;
        case 0x297e10u: goto label_297e10;
        case 0x297e20u: goto label_297e20;
        case 0x297e30u: goto label_297e30;
        case 0x297e40u: goto label_297e40;
        case 0x297e50u: goto label_297e50;
        case 0x297e60u: goto label_297e60;
        case 0x297e70u: goto label_297e70;
        case 0x297e80u: goto label_297e80;
        case 0x297e90u: goto label_297e90;
        case 0x297ea0u: goto label_297ea0;
        case 0x297eb0u: goto label_297eb0;
        default: break;
    }

    ctx->pc = 0x297cc0u;

    // 0x297cc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x297cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x297cc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x297cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x297cc8: 0x9083065c  lbu         $v1, 0x65C($a0)
    ctx->pc = 0x297cc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1628)));
    // 0x297ccc: 0x2463ff7e  addiu       $v1, $v1, -0x82
    ctx->pc = 0x297cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967166));
    // 0x297cd0: 0x2c61001d  sltiu       $at, $v1, 0x1D
    ctx->pc = 0x297cd0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)29) ? 1 : 0);
    // 0x297cd4: 0x10200076  beqz        $at, . + 4 + (0x76 << 2)
    ctx->pc = 0x297CD4u;
    {
        const bool branch_taken_0x297cd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x297CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297CD4u;
        // 0x297cd8: 0x3c050067  lui         $a1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297cd4) {
            ctx->pc = 0x297EB0u;
            goto label_297eb0;
        }
    }
    ctx->pc = 0x297CDCu;
    // 0x297cdc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x297cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x297ce0: 0x24a56f30  addiu       $a1, $a1, 0x6F30
    ctx->pc = 0x297ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28464));
    // 0x297ce4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x297ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x297ce8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x297ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x297cec: 0x600008  jr          $v1
    ctx->pc = 0x297CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x297CF8u: goto label_297cf8;
            case 0x297D08u: goto label_297d08;
            case 0x297D18u: goto label_297d18;
            case 0x297D28u: goto label_297d28;
            case 0x297D38u: goto label_297d38;
            case 0x297D48u: goto label_297d48;
            case 0x297D58u: goto label_297d58;
            case 0x297D68u: goto label_297d68;
            case 0x297D78u: goto label_297d78;
            case 0x297D88u: goto label_297d88;
            case 0x297D98u: goto label_297d98;
            case 0x297DA8u: goto label_297da8;
            case 0x297DB8u: goto label_297db8;
            case 0x297DC8u: goto label_297dc8;
            case 0x297DD8u: goto label_297dd8;
            case 0x297DE8u: goto label_297de8;
            case 0x297DF8u: goto label_297df8;
            case 0x297E08u: goto label_297e08;
            case 0x297E18u: goto label_297e18;
            case 0x297E28u: goto label_297e28;
            case 0x297E38u: goto label_297e38;
            case 0x297E48u: goto label_297e48;
            case 0x297E58u: goto label_297e58;
            case 0x297E68u: goto label_297e68;
            case 0x297E78u: goto label_297e78;
            case 0x297E88u: goto label_297e88;
            case 0x297E98u: goto label_297e98;
            case 0x297EA8u: goto label_297ea8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297CECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x297CF4u;
    // 0x297cf4: 0x0  nop
    ctx->pc = 0x297cf4u;
    // NOP
label_297cf8:
    // 0x297cf8: 0xc0a0458  jal         func_281160
    ctx->pc = 0x297CF8u;
    SET_GPR_U32(ctx, 31, 0x297D00u);
    ctx->pc = 0x281160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281160u, 0x297CF8u, 0x297D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297D00u;
label_297d00:
    // 0x297d00: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x297D00u;
    {
        const bool branch_taken_0x297d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297d00) {
            ctx->pc = 0x297EB0u;
            goto label_297eb0;
        }
    }
    ctx->pc = 0x297D08u;
label_297d08:
    // 0x297d08: 0xc0a0488  jal         func_281220
    ctx->pc = 0x297D08u;
    SET_GPR_U32(ctx, 31, 0x297D10u);
    ctx->pc = 0x281220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281220u, 0x297D08u, 0x297D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297D10u;
label_297d10:
    // 0x297d10: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x297D10u;
    {
        const bool branch_taken_0x297d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297d10) {
            ctx->pc = 0x297EB0u;
            goto label_297eb0;
        }
    }
    ctx->pc = 0x297D18u;
label_297d18:
    // 0x297d18: 0xc0a04b4  jal         func_2812D0
    ctx->pc = 0x297D18u;
    SET_GPR_U32(ctx, 31, 0x297D20u);
    ctx->pc = 0x2812D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2812D0u, 0x297D18u, 0x297D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297D20u;
label_297d20:
    // 0x297d20: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x297D20u;
    {
        const bool branch_taken_0x297d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297d20) {
            ctx->pc = 0x297EB0u;
            goto label_297eb0;
        }
    }
    ctx->pc = 0x297D28u;
label_297d28:
    // 0x297d28: 0xc0a06d4  jal         func_281B50
    ctx->pc = 0x297D28u;
    SET_GPR_U32(ctx, 31, 0x297D30u);
    ctx->pc = 0x281B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281B50u, 0x297D28u, 0x297D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297D30u;
label_297d30:
    // 0x297d30: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x297D30u;
    {
        const bool branch_taken_0x297d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297d30) {
            ctx->pc = 0x297EB0u;
            goto label_297eb0;
        }
    }
    ctx->pc = 0x297D38u;
label_297d38:
    // 0x297d38: 0xc0a06e8  jal         func_281BA0
    ctx->pc = 0x297D38u;
    SET_GPR_U32(ctx, 31, 0x297D40u);
    ctx->pc = 0x281BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281BA0u, 0x297D38u, 0x297D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297D40u;
label_297d40:
    // 0x297d40: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x297D40u;
    {
        const bool branch_taken_0x297d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297d40) {
            ctx->pc = 0x297EB0u;
            goto label_297eb0;
        }
    }
    ctx->pc = 0x297D48u;
label_297d48:
    // 0x297d48: 0xc0a07a4  jal         func_281E90
    ctx->pc = 0x297D48u;
    SET_GPR_U32(ctx, 31, 0x297D50u);
    ctx->pc = 0x281E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281E90u, 0x297D48u, 0x297D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297D50u;
label_297d50:
    // 0x297d50: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x297D50u;
    {
        const bool branch_taken_0x297d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297d50) {
            ctx->pc = 0x297EB0u;
            goto label_297eb0;
        }
    }
    ctx->pc = 0x297D58u;
label_297d58:
    // 0x297d58: 0xc0a0824  jal         func_282090
    ctx->pc = 0x297D58u;
    SET_GPR_U32(ctx, 31, 0x297D60u);
    ctx->pc = 0x282090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282090u, 0x297D58u, 0x297D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297D60u;
label_297d60:
    // 0x297d60: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x297D60u;
    {
        const bool branch_taken_0x297d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297d60) {
            ctx->pc = 0x297EB0u;
            goto label_297eb0;
        }
    }
    ctx->pc = 0x297D68u;
label_297d68:
    // 0x297d68: 0xc0a08fc  jal         func_2823F0
    ctx->pc = 0x297D68u;
    SET_GPR_U32(ctx, 31, 0x297D70u);
    ctx->pc = 0x2823F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2823F0u, 0x297D68u, 0x297D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297D70u;
label_297d70:
    // 0x297d70: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x297D70u;
    {
        const bool branch_taken_0x297d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297d70) {
            ctx->pc = 0x297EB0u;
            goto label_297eb0;
        }
    }
    ctx->pc = 0x297D78u;
label_297d78:
    // 0x297d78: 0xc0a0958  jal         func_282560
    ctx->pc = 0x297D78u;
    SET_GPR_U32(ctx, 31, 0x297D80u);
    ctx->pc = 0x282560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282560u, 0x297D78u, 0x297D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297D80u;
label_297d80:
    // 0x297d80: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x297D80u;
    {
        const bool branch_taken_0x297d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297d80) {
            ctx->pc = 0x297EB0u;
            goto label_297eb0;
        }
    }
    ctx->pc = 0x297D88u;
label_297d88:
    // 0x297d88: 0xc0a098c  jal         func_282630
    ctx->pc = 0x297D88u;
    SET_GPR_U32(ctx, 31, 0x297D90u);
    ctx->pc = 0x282630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282630u, 0x297D88u, 0x297D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297D90u;
label_297d90:
    // 0x297d90: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x297D90u;
    {
        const bool branch_taken_0x297d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297d90) {
            ctx->pc = 0x297EB0u;
            goto label_297eb0;
        }
    }
    ctx->pc = 0x297D98u;
label_297d98:
    // 0x297d98: 0xc0a0990  jal         func_282640
    ctx->pc = 0x297D98u;
    SET_GPR_U32(ctx, 31, 0x297DA0u);
    ctx->pc = 0x282640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282640u, 0x297D98u, 0x297DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297DA0u;
label_297da0:
    // 0x297da0: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x297DA0u;
    {
        const bool branch_taken_0x297da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297da0) {
            ctx->pc = 0x297EB0u;
            goto label_297eb0;
        }
    }
    ctx->pc = 0x297DA8u;
label_297da8:
    // 0x297da8: 0xc0a09e4  jal         func_282790
    ctx->pc = 0x297DA8u;
    SET_GPR_U32(ctx, 31, 0x297DB0u);
    ctx->pc = 0x282790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282790u, 0x297DA8u, 0x297DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297DB0u;
label_297db0:
    // 0x297db0: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x297DB0u;
    {
        const bool branch_taken_0x297db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297db0) {
            ctx->pc = 0x297EB0u;
            goto label_297eb0;
        }
    }
    ctx->pc = 0x297DB8u;
label_297db8:
    // 0x297db8: 0xc0a0a38  jal         func_2828E0
    ctx->pc = 0x297DB8u;
    SET_GPR_U32(ctx, 31, 0x297DC0u);
    ctx->pc = 0x2828E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2828E0u, 0x297DB8u, 0x297DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297DC0u;
label_297dc0:
    // 0x297dc0: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x297DC0u;
    {
        const bool branch_taken_0x297dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297dc0) {
            ctx->pc = 0x297EB0u;
            goto label_297eb0;
        }
    }
    ctx->pc = 0x297DC8u;
label_297dc8:
    // 0x297dc8: 0xc0a0a6c  jal         func_2829B0
    ctx->pc = 0x297DC8u;
    SET_GPR_U32(ctx, 31, 0x297DD0u);
    ctx->pc = 0x2829B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2829B0u, 0x297DC8u, 0x297DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297DD0u;
label_297dd0:
    // 0x297dd0: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x297DD0u;
    {
        const bool branch_taken_0x297dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297dd0) {
            ctx->pc = 0x297EB0u;
            goto label_297eb0;
        }
    }
    ctx->pc = 0x297DD8u;
label_297dd8:
    // 0x297dd8: 0xc0a0a94  jal         func_282A50
    ctx->pc = 0x297DD8u;
    SET_GPR_U32(ctx, 31, 0x297DE0u);
    ctx->pc = 0x282A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282A50u, 0x297DD8u, 0x297DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297DE0u;
label_297de0:
    // 0x297de0: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x297DE0u;
    {
        const bool branch_taken_0x297de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297de0) {
            ctx->pc = 0x297EB0u;
            goto label_297eb0;
        }
    }
    ctx->pc = 0x297DE8u;
label_297de8:
    // 0x297de8: 0xc0a0b5c  jal         func_282D70
    ctx->pc = 0x297DE8u;
    SET_GPR_U32(ctx, 31, 0x297DF0u);
    ctx->pc = 0x297DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297DE8u;
    // 0x297dec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282D70u, 0x297DE8u, 0x297DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297DF0u;
label_297df0:
    // 0x297df0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x297DF0u;
    {
        const bool branch_taken_0x297df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297df0) {
            ctx->pc = 0x297EB0u;
            goto label_297eb0;
        }
    }
    ctx->pc = 0x297DF8u;
label_297df8:
    // 0x297df8: 0xc0a0c3c  jal         func_2830F0
    ctx->pc = 0x297DF8u;
    SET_GPR_U32(ctx, 31, 0x297E00u);
    ctx->pc = 0x297DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297DF8u;
    // 0x297dfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2830F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2830F0u, 0x297DF8u, 0x297E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297E00u;
label_297e00:
    // 0x297e00: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x297E00u;
    {
        const bool branch_taken_0x297e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297e00) {
            ctx->pc = 0x297EB0u;
            goto label_297eb0;
        }
    }
    ctx->pc = 0x297E08u;
label_297e08:
    // 0x297e08: 0xc0a0d28  jal         func_2834A0
    ctx->pc = 0x297E08u;
    SET_GPR_U32(ctx, 31, 0x297E10u);
    ctx->pc = 0x297E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297E08u;
    // 0x297e0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2834A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2834A0u, 0x297E08u, 0x297E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297E10u;
label_297e10:
    // 0x297e10: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x297E10u;
    {
        const bool branch_taken_0x297e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297e10) {
            ctx->pc = 0x297EB0u;
            goto label_297eb0;
        }
    }
    ctx->pc = 0x297E18u;
label_297e18:
    // 0x297e18: 0xc0a0ab0  jal         func_282AC0
    ctx->pc = 0x297E18u;
    SET_GPR_U32(ctx, 31, 0x297E20u);
    ctx->pc = 0x282AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282AC0u, 0x297E18u, 0x297E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297E20u;
label_297e20:
    // 0x297e20: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x297E20u;
    {
        const bool branch_taken_0x297e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297e20) {
            ctx->pc = 0x297EB0u;
            goto label_297eb0;
        }
    }
    ctx->pc = 0x297E28u;
label_297e28:
    // 0x297e28: 0xc0a0e6c  jal         func_2839B0
    ctx->pc = 0x297E28u;
    SET_GPR_U32(ctx, 31, 0x297E30u);
    ctx->pc = 0x2839B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2839B0u, 0x297E28u, 0x297E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297E30u;
label_297e30:
    // 0x297e30: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x297E30u;
    {
        const bool branch_taken_0x297e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297e30) {
            ctx->pc = 0x297EB0u;
            goto label_297eb0;
        }
    }
    ctx->pc = 0x297E38u;
label_297e38:
    // 0x297e38: 0xc0a0e6c  jal         func_2839B0
    ctx->pc = 0x297E38u;
    SET_GPR_U32(ctx, 31, 0x297E40u);
    ctx->pc = 0x2839B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2839B0u, 0x297E38u, 0x297E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297E40u;
label_297e40:
    // 0x297e40: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x297E40u;
    {
        const bool branch_taken_0x297e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297e40) {
            ctx->pc = 0x297EB0u;
            goto label_297eb0;
        }
    }
    ctx->pc = 0x297E48u;
label_297e48:
    // 0x297e48: 0xc0a0e6c  jal         func_2839B0
    ctx->pc = 0x297E48u;
    SET_GPR_U32(ctx, 31, 0x297E50u);
    ctx->pc = 0x2839B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2839B0u, 0x297E48u, 0x297E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297E50u;
label_297e50:
    // 0x297e50: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x297E50u;
    {
        const bool branch_taken_0x297e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297e50) {
            ctx->pc = 0x297EB0u;
            goto label_297eb0;
        }
    }
    ctx->pc = 0x297E58u;
label_297e58:
    // 0x297e58: 0xc0a0180  jal         func_280600
    ctx->pc = 0x297E58u;
    SET_GPR_U32(ctx, 31, 0x297E60u);
    ctx->pc = 0x280600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280600u, 0x297E58u, 0x297E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297E60u;
label_297e60:
    // 0x297e60: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x297E60u;
    {
        const bool branch_taken_0x297e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297e60) {
            ctx->pc = 0x297EB0u;
            goto label_297eb0;
        }
    }
    ctx->pc = 0x297E68u;
label_297e68:
    // 0x297e68: 0xc0a0278  jal         func_2809E0
    ctx->pc = 0x297E68u;
    SET_GPR_U32(ctx, 31, 0x297E70u);
    ctx->pc = 0x2809E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2809E0u, 0x297E68u, 0x297E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297E70u;
label_297e70:
    // 0x297e70: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x297E70u;
    {
        const bool branch_taken_0x297e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297e70) {
            ctx->pc = 0x297EB0u;
            goto label_297eb0;
        }
    }
    ctx->pc = 0x297E78u;
label_297e78:
    // 0x297e78: 0xc0a05c8  jal         func_281720
    ctx->pc = 0x297E78u;
    SET_GPR_U32(ctx, 31, 0x297E80u);
    ctx->pc = 0x297E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297E78u;
    // 0x297e7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281720u, 0x297E78u, 0x297E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297E80u;
label_297e80:
    // 0x297e80: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x297E80u;
    {
        const bool branch_taken_0x297e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297e80) {
            ctx->pc = 0x297EB0u;
            goto label_297eb0;
        }
    }
    ctx->pc = 0x297E88u;
label_297e88:
    // 0x297e88: 0xc0a05c8  jal         func_281720
    ctx->pc = 0x297E88u;
    SET_GPR_U32(ctx, 31, 0x297E90u);
    ctx->pc = 0x297E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297E88u;
    // 0x297e8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281720u, 0x297E88u, 0x297E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297E90u;
label_297e90:
    // 0x297e90: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x297E90u;
    {
        const bool branch_taken_0x297e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297e90) {
            ctx->pc = 0x297EB0u;
            goto label_297eb0;
        }
    }
    ctx->pc = 0x297E98u;
label_297e98:
    // 0x297e98: 0xc0a0384  jal         func_280E10
    ctx->pc = 0x297E98u;
    SET_GPR_U32(ctx, 31, 0x297EA0u);
    ctx->pc = 0x280E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280E10u, 0x297E98u, 0x297EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297EA0u;
label_297ea0:
    // 0x297ea0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x297EA0u;
    {
        const bool branch_taken_0x297ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297ea0) {
            ctx->pc = 0x297EB0u;
            goto label_297eb0;
        }
    }
    ctx->pc = 0x297EA8u;
label_297ea8:
    // 0x297ea8: 0xc0a0ea0  jal         func_283A80
    ctx->pc = 0x297EA8u;
    SET_GPR_U32(ctx, 31, 0x297EB0u);
    ctx->pc = 0x283A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283A80u, 0x297EA8u, 0x297EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297EB0u;
label_297eb0:
    // 0x297eb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x297eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x297EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297EB4u;
        // 0x297eb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297EB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297EBCu;
}
