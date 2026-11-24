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

// Function: sub_00398280
// Address: 0x398280 - 0x398350
void sub_00398280_0x398280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00398280_0x398280");
#endif

    switch (ctx->pc) {
        case 0x3982f4u: goto label_3982f4;
        case 0x3982fcu: goto label_3982fc;
        case 0x398308u: goto label_398308;
        case 0x398310u: goto label_398310;
        case 0x398330u: goto label_398330;
        default: break;
    }

    ctx->pc = 0x398280u;

    // 0x398280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x398280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x398284: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x398284u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x398288: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x398288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39828c: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x39828cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x398290: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x398290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x398294: 0x24c6c870  addiu       $a2, $a2, -0x3790
    ctx->pc = 0x398294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953072));
    // 0x398298: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x398298u;
    { uint32_t bits = FAST_READ32(0x65C870u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x39829c: 0x24a5c250  addiu       $a1, $a1, -0x3DB0
    ctx->pc = 0x39829cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951504));
    // 0x3982a0: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x3982a0u;
    { uint32_t bits = FAST_READ32(0x65C874u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3982a4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x3982a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3982a8: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x3982a8u;
    { uint32_t bits = FAST_READ32(0x65C878u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3982ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3982acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3982b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3982b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3982b4: 0xe4820090  swc1        $f2, 0x90($a0)
    ctx->pc = 0x3982b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
    // 0x3982b8: 0xe4810094  swc1        $f1, 0x94($a0)
    ctx->pc = 0x3982b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 148), bits); }
    // 0x3982bc: 0xe4800098  swc1        $f0, 0x98($a0)
    ctx->pc = 0x3982bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
    // 0x3982c0: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x3982c0u;
    { uint32_t bits = FAST_READ32(0x68C250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3982c4: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x3982c4u;
    { uint32_t bits = FAST_READ32(0x68C254u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3982c8: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x3982c8u;
    { uint32_t bits = FAST_READ32(0x68C258u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3982cc: 0xe482009c  swc1        $f2, 0x9C($a0)
    ctx->pc = 0x3982ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 156), bits); }
    // 0x3982d0: 0xe48100a0  swc1        $f1, 0xA0($a0)
    ctx->pc = 0x3982d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 160), bits); }
    // 0x3982d4: 0xe48000a4  swc1        $f0, 0xA4($a0)
    ctx->pc = 0x3982d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 164), bits); }
    // 0x3982d8: 0xa48301ae  sh          $v1, 0x1AE($a0)
    ctx->pc = 0x3982d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 430), (uint16_t)GPR_U32(ctx, 3));
    // 0x3982dc: 0xa48001b0  sh          $zero, 0x1B0($a0)
    ctx->pc = 0x3982dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 432), (uint16_t)GPR_U32(ctx, 0));
    // 0x3982e0: 0xa48001b2  sh          $zero, 0x1B2($a0)
    ctx->pc = 0x3982e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 434), (uint16_t)GPR_U32(ctx, 0));
    // 0x3982e4: 0xac8001b4  sw          $zero, 0x1B4($a0)
    ctx->pc = 0x3982e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 436), GPR_U32(ctx, 0));
    // 0x3982e8: 0xac8001b8  sw          $zero, 0x1B8($a0)
    ctx->pc = 0x3982e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 440), GPR_U32(ctx, 0));
    // 0x3982ec: 0xc0dc7f8  jal         func_371FE0
    ctx->pc = 0x3982ECu;
    SET_GPR_U32(ctx, 31, 0x3982F4u);
    ctx->pc = 0x3982F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3982ECu;
    // 0x3982f0: 0xa48201ac  sh          $v0, 0x1AC($a0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 4), 428), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371FE0u, 0x3982ECu, 0x3982F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3982F4u;
label_3982f4:
    // 0x3982f4: 0xc0ed6d8  jal         func_3B5B60
    ctx->pc = 0x3982F4u;
    SET_GPR_U32(ctx, 31, 0x3982FCu);
    ctx->pc = 0x3B5B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5B60u, 0x3982F4u, 0x3982FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3982FCu;
label_3982fc:
    // 0x3982fc: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x3982fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x398300: 0xc0b78bc  jal         func_2DE2F0
    ctx->pc = 0x398300u;
    SET_GPR_U32(ctx, 31, 0x398308u);
    ctx->pc = 0x398304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398300u;
    // 0x398304: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2F0u, 0x398300u, 0x398308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398308u;
label_398308:
    // 0x398308: 0xc0b78d0  jal         func_2DE340
    ctx->pc = 0x398308u;
    SET_GPR_U32(ctx, 31, 0x398310u);
    ctx->pc = 0x39830Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398308u;
    // 0x39830c: 0x26040028  addiu       $a0, $s0, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE340u, 0x398308u, 0x398310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398310u;
label_398310:
    // 0x398310: 0x92040020  lbu         $a0, 0x20($s0)
    ctx->pc = 0x398310u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x398314: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x398314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x398318: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x398318u;
    {
        const bool branch_taken_0x398318 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x39831Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398318u;
        // 0x39831c: 0x3c040091  lui         $a0, 0x91 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398318) {
            ctx->pc = 0x398330u;
            goto label_398330;
        }
    }
    ctx->pc = 0x398320u;
    // 0x398320: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x398320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x398324: 0x24841270  addiu       $a0, $a0, 0x1270
    ctx->pc = 0x398324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    // 0x398328: 0xc0cbe14  jal         func_32F850
    ctx->pc = 0x398328u;
    SET_GPR_U32(ctx, 31, 0x398330u);
    ctx->pc = 0x39832Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398328u;
    // 0x39832c: 0x3406ffff  ori         $a2, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F850u, 0x398328u, 0x398330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398330u;
label_398330:
    // 0x398330: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x398330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x398334: 0xa2030020  sb          $v1, 0x20($s0)
    ctx->pc = 0x398334u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x398338: 0xa2000021  sb          $zero, 0x21($s0)
    ctx->pc = 0x398338u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x39833c: 0xa2000022  sb          $zero, 0x22($s0)
    ctx->pc = 0x39833cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 34), (uint8_t)GPR_U32(ctx, 0));
    // 0x398340: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x398340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x398344: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x398344u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x398348: 0x3e00008  jr          $ra
    ctx->pc = 0x398348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39834Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398348u;
        // 0x39834c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x398350u;
}
