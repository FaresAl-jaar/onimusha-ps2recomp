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

// Function: sub_0020A988
// Address: 0x20a988 - 0x20aa40
void sub_0020A988_0x20a988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A988_0x20a988");
#endif

    switch (ctx->pc) {
        case 0x20a9a4u: goto label_20a9a4;
        case 0x20a9f0u: goto label_20a9f0;
        case 0x20aa04u: goto label_20aa04;
        case 0x20aa20u: goto label_20aa20;
        default: break;
    }

    ctx->pc = 0x20a988u;

    // 0x20a988: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20a988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20a98c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x20a98cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x20a990: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20a990u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a994: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x20a994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a998: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x20a998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x20a99c: 0xc081ec8  jal         func_207B20
    ctx->pc = 0x20A99Cu;
    SET_GPR_U32(ctx, 31, 0x20A9A4u);
    ctx->pc = 0x20A9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A99Cu;
    // 0x20a9a0: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207B20u, 0x20A99Cu, 0x20A9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A9A4u;
label_20a9a4:
    // 0x20a9a4: 0x8e0302e4  lw          $v1, 0x2E4($s0)
    ctx->pc = 0x20a9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 740)));
    // 0x20a9a8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20a9a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a9ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20a9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20a9b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20a9b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a9b4: 0xae0602e0  sw          $a2, 0x2E0($s0)
    ctx->pc = 0x20a9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 736), GPR_U32(ctx, 6));
    // 0x20a9b8: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x20A9B8u;
    {
        const bool branch_taken_0x20a9b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20A9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A9B8u;
        // 0x20a9bc: 0x2c650003  sltiu       $a1, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a9b8) {
            ctx->pc = 0x20A9F8u;
            goto label_20a9f8;
        }
    }
    ctx->pc = 0x20A9C0u;
    // 0x20a9c0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x20A9C0u;
    {
        const bool branch_taken_0x20a9c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A9C0u;
        // 0x20a9c4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a9c0) {
            ctx->pc = 0x20A9D8u;
            goto label_20a9d8;
        }
    }
    ctx->pc = 0x20A9C8u;
    // 0x20a9c8: 0x50660007  beql        $v1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x20A9C8u;
    {
        const bool branch_taken_0x20a9c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x20a9c8) {
            ctx->pc = 0x20A9CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A9C8u;
            // 0x20a9cc: 0x8e0501a4  lw          $a1, 0x1A4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A9E8u;
            goto label_20a9e8;
        }
    }
    ctx->pc = 0x20A9D0u;
    // 0x20a9d0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x20A9D0u;
    {
        const bool branch_taken_0x20a9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A9D0u;
        // 0x20a9d4: 0x8e020300  lw          $v0, 0x300($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a9d0) {
            ctx->pc = 0x20AA24u;
            goto label_20aa24;
        }
    }
    ctx->pc = 0x20A9D8u;
label_20a9d8:
    // 0x20a9d8: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x20A9D8u;
    {
        const bool branch_taken_0x20a9d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x20a9d8) {
            ctx->pc = 0x20A9DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A9D8u;
            // 0x20a9dc: 0x8e0501a4  lw          $a1, 0x1A4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AA10u;
            goto label_20aa10;
        }
    }
    ctx->pc = 0x20A9E0u;
    // 0x20a9e0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x20A9E0u;
    {
        const bool branch_taken_0x20a9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A9E0u;
        // 0x20a9e4: 0x8e020300  lw          $v0, 0x300($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a9e0) {
            ctx->pc = 0x20AA24u;
            goto label_20aa24;
        }
    }
    ctx->pc = 0x20A9E8u;
label_20a9e8:
    // 0x20a9e8: 0xc082856  jal         func_20A158
    ctx->pc = 0x20A9E8u;
    SET_GPR_U32(ctx, 31, 0x20A9F0u);
    ctx->pc = 0x20A9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A9E8u;
    // 0x20a9ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A158u, 0x20A9E8u, 0x20A9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A9F0u;
label_20a9f0:
    // 0x20a9f0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x20A9F0u;
    {
        const bool branch_taken_0x20a9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A9F0u;
        // 0x20a9f4: 0x8e020300  lw          $v0, 0x300($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a9f0) {
            ctx->pc = 0x20AA24u;
            goto label_20aa24;
        }
    }
    ctx->pc = 0x20A9F8u;
label_20a9f8:
    // 0x20a9f8: 0x8e0502ec  lw          $a1, 0x2EC($s0)
    ctx->pc = 0x20a9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 748)));
    // 0x20a9fc: 0xc0828f2  jal         func_20A3C8
    ctx->pc = 0x20A9FCu;
    SET_GPR_U32(ctx, 31, 0x20AA04u);
    ctx->pc = 0x20AA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A9FCu;
    // 0x20aa00: 0x8e0602f0  lw          $a2, 0x2F0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A3C8u, 0x20A9FCu, 0x20AA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AA04u;
label_20aa04:
    // 0x20aa04: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x20AA04u;
    {
        const bool branch_taken_0x20aa04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AA04u;
        // 0x20aa08: 0x8e020300  lw          $v0, 0x300($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aa04) {
            ctx->pc = 0x20AA24u;
            goto label_20aa24;
        }
    }
    ctx->pc = 0x20AA0Cu;
    // 0x20aa0c: 0x0  nop
    ctx->pc = 0x20aa0cu;
    // NOP
label_20aa10:
    // 0x20aa10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20aa10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20aa14: 0x8e0602f4  lw          $a2, 0x2F4($s0)
    ctx->pc = 0x20aa14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 756)));
    // 0x20aa18: 0xc082944  jal         func_20A510
    ctx->pc = 0x20AA18u;
    SET_GPR_U32(ctx, 31, 0x20AA20u);
    ctx->pc = 0x20AA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AA18u;
    // 0x20aa1c: 0x8e0702f8  lw          $a3, 0x2F8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 760)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A510u, 0x20AA18u, 0x20AA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AA20u;
label_20aa20:
    // 0x20aa20: 0x8e020300  lw          $v0, 0x300($s0)
    ctx->pc = 0x20aa20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
label_20aa24:
    // 0x20aa24: 0xae0002e0  sw          $zero, 0x2E0($s0)
    ctx->pc = 0x20aa24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 736), GPR_U32(ctx, 0));
    // 0x20aa28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20aa28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20aa2c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x20aa2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20aa30: 0xae020300  sw          $v0, 0x300($s0)
    ctx->pc = 0x20aa30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 768), GPR_U32(ctx, 2));
    // 0x20aa34: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x20aa34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20aa38: 0x3e00008  jr          $ra
    ctx->pc = 0x20AA38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20AA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AA38u;
        // 0x20aa3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AA38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20AA40u;
}
