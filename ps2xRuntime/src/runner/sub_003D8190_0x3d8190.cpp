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

// Function: sub_003D8190
// Address: 0x3d8190 - 0x3d81e8
void sub_003D8190_0x3d8190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D8190_0x3d8190");
#endif

    switch (ctx->pc) {
        case 0x3d81a4u: goto label_3d81a4;
        default: break;
    }

    ctx->pc = 0x3d8190u;

    // 0x3d8190: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d8190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d8194: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d8194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d8198: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d8198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d819c: 0xc0a639c  jal         func_298E70
    ctx->pc = 0x3D819Cu;
    SET_GPR_U32(ctx, 31, 0x3D81A4u);
    ctx->pc = 0x3D81A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D819Cu;
    // 0x3d81a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298E70u, 0x3D819Cu, 0x3D81A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D81A4u;
label_3d81a4:
    // 0x3d81a4: 0x8e05020c  lw          $a1, 0x20C($s0)
    ctx->pc = 0x3d81a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x3d81a8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3d81a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3d81ac: 0x96042bd4  lhu         $a0, 0x2BD4($s0)
    ctx->pc = 0x3d81acu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 11220)));
    // 0x3d81b0: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x3d81b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3d81b4: 0x61082b  sltu        $at, $v1, $at
    ctx->pc = 0x3d81b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x3d81b8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D81B8u;
    {
        const bool branch_taken_0x3d81b8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D81BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D81B8u;
        // 0x3d81bc: 0x3403ffff  ori         $v1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d81b8) {
            ctx->pc = 0x3D81C8u;
            goto label_3d81c8;
        }
    }
    ctx->pc = 0x3D81C0u;
    // 0x3d81c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3D81C0u;
    {
        const bool branch_taken_0x3d81c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D81C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D81C0u;
        // 0x3d81c4: 0xa6032bd4  sh          $v1, 0x2BD4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11220), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d81c0) {
            ctx->pc = 0x3D81D8u;
            goto label_3d81d8;
        }
    }
    ctx->pc = 0x3D81C8u;
label_3d81c8:
    // 0x3d81c8: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x3d81c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x3d81cc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3d81ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3d81d0: 0xa6032bd4  sh          $v1, 0x2BD4($s0)
    ctx->pc = 0x3d81d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11220), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d81d4: 0x0  nop
    ctx->pc = 0x3d81d4u;
    // NOP
label_3d81d8:
    // 0x3d81d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d81d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d81dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d81dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d81e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3D81E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D81E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D81E0u;
        // 0x3d81e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D81E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D81E8u;
}
