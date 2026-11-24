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

// Function: sub_00116E48
// Address: 0x116e48 - 0x116ee8
void sub_00116E48_0x116e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116E48_0x116e48");
#endif

    switch (ctx->pc) {
        case 0x116e5cu: goto label_116e5c;
        case 0x116e6cu: goto label_116e6c;
        case 0x116e94u: goto label_116e94;
        case 0x116ec8u: goto label_116ec8;
        default: break;
    }

    ctx->pc = 0x116e48u;

    // 0x116e48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x116e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x116e4c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x116e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x116e50: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x116e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x116e54: 0xc0459f8  jal         func_1167E0
    ctx->pc = 0x116E54u;
    SET_GPR_U32(ctx, 31, 0x116E5Cu);
    ctx->pc = 0x116E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116E54u;
    // 0x116e58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1167E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1167E0u, 0x116E54u, 0x116E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116E5Cu;
label_116e5c:
    // 0x116e5c: 0x440001e  bltz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x116E5Cu;
    {
        const bool branch_taken_0x116e5c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x116E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116E5Cu;
        // 0x116e60: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116e5c) {
            ctx->pc = 0x116ED8u;
            goto label_116ed8;
        }
    }
    ctx->pc = 0x116E64u;
    // 0x116e64: 0xc045a38  jal         func_1168E0
    ctx->pc = 0x116E64u;
    SET_GPR_U32(ctx, 31, 0x116E6Cu);
    ctx->pc = 0x1168E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1168E0u, 0x116E64u, 0x116E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116E6Cu;
label_116e6c:
    // 0x116e6c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x116E6Cu;
    {
        const bool branch_taken_0x116e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x116e6c) {
            ctx->pc = 0x116E70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116E6Cu;
            // 0x116e70: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116E80u;
            goto label_116e80;
        }
    }
    ctx->pc = 0x116E74u;
    // 0x116e74: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x116e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x116e78: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x116E78u;
    {
        const bool branch_taken_0x116e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116E78u;
        // 0x116e7c: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x116e78) {
            ctx->pc = 0x116ED8u;
            goto label_116ed8;
        }
    }
    ctx->pc = 0x116E80u;
label_116e80:
    // 0x116e80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x116e80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116e84: 0x24500648  addiu       $s0, $v0, 0x648
    ctx->pc = 0x116e84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1608));
    // 0x116e88: 0x240600fc  addiu       $a2, $zero, 0xFC
    ctx->pc = 0x116e88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x116e8c: 0xc04a040  jal         func_128100
    ctx->pc = 0x116E8Cu;
    SET_GPR_U32(ctx, 31, 0x116E94u);
    ctx->pc = 0x116E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116E8Cu;
    // 0x116e90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128100u, 0x116E8Cu, 0x116E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116E94u;
label_116e94:
    // 0x116e94: 0x2603fff8  addiu       $v1, $s0, -0x8
    ctx->pc = 0x116e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x116e98: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x116e98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x116e9c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x116e9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116ea0: 0xa0600103  sb          $zero, 0x103($v1)
    ctx->pc = 0x116ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 259), (uint8_t)GPR_U32(ctx, 0));
    // 0x116ea4: 0x24840840  addiu       $a0, $a0, 0x840
    ctx->pc = 0x116ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    // 0x116ea8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x116ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x116eac: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x116eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x116eb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x116eb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116eb4: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x116eb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x116eb8: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x116eb8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116ebc: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x116ebcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x116ec0: 0xc0447ca  jal         func_111F28
    ctx->pc = 0x116EC0u;
    SET_GPR_U32(ctx, 31, 0x116EC8u);
    ctx->pc = 0x116EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116EC0u;
    // 0x116ec4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111F28u, 0x116EC0u, 0x116EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116EC8u;
label_116ec8:
    // 0x116ec8: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x116EC8u;
    {
        const bool branch_taken_0x116ec8 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x116ec8) {
            ctx->pc = 0x116ECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116EC8u;
            // 0x116ecc: 0x8e02fff8  lw          $v0, -0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116ED8u;
            goto label_116ed8;
        }
    }
    ctx->pc = 0x116ED0u;
    // 0x116ed0: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x116ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x116ed4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x116ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_116ed8:
    // 0x116ed8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x116ed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x116edc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x116edcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116ee0: 0x3e00008  jr          $ra
    ctx->pc = 0x116EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116EE0u;
        // 0x116ee4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116EE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116EE8u;
}
