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

// Function: sub_00206558
// Address: 0x206558 - 0x2065bc
void sub_00206558_0x206558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206558_0x206558");
#endif

    switch (ctx->pc) {
        case 0x20656cu: goto label_20656c;
        case 0x206598u: goto label_206598;
        case 0x2065a4u: goto label_2065a4;
        default: break;
    }

    ctx->pc = 0x206558u;

    // 0x206558: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x206558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20655c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20655cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x206560: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x206560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x206564: 0xc081d84  jal         func_207610
    ctx->pc = 0x206564u;
    SET_GPR_U32(ctx, 31, 0x20656Cu);
    ctx->pc = 0x206568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206564u;
    // 0x206568: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x206564u, 0x20656Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20656Cu;
label_20656c:
    // 0x20656c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20656cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206570: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x206570u;
    {
        const bool branch_taken_0x206570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x206574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206570u;
        // 0x206574: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206570) {
            ctx->pc = 0x206590u;
            goto label_206590;
        }
    }
    ctx->pc = 0x206578u;
    // 0x206578: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x206578u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x20657c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20657cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206580: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x206580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x206584: 0x248473d8  addiu       $a0, $a0, 0x73D8
    ctx->pc = 0x206584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29656));
    // 0x206588: 0x8082e3e  j           func_20B8F8
    ctx->pc = 0x206588u;
    ctx->pc = 0x20658Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206588u;
    // 0x20658c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x206590u;
label_206590:
    // 0x206590: 0xc08191a  jal         func_206468
    ctx->pc = 0x206590u;
    SET_GPR_U32(ctx, 31, 0x206598u);
    ctx->pc = 0x206468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206468u, 0x206590u, 0x206598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206598u;
label_206598:
    // 0x206598: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x206598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20659c: 0xc0829ea  jal         func_20A7A8
    ctx->pc = 0x20659Cu;
    SET_GPR_U32(ctx, 31, 0x2065A4u);
    ctx->pc = 0x2065A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20659Cu;
    // 0x2065a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A7A8u, 0x20659Cu, 0x2065A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2065A4u;
label_2065a4:
    // 0x2065a4: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x2065a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x2065a8: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x2065a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2065ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2065acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2065b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2065b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2065b4: 0x8092dee  j           func_24B7B8
    ctx->pc = 0x2065B4u;
    ctx->pc = 0x2065B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2065B4u;
    // 0x2065b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B7B8u;
    sub_0024B7B8_0x24b7b8(rdram, ctx, runtime); return;
    ctx->pc = 0x2065BCu;
}
