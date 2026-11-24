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

// Function: sub_0020A488
// Address: 0x20a488 - 0x20a510
void sub_0020A488_0x20a488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A488_0x20a488");
#endif

    switch (ctx->pc) {
        case 0x20a4b4u: goto label_20a4b4;
        default: break;
    }

    ctx->pc = 0x20a488u;

    // 0x20a488: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20a488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20a48c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20a48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20a490: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x20a490u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a494: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20a494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20a498: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x20a498u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a49c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20a49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x20a4a0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x20a4a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a4a4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x20a4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x20a4a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20a4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20a4ac: 0xc081d84  jal         func_207610
    ctx->pc = 0x20A4ACu;
    SET_GPR_U32(ctx, 31, 0x20A4B4u);
    ctx->pc = 0x20A4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A4ACu;
    // 0x20a4b0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x20A4ACu, 0x20A4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A4B4u;
label_20a4b4:
    // 0x20a4b4: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x20a4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x20a4b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20a4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a4bc: 0x24848428  addiu       $a0, $a0, -0x7BD8
    ctx->pc = 0x20a4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935592));
    // 0x20a4c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20a4c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a4c4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x20a4c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a4c8: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x20a4c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a4cc: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x20A4CCu;
    {
        const bool branch_taken_0x20a4cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x20A4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A4CCu;
        // 0x20a4d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a4cc) {
            ctx->pc = 0x20A4F0u;
            goto label_20a4f0;
        }
    }
    ctx->pc = 0x20A4D4u;
    // 0x20a4d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20a4d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a4d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20a4d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20a4dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20a4dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20a4e0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x20a4e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20a4e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20a4e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20a4e8: 0x8082e3e  j           func_20B8F8
    ctx->pc = 0x20A4E8u;
    ctx->pc = 0x20A4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A4E8u;
    // 0x20a4ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x20A4F0u;
label_20a4f0:
    // 0x20a4f0: 0x8e640048  lw          $a0, 0x48($s3)
    ctx->pc = 0x20a4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x20a4f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20a4f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a4f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20a4f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20a4fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20a4fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20a500: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x20a500u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20a504: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20a504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20a508: 0x8092d28  j           func_24B4A0
    ctx->pc = 0x20A508u;
    ctx->pc = 0x20A50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A508u;
    // 0x20a50c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B4A0u;
    sub_0024B4A0_0x24b4a0(rdram, ctx, runtime); return;
    ctx->pc = 0x20A510u;
}
