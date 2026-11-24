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

// Function: sub_0036A810
// Address: 0x36a810 - 0x36a928
void sub_0036A810_0x36a810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A810_0x36a810");
#endif

    switch (ctx->pc) {
        case 0x36a908u: goto label_36a908;
        case 0x36a910u: goto label_36a910;
        case 0x36a918u: goto label_36a918;
        default: break;
    }

    ctx->pc = 0x36a810u;

    // 0x36a810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36a810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36a814: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x36a814u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x36a818: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36a818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36a81c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x36a81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x36a820: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36a820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36a824: 0x24a5c250  addiu       $a1, $a1, -0x3DB0
    ctx->pc = 0x36a824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951504));
    // 0x36a828: 0xa082001f  sb          $v0, 0x1F($a0)
    ctx->pc = 0x36a828u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 31), (uint8_t)GPR_U32(ctx, 2));
    // 0x36a82c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x36a82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x36a830: 0xa0800020  sb          $zero, 0x20($a0)
    ctx->pc = 0x36a830u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x36a834: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x36a834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36a838: 0xa0800021  sb          $zero, 0x21($a0)
    ctx->pc = 0x36a838u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x36a83c: 0xa0800022  sb          $zero, 0x22($a0)
    ctx->pc = 0x36a83cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 34), (uint8_t)GPR_U32(ctx, 0));
    // 0x36a840: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x36a840u;
    { uint32_t bits = FAST_READ32(0x68C250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36a844: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x36a844u;
    { uint32_t bits = FAST_READ32(0x68C254u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36a848: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x36a848u;
    { uint32_t bits = FAST_READ32(0x68C258u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36a84c: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x36a84cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x36a850: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x36a850u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x36a854: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x36a854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x36a858: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x36a858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36a85c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x36a85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36a860: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x36a860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36a864: 0xe4820090  swc1        $f2, 0x90($a0)
    ctx->pc = 0x36a864u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
    // 0x36a868: 0xe4810094  swc1        $f1, 0x94($a0)
    ctx->pc = 0x36a868u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 148), bits); }
    // 0x36a86c: 0xe4800098  swc1        $f0, 0x98($a0)
    ctx->pc = 0x36a86cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
    // 0x36a870: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x36a870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36a874: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x36a874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36a878: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x36a878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36a87c: 0xe482009c  swc1        $f2, 0x9C($a0)
    ctx->pc = 0x36a87cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 156), bits); }
    // 0x36a880: 0xe48100a0  swc1        $f1, 0xA0($a0)
    ctx->pc = 0x36a880u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 160), bits); }
    // 0x36a884: 0xe48000a4  swc1        $f0, 0xA4($a0)
    ctx->pc = 0x36a884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 164), bits); }
    // 0x36a888: 0x908301bd  lbu         $v1, 0x1BD($a0)
    ctx->pc = 0x36a888u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 445)));
    // 0x36a88c: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x36A88Cu;
    {
        const bool branch_taken_0x36a88c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x36A890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A88Cu;
        // 0x36a890: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a88c) {
            ctx->pc = 0x36A8D0u;
            goto label_36a8d0;
        }
    }
    ctx->pc = 0x36A894u;
    // 0x36a894: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x36a894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36a898: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x36A898u;
    {
        const bool branch_taken_0x36a898 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x36A89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A898u;
        // 0x36a89c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a898) {
            ctx->pc = 0x36A8C0u;
            goto label_36a8c0;
        }
    }
    ctx->pc = 0x36A8A0u;
    // 0x36a8a0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36A8A0u;
    {
        const bool branch_taken_0x36a8a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x36a8a0) {
            ctx->pc = 0x36A8B0u;
            goto label_36a8b0;
        }
    }
    ctx->pc = 0x36A8A8u;
    // 0x36a8a8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x36A8A8u;
    {
        const bool branch_taken_0x36a8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a8a8) {
            ctx->pc = 0x36A8E0u;
            goto label_36a8e0;
        }
    }
    ctx->pc = 0x36A8B0u;
label_36a8b0:
    // 0x36a8b0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x36a8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x36a8b4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x36A8B4u;
    {
        const bool branch_taken_0x36a8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A8B4u;
        // 0x36a8b8: 0xa2020194  sb          $v0, 0x194($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 404), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a8b4) {
            ctx->pc = 0x36A8E8u;
            goto label_36a8e8;
        }
    }
    ctx->pc = 0x36A8BCu;
    // 0x36a8bc: 0x0  nop
    ctx->pc = 0x36a8bcu;
    // NOP
label_36a8c0:
    // 0x36a8c0: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x36a8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x36a8c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x36A8C4u;
    {
        const bool branch_taken_0x36a8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A8C4u;
        // 0x36a8c8: 0xa2020194  sb          $v0, 0x194($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 404), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a8c4) {
            ctx->pc = 0x36A8E8u;
            goto label_36a8e8;
        }
    }
    ctx->pc = 0x36A8CCu;
    // 0x36a8cc: 0x0  nop
    ctx->pc = 0x36a8ccu;
    // NOP
label_36a8d0:
    // 0x36a8d0: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x36a8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x36a8d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36A8D4u;
    {
        const bool branch_taken_0x36a8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A8D4u;
        // 0x36a8d8: 0xa2020194  sb          $v0, 0x194($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 404), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a8d4) {
            ctx->pc = 0x36A8E8u;
            goto label_36a8e8;
        }
    }
    ctx->pc = 0x36A8DCu;
    // 0x36a8dc: 0x0  nop
    ctx->pc = 0x36a8dcu;
    // NOP
label_36a8e0:
    // 0x36a8e0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x36a8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x36a8e4: 0xa2020194  sb          $v0, 0x194($s0)
    ctx->pc = 0x36a8e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 404), (uint8_t)GPR_U32(ctx, 2));
label_36a8e8:
    // 0x36a8e8: 0xae000198  sw          $zero, 0x198($s0)
    ctx->pc = 0x36a8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 0));
    // 0x36a8ec: 0xae00019c  sw          $zero, 0x19C($s0)
    ctx->pc = 0x36a8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 0));
    // 0x36a8f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x36a8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36a8f4: 0xae0201a4  sw          $v0, 0x1A4($s0)
    ctx->pc = 0x36a8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 420), GPR_U32(ctx, 2));
    // 0x36a8f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36a8f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a8fc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x36a8fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x36a900: 0xc0dc7f8  jal         func_371FE0
    ctx->pc = 0x36A900u;
    SET_GPR_U32(ctx, 31, 0x36A908u);
    ctx->pc = 0x36A904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A900u;
    // 0x36a904: 0xa60201a0  sh          $v0, 0x1A0($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 416), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371FE0u, 0x36A900u, 0x36A908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A908u;
label_36a908:
    // 0x36a908: 0xc0ed6d8  jal         func_3B5B60
    ctx->pc = 0x36A908u;
    SET_GPR_U32(ctx, 31, 0x36A910u);
    ctx->pc = 0x3B5B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5B60u, 0x36A908u, 0x36A910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A910u;
label_36a910:
    // 0x36a910: 0xc0daa60  jal         func_36A980
    ctx->pc = 0x36A910u;
    SET_GPR_U32(ctx, 31, 0x36A918u);
    ctx->pc = 0x36A914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A910u;
    // 0x36a914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A980u, 0x36A910u, 0x36A918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A918u;
label_36a918:
    // 0x36a918: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36a918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36a91c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36a91cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a920: 0x3e00008  jr          $ra
    ctx->pc = 0x36A920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A920u;
        // 0x36a924: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A928u;
}
