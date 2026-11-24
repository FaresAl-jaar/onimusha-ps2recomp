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

// Function: sub_00372950
// Address: 0x372950 - 0x3729fc
void sub_00372950_0x372950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00372950_0x372950");
#endif

    switch (ctx->pc) {
        case 0x3729bcu: goto label_3729bc;
        case 0x3729f0u: goto label_3729f0;
        default: break;
    }

    ctx->pc = 0x372950u;

    // 0x372950: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x372950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x372954: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x372954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x372958: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x372958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x37295c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37295cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x372960: 0xa082001f  sb          $v0, 0x1F($a0)
    ctx->pc = 0x372960u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 31), (uint8_t)GPR_U32(ctx, 2));
    // 0x372964: 0x2463c250  addiu       $v1, $v1, -0x3DB0
    ctx->pc = 0x372964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951504));
    // 0x372968: 0xa0800020  sb          $zero, 0x20($a0)
    ctx->pc = 0x372968u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x37296c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x37296cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x372970: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x372970u;
    { uint32_t bits = FAST_READ32(0x68C250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x372974: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x372974u;
    { uint32_t bits = FAST_READ32(0x68C254u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x372978: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x372978u;
    { uint32_t bits = FAST_READ32(0x68C258u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37297c: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x37297cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x372980: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x372980u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x372984: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x372984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x372988: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x372988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37298c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x37298cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x372990: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x372990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372994: 0xe4820090  swc1        $f2, 0x90($a0)
    ctx->pc = 0x372994u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
    // 0x372998: 0xe4810094  swc1        $f1, 0x94($a0)
    ctx->pc = 0x372998u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 148), bits); }
    // 0x37299c: 0xe4800098  swc1        $f0, 0x98($a0)
    ctx->pc = 0x37299cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
    // 0x3729a0: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x3729a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3729a4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x3729a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3729a8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3729a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3729ac: 0xe482009c  swc1        $f2, 0x9C($a0)
    ctx->pc = 0x3729acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 156), bits); }
    // 0x3729b0: 0xe48100a0  swc1        $f1, 0xA0($a0)
    ctx->pc = 0x3729b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 160), bits); }
    // 0x3729b4: 0xc0dc7f8  jal         func_371FE0
    ctx->pc = 0x3729B4u;
    SET_GPR_U32(ctx, 31, 0x3729BCu);
    ctx->pc = 0x3729B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3729B4u;
    // 0x3729b8: 0xe48000a4  swc1        $f0, 0xA4($a0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 164), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x371FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371FE0u, 0x3729B4u, 0x3729BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3729BCu;
label_3729bc:
    // 0x3729bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3729bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3729c0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3729c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3729c4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3729c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3729c8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3729c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3729cc: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x3729ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x3729d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3729d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3729d4: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3729d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3729d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3729d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3729dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3729dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3729e0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3729e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3729e4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3729e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3729e8: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3729E8u;
    SET_GPR_U32(ctx, 31, 0x3729F0u);
    ctx->pc = 0x3729ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3729E8u;
    // 0x3729ec: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3729E8u, 0x3729F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3729F0u;
label_3729f0:
    // 0x3729f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3729f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3729f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3729F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3729F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3729F4u;
        // 0x3729f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3729F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3729FCu;
}
