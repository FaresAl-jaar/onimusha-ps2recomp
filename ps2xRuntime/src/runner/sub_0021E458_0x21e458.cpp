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

// Function: sub_0021E458
// Address: 0x21e458 - 0x21e4fc
void sub_0021E458_0x21e458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E458_0x21e458");
#endif

    switch (ctx->pc) {
        case 0x21e474u: goto label_21e474;
        case 0x21e4a4u: goto label_21e4a4;
        default: break;
    }

    ctx->pc = 0x21e458u;

    // 0x21e458: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21e458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21e45c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21e45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21e460: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21e460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e464: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21e464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21e468: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21e468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21e46c: 0xc084968  jal         func_2125A0
    ctx->pc = 0x21E46Cu;
    SET_GPR_U32(ctx, 31, 0x21E474u);
    ctx->pc = 0x21E470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E46Cu;
    // 0x21e470: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x21E46Cu, 0x21E474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E474u;
label_21e474:
    // 0x21e474: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x21e474u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x21e478: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21E478u;
    {
        const bool branch_taken_0x21e478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E478u;
        // 0x21e47c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e478) {
            ctx->pc = 0x21E498u;
            goto label_21e498;
        }
    }
    ctx->pc = 0x21E480u;
    // 0x21e480: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21e480u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e484: 0x34a50137  ori         $a1, $a1, 0x137
    ctx->pc = 0x21e484u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)311);
    // 0x21e488: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21e488u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21e48c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21e48cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21e490: 0x80848e0  j           func_212380
    ctx->pc = 0x21E490u;
    ctx->pc = 0x21E494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E490u;
    // 0x21e494: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x21E498u;
label_21e498:
    // 0x21e498: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21e498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e49c: 0xc087940  jal         func_21E500
    ctx->pc = 0x21E49Cu;
    SET_GPR_U32(ctx, 31, 0x21E4A4u);
    ctx->pc = 0x21E4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E49Cu;
    // 0x21e4a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E500u, 0x21E49Cu, 0x21E4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E4A4u;
label_21e4a4:
    // 0x21e4a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21e4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e4a8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21e4a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e4ac: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x21e4acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x21e4b0: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x21e4b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x21e4b4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x21E4B4u;
    {
        const bool branch_taken_0x21e4b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E4B4u;
        // 0x21e4b8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e4b4) {
            ctx->pc = 0x21E4E8u;
            goto label_21e4e8;
        }
    }
    ctx->pc = 0x21E4BCu;
    // 0x21e4bc: 0x8e02096c  lw          $v0, 0x96C($s0)
    ctx->pc = 0x21e4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2412)));
    // 0x21e4c0: 0x8e030968  lw          $v1, 0x968($s0)
    ctx->pc = 0x21e4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2408)));
    // 0x21e4c4: 0x24490001  addiu       $t1, $v0, 0x1
    ctx->pc = 0x21e4c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21e4c8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x21e4c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x21e4cc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x21E4CCu;
    {
        const bool branch_taken_0x21e4cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e4cc) {
            ctx->pc = 0x21E4D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E4CCu;
            // 0x21e4d0: 0xae09096c  sw          $t1, 0x96C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 2412), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E4D4u;
            goto label_21e4d4;
        }
    }
    ctx->pc = 0x21E4D4u;
label_21e4d4:
    // 0x21e4d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21e4d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e4d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21e4d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21e4dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21e4dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21e4e0: 0x80888d6  j           func_222358
    ctx->pc = 0x21E4E0u;
    ctx->pc = 0x21E4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E4E0u;
    // 0x21e4e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222358u;
    sub_00222358_0x222358(rdram, ctx, runtime); return;
    ctx->pc = 0x21E4E8u;
label_21e4e8:
    // 0x21e4e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21e4e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e4ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21e4ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21e4f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21e4f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21e4f4: 0x3e00008  jr          $ra
    ctx->pc = 0x21E4F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E4F4u;
        // 0x21e4f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E4F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E4FCu;
}
