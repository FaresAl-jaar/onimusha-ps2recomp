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

// Function: sub_001A44F0
// Address: 0x1a44f0 - 0x1a45a8
void sub_001A44F0_0x1a44f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A44F0_0x1a44f0");
#endif

    switch (ctx->pc) {
        case 0x1a4534u: goto label_1a4534;
        case 0x1a4598u: goto label_1a4598;
        default: break;
    }

    ctx->pc = 0x1a44f0u;

    // 0x1a44f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a44f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a44f4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1a44f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1a44f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a44f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a44fc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a44fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1a4500: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a4500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a4504: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a4504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a4508: 0x8c26cebc  lw          $a2, -0x3144($at)
    ctx->pc = 0x1a4508u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x1a450c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a450cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4510: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1a4510u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1a4514: 0x24a56ca0  addiu       $a1, $a1, 0x6CA0
    ctx->pc = 0x1a4514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27808));
    // 0x1a4518: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1a4518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1a451c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1a451cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1a4520: 0xac23cebc  sw          $v1, -0x3144($at)
    ctx->pc = 0x1a4520u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x1a4524: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x1a4524u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a4528: 0x3c040085  lui         $a0, 0x85
    ctx->pc = 0x1a4528u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)133 << 16));
    // 0x1a452c: 0xc04bca8  jal         func_12F2A0
    ctx->pc = 0x1A452Cu;
    SET_GPR_U32(ctx, 31, 0x1A4534u);
    ctx->pc = 0x1A4530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A452Cu;
    // 0x1a4530: 0x2484f190  addiu       $a0, $a0, -0xE70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F2A0u, 0x1A452Cu, 0x1A4534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4534u;
label_1a4534:
    // 0x1a4534: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1a4534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4538: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x1a4538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x1a453c: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x1a453cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x1a4540: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a4540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a4544: 0x24846ca0  addiu       $a0, $a0, 0x6CA0
    ctx->pc = 0x1a4544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27808));
    // 0x1a4548: 0xe4206ca0  swc1        $f0, 0x6CA0($at)
    ctx->pc = 0x1a4548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x696CA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x696CA0u, _value); } while (0); }
    // 0x1a454c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1a454cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4550: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x1a4550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x1a4554: 0xe4206ca4  swc1        $f0, 0x6CA4($at)
    ctx->pc = 0x1a4554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x696CA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x696CA4u, _value); } while (0); }
    // 0x1a4558: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1a4558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a455c: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x1a455cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x1a4560: 0xe4206ca8  swc1        $f0, 0x6CA8($at)
    ctx->pc = 0x1a4560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x696CA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x696CA8u, _value); } while (0); }
    // 0x1a4564: 0x8602000c  lh          $v0, 0xC($s0)
    ctx->pc = 0x1a4564u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a4568: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x1a4568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x1a456c: 0xa4226cc0  sh          $v0, 0x6CC0($at)
    ctx->pc = 0x1a456cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x696CC0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x696CC0u, _value); } while (0);
    // 0x1a4570: 0x8602000e  lh          $v0, 0xE($s0)
    ctx->pc = 0x1a4570u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x1a4574: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x1a4574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x1a4578: 0xa4226cc2  sh          $v0, 0x6CC2($at)
    ctx->pc = 0x1a4578u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x696CC2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x696CC2u, _value); } while (0);
    // 0x1a457c: 0x86020010  lh          $v0, 0x10($s0)
    ctx->pc = 0x1a457cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1a4580: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x1a4580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x1a4584: 0xa4226cc4  sh          $v0, 0x6CC4($at)
    ctx->pc = 0x1a4584u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x696CC4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x696CC4u, _value); } while (0);
    // 0x1a4588: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1a4588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a458c: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x1a458cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x1a4590: 0xc04bc7c  jal         func_12F1F0
    ctx->pc = 0x1A4590u;
    SET_GPR_U32(ctx, 31, 0x1A4598u);
    ctx->pc = 0x1A4594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4590u;
    // 0x1a4594: 0xe4206ce4  swc1        $f0, 0x6CE4($at) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 27876), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F1F0u, 0x1A4590u, 0x1A4598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4598u;
label_1a4598:
    // 0x1a4598: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a4598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a459c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a459cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a45a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A45A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A45A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A45A0u;
        // 0x1a45a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A45A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A45A8u;
}
