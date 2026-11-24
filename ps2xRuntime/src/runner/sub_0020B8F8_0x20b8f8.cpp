#include <cstdio>
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

// Function: sub_0020B8F8
// Address: 0x20b8f8 - 0x20b98c
void sub_0020B8F8_0x20b8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B8F8_0x20b8f8");
#endif
    { static uint32_t n=0; uint32_t a0=GPR_U32(ctx,4), a1=GPR_U32(ctx,5); if (++n<=200) fprintf(stderr,"[probe err20b8f8] %.80s | %.80s ra=0x%x\n", a0? (const char*)(rdram+(a0&0x1ffffffu)) : "", (a1>0x100000u&&a1<0x2000000u)? (const char*)(rdram+(a1&0x1ffffffu)) : "", GPR_U32(ctx,31)); }

    switch (ctx->pc) {
        case 0x20b960u: goto label_20b960;
        case 0x20b970u: goto label_20b970;
        case 0x20b978u: goto label_20b978;
        default: break;
    }

    ctx->pc = 0x20b8f8u;

    // 0x20b8f8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x20b8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x20b8fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20b8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20b900: 0x3c100088  lui         $s0, 0x88
    ctx->pc = 0x20b900u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)136 << 16));
    // 0x20b904: 0x2610fa40  addiu       $s0, $s0, -0x5C0
    ctx->pc = 0x20b904u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965824));
    // 0x20b908: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20b908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20b90c: 0xffa50048  sd          $a1, 0x48($sp)
    ctx->pc = 0x20b90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
    // 0x20b910: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20b910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b914: 0xffa60050  sd          $a2, 0x50($sp)
    ctx->pc = 0x20b914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 6));
    // 0x20b918: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x20b918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20b91c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20b91cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b920: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20b920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b924: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20b924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20b928: 0xffa70058  sd          $a3, 0x58($sp)
    ctx->pc = 0x20b928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 7));
    // 0x20b92c: 0xffa80060  sd          $t0, 0x60($sp)
    ctx->pc = 0x20b92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 8));
    // 0x20b930: 0xffa90068  sd          $t1, 0x68($sp)
    ctx->pc = 0x20b930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 9));
    // 0x20b934: 0xffaa0070  sd          $t2, 0x70($sp)
    ctx->pc = 0x20b934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 10));
    // 0x20b938: 0xffab0078  sd          $t3, 0x78($sp)
    ctx->pc = 0x20b938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 11));
    // 0x20b93c: 0xe7ac0028  swc1        $f12, 0x28($sp)
    ctx->pc = 0x20b93cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x20b940: 0xe7ad002c  swc1        $f13, 0x2C($sp)
    ctx->pc = 0x20b940u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x20b944: 0xe7ae0030  swc1        $f14, 0x30($sp)
    ctx->pc = 0x20b944u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x20b948: 0xe7af0034  swc1        $f15, 0x34($sp)
    ctx->pc = 0x20b948u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x20b94c: 0xe7b00038  swc1        $f16, 0x38($sp)
    ctx->pc = 0x20b94cu;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x20b950: 0xe7b1003c  swc1        $f17, 0x3C($sp)
    ctx->pc = 0x20b950u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x20b954: 0xe7b20040  swc1        $f18, 0x40($sp)
    ctx->pc = 0x20b954u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x20b958: 0xc049590  jal         func_125640
    ctx->pc = 0x20B958u;
    SET_GPR_U32(ctx, 31, 0x20B960u);
    ctx->pc = 0x20B95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B958u;
    // 0x20b95c: 0xe7b30044  swc1        $f19, 0x44($sp) (Delay Slot)
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x20B958u, 0x20B960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B960u;
label_20b960:
    // 0x20b960: 0x27a60048  addiu       $a2, $sp, 0x48
    ctx->pc = 0x20b960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x20b964: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20b964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b968: 0xc04b012  jal         func_12C048
    ctx->pc = 0x20B968u;
    SET_GPR_U32(ctx, 31, 0x20B970u);
    ctx->pc = 0x20B96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B968u;
    // 0x20b96c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C048u, 0x20B968u, 0x20B970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B970u;
label_20b970:
    // 0x20b970: 0xc082e70  jal         func_20B9C0
    ctx->pc = 0x20B970u;
    SET_GPR_U32(ctx, 31, 0x20B978u);
    ctx->pc = 0x20B974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B970u;
    // 0x20b974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B9C0u, 0x20B970u, 0x20B978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B978u;
label_20b978:
    // 0x20b978: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20b978u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b97c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20b97cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20b980: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20b980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20b984: 0x3e00008  jr          $ra
    ctx->pc = 0x20B984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B984u;
        // 0x20b988: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B98Cu;
}
