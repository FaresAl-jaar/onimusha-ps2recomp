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

// Function: sub_003987A0
// Address: 0x3987a0 - 0x398890
void sub_003987A0_0x3987a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003987A0_0x3987a0");
#endif

    switch (ctx->pc) {
        case 0x398814u: goto label_398814;
        case 0x39881cu: goto label_39881c;
        case 0x398828u: goto label_398828;
        case 0x398830u: goto label_398830;
        case 0x398850u: goto label_398850;
        case 0x398868u: goto label_398868;
        case 0x39887cu: goto label_39887c;
        default: break;
    }

    ctx->pc = 0x3987a0u;

    // 0x3987a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3987a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3987a4: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x3987a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x3987a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3987a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3987ac: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x3987acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x3987b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3987b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3987b4: 0x24c6c880  addiu       $a2, $a2, -0x3780
    ctx->pc = 0x3987b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953088));
    // 0x3987b8: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x3987b8u;
    { uint32_t bits = FAST_READ32(0x65C880u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3987bc: 0x24a5c250  addiu       $a1, $a1, -0x3DB0
    ctx->pc = 0x3987bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951504));
    // 0x3987c0: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x3987c0u;
    { uint32_t bits = FAST_READ32(0x65C884u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3987c4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x3987c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3987c8: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x3987c8u;
    { uint32_t bits = FAST_READ32(0x65C888u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3987cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3987ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3987d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3987d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3987d4: 0xe4820090  swc1        $f2, 0x90($a0)
    ctx->pc = 0x3987d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
    // 0x3987d8: 0xe4810094  swc1        $f1, 0x94($a0)
    ctx->pc = 0x3987d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 148), bits); }
    // 0x3987dc: 0xe4800098  swc1        $f0, 0x98($a0)
    ctx->pc = 0x3987dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
    // 0x3987e0: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x3987e0u;
    { uint32_t bits = FAST_READ32(0x68C250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3987e4: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x3987e4u;
    { uint32_t bits = FAST_READ32(0x68C254u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3987e8: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x3987e8u;
    { uint32_t bits = FAST_READ32(0x68C258u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3987ec: 0xe482009c  swc1        $f2, 0x9C($a0)
    ctx->pc = 0x3987ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 156), bits); }
    // 0x3987f0: 0xe48100a0  swc1        $f1, 0xA0($a0)
    ctx->pc = 0x3987f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 160), bits); }
    // 0x3987f4: 0xe48000a4  swc1        $f0, 0xA4($a0)
    ctx->pc = 0x3987f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 164), bits); }
    // 0x3987f8: 0xa48301ae  sh          $v1, 0x1AE($a0)
    ctx->pc = 0x3987f8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 430), (uint16_t)GPR_U32(ctx, 3));
    // 0x3987fc: 0xa48001b0  sh          $zero, 0x1B0($a0)
    ctx->pc = 0x3987fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 432), (uint16_t)GPR_U32(ctx, 0));
    // 0x398800: 0xa48001b2  sh          $zero, 0x1B2($a0)
    ctx->pc = 0x398800u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 434), (uint16_t)GPR_U32(ctx, 0));
    // 0x398804: 0xac8001b4  sw          $zero, 0x1B4($a0)
    ctx->pc = 0x398804u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 436), GPR_U32(ctx, 0));
    // 0x398808: 0xac8001b8  sw          $zero, 0x1B8($a0)
    ctx->pc = 0x398808u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 440), GPR_U32(ctx, 0));
    // 0x39880c: 0xc0dc7f8  jal         func_371FE0
    ctx->pc = 0x39880Cu;
    SET_GPR_U32(ctx, 31, 0x398814u);
    ctx->pc = 0x398810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39880Cu;
    // 0x398810: 0xa48201ac  sh          $v0, 0x1AC($a0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 4), 428), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371FE0u, 0x39880Cu, 0x398814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398814u;
label_398814:
    // 0x398814: 0xc0ed6d8  jal         func_3B5B60
    ctx->pc = 0x398814u;
    SET_GPR_U32(ctx, 31, 0x39881Cu);
    ctx->pc = 0x3B5B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5B60u, 0x398814u, 0x39881Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39881Cu;
label_39881c:
    // 0x39881c: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x39881cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x398820: 0xc0b78bc  jal         func_2DE2F0
    ctx->pc = 0x398820u;
    SET_GPR_U32(ctx, 31, 0x398828u);
    ctx->pc = 0x398824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398820u;
    // 0x398824: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2F0u, 0x398820u, 0x398828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398828u;
label_398828:
    // 0x398828: 0xc0b78d0  jal         func_2DE340
    ctx->pc = 0x398828u;
    SET_GPR_U32(ctx, 31, 0x398830u);
    ctx->pc = 0x39882Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398828u;
    // 0x39882c: 0x26040028  addiu       $a0, $s0, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE340u, 0x398828u, 0x398830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398830u;
label_398830:
    // 0x398830: 0x92030020  lbu         $v1, 0x20($s0)
    ctx->pc = 0x398830u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x398834: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x398834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x398838: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x398838u;
    {
        const bool branch_taken_0x398838 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x39883Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398838u;
        // 0x39883c: 0x3c040091  lui         $a0, 0x91 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398838) {
            ctx->pc = 0x398850u;
            goto label_398850;
        }
    }
    ctx->pc = 0x398840u;
    // 0x398840: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x398840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x398844: 0x24841270  addiu       $a0, $a0, 0x1270
    ctx->pc = 0x398844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    // 0x398848: 0xc0cbe14  jal         func_32F850
    ctx->pc = 0x398848u;
    SET_GPR_U32(ctx, 31, 0x398850u);
    ctx->pc = 0x39884Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398848u;
    // 0x39884c: 0x3406ffff  ori         $a2, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F850u, 0x398848u, 0x398850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398850u;
label_398850:
    // 0x398850: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x398850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x398854: 0xa2020020  sb          $v0, 0x20($s0)
    ctx->pc = 0x398854u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x398858: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x398858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39885c: 0xa2000021  sb          $zero, 0x21($s0)
    ctx->pc = 0x39885cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x398860: 0xc0e5ec8  jal         func_397B20
    ctx->pc = 0x398860u;
    SET_GPR_U32(ctx, 31, 0x398868u);
    ctx->pc = 0x398864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398860u;
    // 0x398864: 0xa2000022  sb          $zero, 0x22($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 34), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397B20u, 0x398860u, 0x398868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398868u;
label_398868:
    // 0x398868: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x398868u;
    {
        const bool branch_taken_0x398868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39886Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398868u;
        // 0x39886c: 0x3c040091  lui         $a0, 0x91 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398868) {
            ctx->pc = 0x398880u;
            goto label_398880;
        }
    }
    ctx->pc = 0x398870u;
    // 0x398870: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x398870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x398874: 0xc0cbed0  jal         func_32FB40
    ctx->pc = 0x398874u;
    SET_GPR_U32(ctx, 31, 0x39887Cu);
    ctx->pc = 0x398878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398874u;
    // 0x398878: 0x24841270  addiu       $a0, $a0, 0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FB40u, 0x398874u, 0x39887Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39887Cu;
label_39887c:
    // 0x39887c: 0x0  nop
    ctx->pc = 0x39887cu;
    // NOP
label_398880:
    // 0x398880: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x398880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x398884: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x398884u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x398888: 0x3e00008  jr          $ra
    ctx->pc = 0x398888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39888Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398888u;
        // 0x39888c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x398890u;
}
