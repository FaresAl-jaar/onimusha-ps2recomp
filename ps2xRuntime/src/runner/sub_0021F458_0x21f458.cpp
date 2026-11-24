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

// Function: sub_0021F458
// Address: 0x21f458 - 0x21f4c8
void sub_0021F458_0x21f458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F458_0x21f458");
#endif

    switch (ctx->pc) {
        case 0x21f474u: goto label_21f474;
        case 0x21f4b0u: goto label_21f4b0;
        default: break;
    }

    ctx->pc = 0x21f458u;

    // 0x21f458: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21f458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21f45c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21f45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21f460: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21f460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f464: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21f464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21f468: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21f468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21f46c: 0xc084968  jal         func_2125A0
    ctx->pc = 0x21F46Cu;
    SET_GPR_U32(ctx, 31, 0x21F474u);
    ctx->pc = 0x21F470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F46Cu;
    // 0x21f470: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x21F46Cu, 0x21F474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F474u;
label_21f474:
    // 0x21f474: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x21f474u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x21f478: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21F478u;
    {
        const bool branch_taken_0x21f478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F478u;
        // 0x21f47c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f478) {
            ctx->pc = 0x21F498u;
            goto label_21f498;
        }
    }
    ctx->pc = 0x21F480u;
    // 0x21f480: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21f480u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f484: 0x34a50159  ori         $a1, $a1, 0x159
    ctx->pc = 0x21f484u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)345);
    // 0x21f488: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21f488u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21f48c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21f48cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f490: 0x80848e0  j           func_212380
    ctx->pc = 0x21F490u;
    ctx->pc = 0x21F494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F490u;
    // 0x21f494: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x21F498u;
label_21f498:
    // 0x21f498: 0x8e0336b0  lw          $v1, 0x36B0($s0)
    ctx->pc = 0x21f498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14000)));
    // 0x21f49c: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x21F49Cu;
    {
        const bool branch_taken_0x21f49c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f49c) {
            ctx->pc = 0x21F4A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21F49Cu;
            // 0x21f4a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21F4B8u;
            goto label_21f4b8;
        }
    }
    ctx->pc = 0x21F4A4u;
    // 0x21f4a4: 0xac710dc4  sw          $s1, 0xDC4($v1)
    ctx->pc = 0x21f4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3524), GPR_U32(ctx, 17));
    // 0x21f4a8: 0xc087dd6  jal         func_21F758
    ctx->pc = 0x21F4A8u;
    SET_GPR_U32(ctx, 31, 0x21F4B0u);
    ctx->pc = 0x21F4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F4A8u;
    // 0x21f4ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F758u, 0x21F4A8u, 0x21F4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F4B0u;
label_21f4b0:
    // 0x21f4b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21f4b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f4b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21f4b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21f4b8:
    // 0x21f4b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21f4b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21f4bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21f4bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f4c0: 0x3e00008  jr          $ra
    ctx->pc = 0x21F4C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F4C0u;
        // 0x21f4c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F4C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F4C8u;
}
