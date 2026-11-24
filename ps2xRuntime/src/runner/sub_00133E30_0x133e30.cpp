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

// Function: sub_00133E30
// Address: 0x133e30 - 0x133ed0
void sub_00133E30_0x133e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133E30_0x133e30");
#endif

    switch (ctx->pc) {
        case 0x133e8cu: goto label_133e8c;
        case 0x133e98u: goto label_133e98;
        case 0x133eacu: goto label_133eac;
        default: break;
    }

    ctx->pc = 0x133e30u;

    // 0x133e30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x133e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x133e34: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x133e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x133e38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x133e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x133e3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x133e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x133e40: 0x10a20015  beq         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x133E40u;
    {
        const bool branch_taken_0x133e40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x133E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133E40u;
        // 0x133e44: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133e40) {
            ctx->pc = 0x133E98u;
            goto label_133e98;
        }
    }
    ctx->pc = 0x133E48u;
    // 0x133e48: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x133e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x133e4c: 0x10a20012  beq         $a1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x133E4Cu;
    {
        const bool branch_taken_0x133e4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x133E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133E4Cu;
        // 0x133e50: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133e4c) {
            ctx->pc = 0x133E98u;
            goto label_133e98;
        }
    }
    ctx->pc = 0x133E54u;
    // 0x133e54: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x133E54u;
    {
        const bool branch_taken_0x133e54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x133e54) {
            ctx->pc = 0x133E78u;
            goto label_133e78;
        }
    }
    ctx->pc = 0x133E5Cu;
    // 0x133e5c: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x133e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x133e60: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x133E60u;
    {
        const bool branch_taken_0x133e60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x133E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133E60u;
        // 0x133e64: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133e60) {
            ctx->pc = 0x133E78u;
            goto label_133e78;
        }
    }
    ctx->pc = 0x133E68u;
    // 0x133e68: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x133E68u;
    {
        const bool branch_taken_0x133e68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x133e68) {
            ctx->pc = 0x133E78u;
            goto label_133e78;
        }
    }
    ctx->pc = 0x133E70u;
    // 0x133e70: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x133E70u;
    {
        const bool branch_taken_0x133e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133e70) {
            ctx->pc = 0x133EB8u;
            goto label_133eb8;
        }
    }
    ctx->pc = 0x133E78u;
label_133e78:
    // 0x133e78: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x133e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133e7c: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x133e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133e80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x133e80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133e84: 0xc04d09c  jal         func_134270
    ctx->pc = 0x133E84u;
    SET_GPR_U32(ctx, 31, 0x133E8Cu);
    ctx->pc = 0x133E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133E84u;
    // 0x133e88: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134270u, 0x133E84u, 0x133E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133E8Cu;
label_133e8c:
    // 0x133e8c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x133E8Cu;
    {
        const bool branch_taken_0x133e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133E8Cu;
        // 0x133e90: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133e8c) {
            ctx->pc = 0x133EC0u;
            goto label_133ec0;
        }
    }
    ctx->pc = 0x133E94u;
    // 0x133e94: 0x0  nop
    ctx->pc = 0x133e94u;
    // NOP
label_133e98:
    // 0x133e98: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x133e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133e9c: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x133e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133ea0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x133ea0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x133ea4: 0xc04d09c  jal         func_134270
    ctx->pc = 0x133EA4u;
    SET_GPR_U32(ctx, 31, 0x133EACu);
    ctx->pc = 0x133EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133EA4u;
    // 0x133ea8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134270u, 0x133EA4u, 0x133EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133EACu;
label_133eac:
    // 0x133eac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x133EACu;
    {
        const bool branch_taken_0x133eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133EACu;
        // 0x133eb0: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133eac) {
            ctx->pc = 0x133EC0u;
            goto label_133ec0;
        }
    }
    ctx->pc = 0x133EB4u;
    // 0x133eb4: 0x0  nop
    ctx->pc = 0x133eb4u;
    // NOP
label_133eb8:
    // 0x133eb8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x133eb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133ebc: 0x0  nop
    ctx->pc = 0x133ebcu;
    // NOP
label_133ec0:
    // 0x133ec0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x133ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133ec4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x133ec4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133ec8: 0x3e00008  jr          $ra
    ctx->pc = 0x133EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133EC8u;
        // 0x133ecc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133EC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133ED0u;
}
