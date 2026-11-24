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

// Function: sub_00209F98
// Address: 0x209f98 - 0x20a058
void sub_00209F98_0x209f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209F98_0x209f98");
#endif

    switch (ctx->pc) {
        case 0x209fb4u: goto label_209fb4;
        case 0x20a008u: goto label_20a008;
        default: break;
    }

    ctx->pc = 0x209f98u;

    // 0x209f98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x209f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x209f9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x209f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x209fa0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x209fa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209fa4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x209fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x209fa8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x209fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x209fac: 0xc081d84  jal         func_207610
    ctx->pc = 0x209FACu;
    SET_GPR_U32(ctx, 31, 0x209FB4u);
    ctx->pc = 0x209FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209FACu;
    // 0x209fb0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x209FACu, 0x209FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209FB4u;
label_209fb4:
    // 0x209fb4: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x209fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x209fb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x209fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209fbc: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x209FBCu;
    {
        const bool branch_taken_0x209fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x209FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209FBCu;
        // 0x209fc0: 0x248481d0  addiu       $a0, $a0, -0x7E30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209fbc) {
            ctx->pc = 0x209FD8u;
            goto label_209fd8;
        }
    }
    ctx->pc = 0x209FC4u;
    // 0x209fc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x209fc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209fc8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x209fc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x209fcc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x209fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209fd0: 0x8082e3e  j           func_20B8F8
    ctx->pc = 0x209FD0u;
    ctx->pc = 0x209FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209FD0u;
    // 0x209fd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x209FD8u;
label_209fd8:
    // 0x209fd8: 0x56000009  bnel        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x209FD8u;
    {
        const bool branch_taken_0x209fd8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x209fd8) {
            ctx->pc = 0x209FDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209FD8u;
            // 0x209fdc: 0x8e240048  lw          $a0, 0x48($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A000u;
            goto label_20a000;
        }
    }
    ctx->pc = 0x209FE0u;
    // 0x209fe0: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x209fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x209fe4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x209fe4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209fe8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x209fe8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x209fec: 0x24848200  addiu       $a0, $a0, -0x7E00
    ctx->pc = 0x209fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935040));
    // 0x209ff0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x209ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209ff4: 0x8082e3e  j           func_20B8F8
    ctx->pc = 0x209FF4u;
    ctx->pc = 0x209FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209FF4u;
    // 0x209ff8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x209FFCu;
    // 0x209ffc: 0x0  nop
    ctx->pc = 0x209ffcu;
    // NOP
label_20a000:
    // 0x20a000: 0xc092d0c  jal         func_24B430
    ctx->pc = 0x20A000u;
    SET_GPR_U32(ctx, 31, 0x20A008u);
    ctx->pc = 0x20A004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A000u;
    // 0x20a004: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B430u, 0x20A000u, 0x20A008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A008u;
label_20a008:
    // 0x20a008: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x20a008u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x20a00c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20a00cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a010: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20A010u;
    {
        const bool branch_taken_0x20a010 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x20A014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A010u;
        // 0x20a014: 0x24848230  addiu       $a0, $a0, -0x7DD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a010) {
            ctx->pc = 0x20A038u;
            goto label_20a038;
        }
    }
    ctx->pc = 0x20A018u;
    // 0x20a018: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x20a018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20a01c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20a01cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a020: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x20a020u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x20a024: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20a024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20a028: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20a028u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20a02c: 0x8082e3e  j           func_20B8F8
    ctx->pc = 0x20A02Cu;
    ctx->pc = 0x20A030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A02Cu;
    // 0x20a030: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x20A034u;
    // 0x20a034: 0x0  nop
    ctx->pc = 0x20a034u;
    // NOP
label_20a038:
    // 0x20a038: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x20a038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x20a03c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20a03cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a040: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20a040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20a044: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20a044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20a048: 0xae220074  sw          $v0, 0x74($s1)
    ctx->pc = 0x20a048u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
    // 0x20a04c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20a04cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20a050: 0x3e00008  jr          $ra
    ctx->pc = 0x20A050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A050u;
        // 0x20a054: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A058u;
}
