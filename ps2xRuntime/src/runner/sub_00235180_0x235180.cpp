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

// Function: sub_00235180
// Address: 0x235180 - 0x2351f8
void sub_00235180_0x235180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235180_0x235180");
#endif

    switch (ctx->pc) {
        case 0x2351e4u: goto label_2351e4;
        case 0x2351ecu: goto label_2351ec;
        default: break;
    }

    ctx->pc = 0x235180u;

    // 0x235180: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x235180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x235184: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x235184u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x235188: 0x8c437550  lw          $v1, 0x7550($v0)
    ctx->pc = 0x235188u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4C7550u));
    // 0x23518c: 0xffa500b8  sd          $a1, 0xB8($sp)
    ctx->pc = 0x23518cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 5));
    // 0x235190: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x235190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235194: 0xffa600c0  sd          $a2, 0xC0($sp)
    ctx->pc = 0x235194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 6));
    // 0x235198: 0x27a600b8  addiu       $a2, $sp, 0xB8
    ctx->pc = 0x235198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x23519c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x23519cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2351a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2351a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2351a4: 0xffa700c8  sd          $a3, 0xC8($sp)
    ctx->pc = 0x2351a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 7));
    // 0x2351a8: 0xffa800d0  sd          $t0, 0xD0($sp)
    ctx->pc = 0x2351a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 8));
    // 0x2351ac: 0xffa900d8  sd          $t1, 0xD8($sp)
    ctx->pc = 0x2351acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 9));
    // 0x2351b0: 0xffaa00e0  sd          $t2, 0xE0($sp)
    ctx->pc = 0x2351b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 10));
    // 0x2351b4: 0xffab00e8  sd          $t3, 0xE8($sp)
    ctx->pc = 0x2351b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 11));
    // 0x2351b8: 0xe7ac0098  swc1        $f12, 0x98($sp)
    ctx->pc = 0x2351b8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2351bc: 0xe7ad009c  swc1        $f13, 0x9C($sp)
    ctx->pc = 0x2351bcu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x2351c0: 0xe7ae00a0  swc1        $f14, 0xA0($sp)
    ctx->pc = 0x2351c0u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2351c4: 0xe7af00a4  swc1        $f15, 0xA4($sp)
    ctx->pc = 0x2351c4u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2351c8: 0xe7b000a8  swc1        $f16, 0xA8($sp)
    ctx->pc = 0x2351c8u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2351cc: 0xe7b100ac  swc1        $f17, 0xAC($sp)
    ctx->pc = 0x2351ccu;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x2351d0: 0xe7b200b0  swc1        $f18, 0xB0($sp)
    ctx->pc = 0x2351d0u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2351d4: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2351D4u;
    {
        const bool branch_taken_0x2351d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2351D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2351D4u;
        // 0x2351d8: 0xe7b300b4  swc1        $f19, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2351d4) {
            ctx->pc = 0x2351ECu;
            goto label_2351ec;
        }
    }
    ctx->pc = 0x2351DCu;
    // 0x2351dc: 0xc04b012  jal         func_12C048
    ctx->pc = 0x2351DCu;
    SET_GPR_U32(ctx, 31, 0x2351E4u);
    ctx->pc = 0x12C048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C048u, 0x2351DCu, 0x2351E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2351E4u;
label_2351e4:
    // 0x2351e4: 0xc044332  jal         func_110CC8
    ctx->pc = 0x2351E4u;
    SET_GPR_U32(ctx, 31, 0x2351ECu);
    ctx->pc = 0x2351E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2351E4u;
    // 0x2351e8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110CC8u, 0x2351E4u, 0x2351ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2351ECu;
label_2351ec:
    // 0x2351ec: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2351ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2351f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2351F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2351F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2351F0u;
        // 0x2351f4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2351F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2351F8u;
}
