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

// Function: sub_00341390
// Address: 0x341390 - 0x341418
void sub_00341390_0x341390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341390_0x341390");
#endif

    switch (ctx->pc) {
        case 0x3413c8u: goto label_3413c8;
        case 0x3413e0u: goto label_3413e0;
        default: break;
    }

    ctx->pc = 0x341390u;

    // 0x341390: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x341390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x341394: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x341394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x341398: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x341398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34139c: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x34139cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3413a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3413a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3413a4: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x3413a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3413a8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3413a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3413ac: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x3413acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3413b0: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x3413b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3413b4: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x3413b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x3413b8: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x3413b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x3413bc: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x3413bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x3413c0: 0xc07cd24  jal         func_1F3490
    ctx->pc = 0x3413C0u;
    SET_GPR_U32(ctx, 31, 0x3413C8u);
    ctx->pc = 0x3413C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3413C0u;
    // 0x3413c4: 0xe480000c  swc1        $f0, 0xC($a0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3490u, 0x3413C0u, 0x3413C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3413C8u;
label_3413c8:
    // 0x3413c8: 0x27848560  addiu       $a0, $gp, -0x7AA0
    ctx->pc = 0x3413c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
    // 0x3413cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3413ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3413d0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3413d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3413d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3413d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3413d8: 0xc053ae8  jal         func_14EBA0
    ctx->pc = 0x3413D8u;
    SET_GPR_U32(ctx, 31, 0x3413E0u);
    ctx->pc = 0x3413DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3413D8u;
    // 0x3413dc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EBA0u, 0x3413D8u, 0x3413E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3413E0u;
label_3413e0:
    // 0x3413e0: 0x8e0400e0  lw          $a0, 0xE0($s0)
    ctx->pc = 0x3413e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x3413e4: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x3413e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x3413e8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3413e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3413ec: 0xae0300e0  sw          $v1, 0xE0($s0)
    ctx->pc = 0x3413ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
    // 0x3413f0: 0x8e0300e0  lw          $v1, 0xE0($s0)
    ctx->pc = 0x3413f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x3413f4: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x3413f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x3413f8: 0xae0300e0  sw          $v1, 0xE0($s0)
    ctx->pc = 0x3413f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
    // 0x3413fc: 0x8e0300e0  lw          $v1, 0xE0($s0)
    ctx->pc = 0x3413fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x341400: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x341400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x341404: 0xae0300e0  sw          $v1, 0xE0($s0)
    ctx->pc = 0x341404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
    // 0x341408: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x341408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34140c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34140cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x341410: 0x3e00008  jr          $ra
    ctx->pc = 0x341410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341410u;
        // 0x341414: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341418u;
}
