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

// Function: sub_00263ED0
// Address: 0x263ed0 - 0x263fa4
void sub_00263ED0_0x263ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00263ED0_0x263ed0");
#endif

    switch (ctx->pc) {
        case 0x263f08u: goto label_263f08;
        case 0x263f14u: goto label_263f14;
        case 0x263f20u: goto label_263f20;
        case 0x263f54u: goto label_263f54;
        case 0x263f5cu: goto label_263f5c;
        case 0x263f70u: goto label_263f70;
        case 0x263f7cu: goto label_263f7c;
        default: break;
    }

    ctx->pc = 0x263ed0u;

    // 0x263ed0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x263ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x263ed4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x263ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x263ed8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x263ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x263edc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x263edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x263ee0: 0x97838854  lhu         $v1, -0x77AC($gp)
    ctx->pc = 0x263ee0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936660)));
    // 0x263ee4: 0xa4832ad0  sh          $v1, 0x2AD0($a0)
    ctx->pc = 0x263ee4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10960), (uint16_t)GPR_U32(ctx, 3));
    // 0x263ee8: 0x97838848  lhu         $v1, -0x77B8($gp)
    ctx->pc = 0x263ee8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936648)));
    // 0x263eec: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x263EECu;
    {
        const bool branch_taken_0x263eec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x263EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263EECu;
        // 0x263ef0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263eec) {
            ctx->pc = 0x263F28u;
            goto label_263f28;
        }
    }
    ctx->pc = 0x263EF4u;
    // 0x263ef4: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x263ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x263ef8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x263ef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263efc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x263efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x263f00: 0xc0ae468  jal         func_2B91A0
    ctx->pc = 0x263F00u;
    SET_GPR_U32(ctx, 31, 0x263F08u);
    ctx->pc = 0x263F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263F00u;
    // 0x263f04: 0xa2022ad8  sb          $v0, 0x2AD8($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 10968), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B91A0u, 0x263F00u, 0x263F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263F08u;
label_263f08:
    // 0x263f08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x263f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263f0c: 0xc0ae468  jal         func_2B91A0
    ctx->pc = 0x263F0Cu;
    SET_GPR_U32(ctx, 31, 0x263F14u);
    ctx->pc = 0x263F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263F0Cu;
    // 0x263f10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B91A0u, 0x263F0Cu, 0x263F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263F14u;
label_263f14:
    // 0x263f14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x263f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263f18: 0xc0ae468  jal         func_2B91A0
    ctx->pc = 0x263F18u;
    SET_GPR_U32(ctx, 31, 0x263F20u);
    ctx->pc = 0x263F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263F18u;
    // 0x263f1c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B91A0u, 0x263F18u, 0x263F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263F20u;
label_263f20:
    // 0x263f20: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x263F20u;
    {
        const bool branch_taken_0x263f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263f20) {
            ctx->pc = 0x263F80u;
            goto label_263f80;
        }
    }
    ctx->pc = 0x263F28u;
label_263f28:
    // 0x263f28: 0x9783884c  lhu         $v1, -0x77B4($gp)
    ctx->pc = 0x263f28u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936652)));
    // 0x263f2c: 0xa60329de  sh          $v1, 0x29DE($s0)
    ctx->pc = 0x263f2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10718), (uint16_t)GPR_U32(ctx, 3));
    // 0x263f30: 0xa60329e0  sh          $v1, 0x29E0($s0)
    ctx->pc = 0x263f30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10720), (uint16_t)GPR_U32(ctx, 3));
    // 0x263f34: 0x9783884c  lhu         $v1, -0x77B4($gp)
    ctx->pc = 0x263f34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936652)));
    // 0x263f38: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x263f38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x263f3c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x263F3Cu;
    {
        const bool branch_taken_0x263f3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x263f3c) {
            ctx->pc = 0x263F80u;
            goto label_263f80;
        }
    }
    ctx->pc = 0x263F44u;
    // 0x263f44: 0x97828850  lhu         $v0, -0x77B0($gp)
    ctx->pc = 0x263f44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936656)));
    // 0x263f48: 0xa60229f2  sh          $v0, 0x29F2($s0)
    ctx->pc = 0x263f48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10738), (uint16_t)GPR_U32(ctx, 2));
    // 0x263f4c: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x263F4Cu;
    SET_GPR_U32(ctx, 31, 0x263F54u);
    ctx->pc = 0x263F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263F4Cu;
    // 0x263f50: 0x8e042968  lw          $a0, 0x2968($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10600)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x263F4Cu, 0x263F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263F54u;
label_263f54:
    // 0x263f54: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x263F54u;
    SET_GPR_U32(ctx, 31, 0x263F5Cu);
    ctx->pc = 0x263F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263F54u;
    // 0x263f58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x263F54u, 0x263F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263F5Cu;
label_263f5c:
    // 0x263f5c: 0x920508e8  lbu         $a1, 0x8E8($s0)
    ctx->pc = 0x263f5cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x263f60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x263f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263f64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x263f64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263f68: 0xc0aa6e8  jal         func_2A9BA0
    ctx->pc = 0x263F68u;
    SET_GPR_U32(ctx, 31, 0x263F70u);
    ctx->pc = 0x263F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263F68u;
    // 0x263f6c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9BA0u, 0x263F68u, 0x263F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263F70u;
label_263f70:
    // 0x263f70: 0x8e042968  lw          $a0, 0x2968($s0)
    ctx->pc = 0x263f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10600)));
    // 0x263f74: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x263F74u;
    SET_GPR_U32(ctx, 31, 0x263F7Cu);
    ctx->pc = 0x263F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263F74u;
    // 0x263f78: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x263F74u, 0x263F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263F7Cu;
label_263f7c:
    // 0x263f7c: 0xae112968  sw          $s1, 0x2968($s0)
    ctx->pc = 0x263f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10600), GPR_U32(ctx, 17));
label_263f80:
    // 0x263f80: 0xa7808848  sh          $zero, -0x77B8($gp)
    ctx->pc = 0x263f80u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936648), (uint16_t)GPR_U32(ctx, 0));
    // 0x263f84: 0xa780884c  sh          $zero, -0x77B4($gp)
    ctx->pc = 0x263f84u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936652), (uint16_t)GPR_U32(ctx, 0));
    // 0x263f88: 0xa7808850  sh          $zero, -0x77B0($gp)
    ctx->pc = 0x263f88u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936656), (uint16_t)GPR_U32(ctx, 0));
    // 0x263f8c: 0xa7808854  sh          $zero, -0x77AC($gp)
    ctx->pc = 0x263f8cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936660), (uint16_t)GPR_U32(ctx, 0));
    // 0x263f90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x263f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x263f94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x263f94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x263f98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x263f98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x263f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x263F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263F9Cu;
        // 0x263fa0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x263FA4u;
}
