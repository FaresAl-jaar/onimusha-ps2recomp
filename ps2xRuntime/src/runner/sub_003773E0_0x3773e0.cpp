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

// Function: sub_003773E0
// Address: 0x3773e0 - 0x377484
void sub_003773E0_0x3773e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003773E0_0x3773e0");
#endif

    switch (ctx->pc) {
        case 0x377438u: goto label_377438;
        case 0x377470u: goto label_377470;
        default: break;
    }

    ctx->pc = 0x3773e0u;

    // 0x3773e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3773e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3773e4: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3773e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3773e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3773e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3773ec: 0x24631b60  addiu       $v1, $v1, 0x1B60
    ctx->pc = 0x3773ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7008));
    // 0x3773f0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3773f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3773f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3773f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3773f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3773f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3773fc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3773fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377400: 0x908605e0  lbu         $a2, 0x5E0($a0)
    ctx->pc = 0x377400u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1504)));
    // 0x377404: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x377404u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x377408: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x377408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x37740c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x37740cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x377410: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x377410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x377414: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x377414u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x377418: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x377418u;
    {
        const bool branch_taken_0x377418 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x377418) {
            ctx->pc = 0x377470u;
            goto label_377470;
        }
    }
    ctx->pc = 0x377420u;
    // 0x377420: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x377420u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377424: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x377424u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x377428: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x377428u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x37742c: 0x922705d4  lbu         $a3, 0x5D4($s1)
    ctx->pc = 0x37742cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1492)));
    // 0x377430: 0xc0aa180  jal         func_2A8600
    ctx->pc = 0x377430u;
    SET_GPR_U32(ctx, 31, 0x377438u);
    ctx->pc = 0x377434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377430u;
    // 0x377434: 0x26280590  addiu       $t0, $s1, 0x590 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 1424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8600u, 0x377430u, 0x377438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377438u;
label_377438:
    // 0x377438: 0xae2205c0  sw          $v0, 0x5C0($s1)
    ctx->pc = 0x377438u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1472), GPR_U32(ctx, 2));
    // 0x37743c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x37743cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x377440: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x377440u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x377444: 0x3c022800  lui         $v0, 0x2800
    ctx->pc = 0x377444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10240 << 16));
    // 0x377448: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x377448u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37744c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x37744cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x377450: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x377450u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377454: 0x34454902  ori         $a1, $v0, 0x4902
    ctx->pc = 0x377454u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18690);
    // 0x377458: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x377458u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37745c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x37745cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377460: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x377460u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377464: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x377464u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377468: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x377468u;
    SET_GPR_U32(ctx, 31, 0x377470u);
    ctx->pc = 0x37746Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377468u;
    // 0x37746c: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x377468u, 0x377470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377470u;
label_377470:
    // 0x377470: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x377470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x377474: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x377474u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x377478: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x377478u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37747c: 0x3e00008  jr          $ra
    ctx->pc = 0x37747Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37747Cu;
        // 0x377480: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37747Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377484u;
}
