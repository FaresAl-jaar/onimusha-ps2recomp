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

// Function: sub_00250908
// Address: 0x250908 - 0x2509d4
void sub_00250908_0x250908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250908_0x250908");
#endif

    switch (ctx->pc) {
        case 0x250940u: goto label_250940;
        case 0x2509c0u: goto label_2509c0;
        default: break;
    }

    ctx->pc = 0x250908u;

    // 0x250908: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x250908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25090c: 0x3c07004e  lui         $a3, 0x4E
    ctx->pc = 0x25090cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)78 << 16));
    // 0x250910: 0x24e2ad80  addiu       $v0, $a3, -0x5280
    ctx->pc = 0x250910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946176));
    // 0x250914: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x250914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x250918: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x250918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x25091c: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x25091cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x250920: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x250920u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250924: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x250924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250928: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x250928u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4DAD84u));
    // 0x25092c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x25092cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250930: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x250930u;
    {
        const bool branch_taken_0x250930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250930u;
        // 0x250934: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250930) {
            ctx->pc = 0x250964u;
            goto label_250964;
        }
    }
    ctx->pc = 0x250938u;
    // 0x250938: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x250938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x25093c: 0x0  nop
    ctx->pc = 0x25093cu;
    // NOP
label_250940:
    // 0x250940: 0x28820100  slti        $v0, $a0, 0x100
    ctx->pc = 0x250940u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x250944: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x250944u;
    {
        const bool branch_taken_0x250944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250944u;
        // 0x250948: 0x24630040  addiu       $v1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250944) {
            ctx->pc = 0x250964u;
            goto label_250964;
        }
    }
    ctx->pc = 0x25094Cu;
    // 0x25094c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x25094cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x250950: 0x0  nop
    ctx->pc = 0x250950u;
    // NOP
    // 0x250954: 0x0  nop
    ctx->pc = 0x250954u;
    // NOP
    // 0x250958: 0x0  nop
    ctx->pc = 0x250958u;
    // NOP
    // 0x25095c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x25095Cu;
    {
        const bool branch_taken_0x25095c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25095c) {
            ctx->pc = 0x250960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25095Cu;
            // 0x250960: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_250940;
        }
    }
    ctx->pc = 0x250964u;
label_250964:
    // 0x250964: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x250964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x250968: 0x10820015  beq         $a0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x250968u;
    {
        const bool branch_taken_0x250968 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x25096Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250968u;
        // 0x25096c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250968) {
            ctx->pc = 0x2509C0u;
            goto label_2509c0;
        }
    }
    ctx->pc = 0x250970u;
    // 0x250970: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x250970u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x250974: 0x24e2ad80  addiu       $v0, $a3, -0x5280
    ctx->pc = 0x250974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946176));
    // 0x250978: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x250978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x25097c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x25097cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x250980: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x250980u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x250984: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x250984u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x250988: 0x2463ad48  addiu       $v1, $v1, -0x52B8
    ctx->pc = 0x250988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946120));
    // 0x25098c: 0x24a5eaf8  addiu       $a1, $a1, -0x1508
    ctx->pc = 0x25098cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961912));
    // 0x250990: 0x24c60748  addiu       $a2, $a2, 0x748
    ctx->pc = 0x250990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1864));
    // 0x250994: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x250994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x250998: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x250998u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x25099c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25099cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2509a0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2509a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2509a4: 0xae0a001c  sw          $t2, 0x1C($s0)
    ctx->pc = 0x2509a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 10));
    // 0x2509a8: 0xae090020  sw          $t1, 0x20($s0)
    ctx->pc = 0x2509a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 9));
    // 0x2509ac: 0xae080024  sw          $t0, 0x24($s0)
    ctx->pc = 0x2509acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 8));
    // 0x2509b0: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x2509b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x2509b4: 0xae060038  sw          $a2, 0x38($s0)
    ctx->pc = 0x2509b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 6));
    // 0x2509b8: 0xc0942b6  jal         func_250AD8
    ctx->pc = 0x2509B8u;
    SET_GPR_U32(ctx, 31, 0x2509C0u);
    ctx->pc = 0x2509BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2509B8u;
    // 0x2509bc: 0xae10003c  sw          $s0, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250AD8u, 0x2509B8u, 0x2509C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2509C0u;
label_2509c0:
    // 0x2509c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2509c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2509c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2509c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2509c8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2509c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2509cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2509CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2509D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2509CCu;
        // 0x2509d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2509CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2509D4u;
}
