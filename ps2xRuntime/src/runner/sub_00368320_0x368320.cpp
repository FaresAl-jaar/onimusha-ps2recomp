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

// Function: sub_00368320
// Address: 0x368320 - 0x368388
void sub_00368320_0x368320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00368320_0x368320");
#endif

    switch (ctx->pc) {
        case 0x36833cu: goto label_36833c;
        case 0x368348u: goto label_368348;
        case 0x368358u: goto label_368358;
        default: break;
    }

    ctx->pc = 0x368320u;

    // 0x368320: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x368320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x368324: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x368324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368328: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x368328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36832c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36832cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x368330: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x368330u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368334: 0xc0b78bc  jal         func_2DE2F0
    ctx->pc = 0x368334u;
    SET_GPR_U32(ctx, 31, 0x36833Cu);
    ctx->pc = 0x368338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368334u;
    // 0x368338: 0x26040038  addiu       $a0, $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2F0u, 0x368334u, 0x36833Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36833Cu;
label_36833c:
    // 0x36833c: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x36833cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x368340: 0xc0b78bc  jal         func_2DE2F0
    ctx->pc = 0x368340u;
    SET_GPR_U32(ctx, 31, 0x368348u);
    ctx->pc = 0x368344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368340u;
    // 0x368344: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2F0u, 0x368340u, 0x368348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368348u;
label_368348:
    // 0x368348: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x368348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x36834c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36834cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368350: 0xc0cc00c  jal         func_330030
    ctx->pc = 0x368350u;
    SET_GPR_U32(ctx, 31, 0x368358u);
    ctx->pc = 0x368354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368350u;
    // 0x368354: 0x24841270  addiu       $a0, $a0, 0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330030u, 0x368350u, 0x368358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368358u;
label_368358:
    // 0x368358: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x368358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x36835c: 0x2463c250  addiu       $v1, $v1, -0x3DB0
    ctx->pc = 0x36835cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951504));
    // 0x368360: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x368360u;
    { uint32_t bits = FAST_READ32(0x68C250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x368364: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x368364u;
    { uint32_t bits = FAST_READ32(0x68C254u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x368368: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x368368u;
    { uint32_t bits = FAST_READ32(0x68C258u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36836c: 0xe602009c  swc1        $f2, 0x9C($s0)
    ctx->pc = 0x36836cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x368370: 0xe60100a0  swc1        $f1, 0xA0($s0)
    ctx->pc = 0x368370u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x368374: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x368374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x368378: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x368378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36837c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36837cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x368380: 0x3e00008  jr          $ra
    ctx->pc = 0x368380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x368384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368380u;
        // 0x368384: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x368388u;
}
