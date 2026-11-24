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

// Function: sub_00209050
// Address: 0x209050 - 0x2090cc
void sub_00209050_0x209050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209050_0x209050");
#endif

    switch (ctx->pc) {
        case 0x209074u: goto label_209074;
        case 0x2090a8u: goto label_2090a8;
        default: break;
    }

    ctx->pc = 0x209050u;

    // 0x209050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x209050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x209054: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x209054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x209058: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x209058u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20905c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20905cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x209060: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x209060u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209064: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x209064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x209068: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x209068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x20906c: 0xc081d84  jal         func_207610
    ctx->pc = 0x20906Cu;
    SET_GPR_U32(ctx, 31, 0x209074u);
    ctx->pc = 0x209070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20906Cu;
    // 0x209070: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x20906Cu, 0x209074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209074u;
label_209074:
    // 0x209074: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x209074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209078: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x209078u;
    {
        const bool branch_taken_0x209078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x20907Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209078u;
        // 0x20907c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209078) {
            ctx->pc = 0x2090A0u;
            goto label_2090a0;
        }
    }
    ctx->pc = 0x209080u;
    // 0x209080: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x209080u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x209084: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x209084u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209088: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x209088u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20908c: 0x24847e60  addiu       $a0, $a0, 0x7E60
    ctx->pc = 0x20908cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32352));
    // 0x209090: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x209090u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209094: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x209094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x209098: 0x8082e3e  j           func_20B8F8
    ctx->pc = 0x209098u;
    ctx->pc = 0x20909Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209098u;
    // 0x20909c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x2090A0u;
label_2090a0:
    // 0x2090a0: 0xc0821e6  jal         func_208798
    ctx->pc = 0x2090A0u;
    SET_GPR_U32(ctx, 31, 0x2090A8u);
    ctx->pc = 0x208798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208798u, 0x2090A0u, 0x2090A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2090A8u;
label_2090a8:
    // 0x2090a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2090a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2090ac: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2090acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2090b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2090b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2090b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2090b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2090b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2090b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2090bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2090bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2090c0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2090c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2090c4: 0x80898e2  j           func_226388
    ctx->pc = 0x2090C4u;
    ctx->pc = 0x2090C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2090C4u;
    // 0x2090c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226388u;
    sub_00226388_0x226388(rdram, ctx, runtime); return;
    ctx->pc = 0x2090CCu;
}
