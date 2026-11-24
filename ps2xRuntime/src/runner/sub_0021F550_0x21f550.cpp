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

// Function: sub_0021F550
// Address: 0x21f550 - 0x21f5c0
void sub_0021F550_0x21f550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F550_0x21f550");
#endif

    switch (ctx->pc) {
        case 0x21f56cu: goto label_21f56c;
        case 0x21f5a8u: goto label_21f5a8;
        default: break;
    }

    ctx->pc = 0x21f550u;

    // 0x21f550: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21f550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21f554: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21f554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21f558: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21f558u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f55c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21f55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21f560: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21f560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21f564: 0xc084968  jal         func_2125A0
    ctx->pc = 0x21F564u;
    SET_GPR_U32(ctx, 31, 0x21F56Cu);
    ctx->pc = 0x21F568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F564u;
    // 0x21f568: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x21F564u, 0x21F56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F56Cu;
label_21f56c:
    // 0x21f56c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x21f56cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x21f570: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21F570u;
    {
        const bool branch_taken_0x21f570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F570u;
        // 0x21f574: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f570) {
            ctx->pc = 0x21F590u;
            goto label_21f590;
        }
    }
    ctx->pc = 0x21F578u;
    // 0x21f578: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21f578u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f57c: 0x34a5015b  ori         $a1, $a1, 0x15B
    ctx->pc = 0x21f57cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)347);
    // 0x21f580: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21f580u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21f584: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21f584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f588: 0x80848e0  j           func_212380
    ctx->pc = 0x21F588u;
    ctx->pc = 0x21F58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F588u;
    // 0x21f58c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x21F590u;
label_21f590:
    // 0x21f590: 0x8e0336b0  lw          $v1, 0x36B0($s0)
    ctx->pc = 0x21f590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14000)));
    // 0x21f594: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x21F594u;
    {
        const bool branch_taken_0x21f594 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f594) {
            ctx->pc = 0x21F598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21F594u;
            // 0x21f598: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21F5B0u;
            goto label_21f5b0;
        }
    }
    ctx->pc = 0x21F59Cu;
    // 0x21f59c: 0xac710dd0  sw          $s1, 0xDD0($v1)
    ctx->pc = 0x21f59cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3536), GPR_U32(ctx, 17));
    // 0x21f5a0: 0xc087dd6  jal         func_21F758
    ctx->pc = 0x21F5A0u;
    SET_GPR_U32(ctx, 31, 0x21F5A8u);
    ctx->pc = 0x21F5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F5A0u;
    // 0x21f5a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F758u, 0x21F5A0u, 0x21F5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F5A8u;
label_21f5a8:
    // 0x21f5a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21f5a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f5ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21f5acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21f5b0:
    // 0x21f5b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21f5b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21f5b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21f5b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f5b8: 0x3e00008  jr          $ra
    ctx->pc = 0x21F5B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F5B8u;
        // 0x21f5bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F5B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F5C0u;
}
