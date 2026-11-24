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

// Function: sub_0036F510
// Address: 0x36f510 - 0x36f5fc
void sub_0036F510_0x36f510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036F510_0x36f510");
#endif

    switch (ctx->pc) {
        case 0x36f580u: goto label_36f580;
        case 0x36f58cu: goto label_36f58c;
        case 0x36f594u: goto label_36f594;
        case 0x36f5a0u: goto label_36f5a0;
        case 0x36f5a8u: goto label_36f5a8;
        case 0x36f5bcu: goto label_36f5bc;
        case 0x36f5ccu: goto label_36f5cc;
        case 0x36f5ecu: goto label_36f5ec;
        default: break;
    }

    ctx->pc = 0x36f510u;

    // 0x36f510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36f510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36f514: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x36f514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x36f518: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36f518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36f51c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x36f51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x36f520: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36f520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36f524: 0x2463abe0  addiu       $v1, $v1, -0x5420
    ctx->pc = 0x36f524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945760));
    // 0x36f528: 0xa082001f  sb          $v0, 0x1F($a0)
    ctx->pc = 0x36f528u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 31), (uint8_t)GPR_U32(ctx, 2));
    // 0x36f52c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36f52cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f530: 0xa0800020  sb          $zero, 0x20($a0)
    ctx->pc = 0x36f530u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x36f534: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x36f534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x36f538: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x36f538u;
    { uint32_t bits = FAST_READ32(0x65ABE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36f53c: 0x2442c250  addiu       $v0, $v0, -0x3DB0
    ctx->pc = 0x36f53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951504));
    // 0x36f540: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x36f540u;
    { uint32_t bits = FAST_READ32(0x65ABE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36f544: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x36f544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36f548: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x36f548u;
    { uint32_t bits = FAST_READ32(0x65ABE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36f54c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x36f54cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x36f550: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36f550u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f554: 0xe4820090  swc1        $f2, 0x90($a0)
    ctx->pc = 0x36f554u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
    // 0x36f558: 0xe4810094  swc1        $f1, 0x94($a0)
    ctx->pc = 0x36f558u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 148), bits); }
    // 0x36f55c: 0xe4800098  swc1        $f0, 0x98($a0)
    ctx->pc = 0x36f55cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
    // 0x36f560: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x36f560u;
    { uint32_t bits = FAST_READ32(0x68C250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36f564: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x36f564u;
    { uint32_t bits = FAST_READ32(0x68C254u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36f568: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x36f568u;
    { uint32_t bits = FAST_READ32(0x68C258u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36f56c: 0xe482009c  swc1        $f2, 0x9C($a0)
    ctx->pc = 0x36f56cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 156), bits); }
    // 0x36f570: 0xe48100a0  swc1        $f1, 0xA0($a0)
    ctx->pc = 0x36f570u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 160), bits); }
    // 0x36f574: 0xe48000a4  swc1        $f0, 0xA4($a0)
    ctx->pc = 0x36f574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 164), bits); }
    // 0x36f578: 0xc0ed6cc  jal         func_3B5B30
    ctx->pc = 0x36F578u;
    SET_GPR_U32(ctx, 31, 0x36F580u);
    ctx->pc = 0x36F57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F578u;
    // 0x36f57c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5B30u, 0x36F578u, 0x36F580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F580u;
label_36f580:
    // 0x36f580: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x36f580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x36f584: 0xc0b78bc  jal         func_2DE2F0
    ctx->pc = 0x36F584u;
    SET_GPR_U32(ctx, 31, 0x36F58Cu);
    ctx->pc = 0x36F588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F584u;
    // 0x36f588: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2F0u, 0x36F584u, 0x36F58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F58Cu;
label_36f58c:
    // 0x36f58c: 0xc0b78d0  jal         func_2DE340
    ctx->pc = 0x36F58Cu;
    SET_GPR_U32(ctx, 31, 0x36F594u);
    ctx->pc = 0x36F590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F58Cu;
    // 0x36f590: 0x26040038  addiu       $a0, $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE340u, 0x36F58Cu, 0x36F594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F594u;
label_36f594:
    // 0x36f594: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x36f594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x36f598: 0xc0b78bc  jal         func_2DE2F0
    ctx->pc = 0x36F598u;
    SET_GPR_U32(ctx, 31, 0x36F5A0u);
    ctx->pc = 0x36F59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F598u;
    // 0x36f59c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2F0u, 0x36F598u, 0x36F5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F5A0u;
label_36f5a0:
    // 0x36f5a0: 0xc0b78d0  jal         func_2DE340
    ctx->pc = 0x36F5A0u;
    SET_GPR_U32(ctx, 31, 0x36F5A8u);
    ctx->pc = 0x36F5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F5A0u;
    // 0x36f5a4: 0x26040028  addiu       $a0, $s0, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE340u, 0x36F5A0u, 0x36F5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F5A8u;
label_36f5a8:
    // 0x36f5a8: 0x92050338  lbu         $a1, 0x338($s0)
    ctx->pc = 0x36f5a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x36f5ac: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x36f5acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x36f5b0: 0x24841270  addiu       $a0, $a0, 0x1270
    ctx->pc = 0x36f5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    // 0x36f5b4: 0xc0cbe14  jal         func_32F850
    ctx->pc = 0x36F5B4u;
    SET_GPR_U32(ctx, 31, 0x36F5BCu);
    ctx->pc = 0x36F5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F5B4u;
    // 0x36f5b8: 0x3406ffff  ori         $a2, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F850u, 0x36F5B4u, 0x36F5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F5BCu;
label_36f5bc:
    // 0x36f5bc: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x36f5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x36f5c0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x36f5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x36f5c4: 0xc0cbed0  jal         func_32FB40
    ctx->pc = 0x36F5C4u;
    SET_GPR_U32(ctx, 31, 0x36F5CCu);
    ctx->pc = 0x36F5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F5C4u;
    // 0x36f5c8: 0x24841270  addiu       $a0, $a0, 0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FB40u, 0x36F5C4u, 0x36F5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F5CCu;
label_36f5cc:
    // 0x36f5cc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x36f5ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x36f5d0: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x36f5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x36f5d4: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x36f5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x36f5d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36f5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f5dc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x36f5dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x36f5e0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x36f5e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x36f5e4: 0xc0dbda8  jal         func_36F6A0
    ctx->pc = 0x36F5E4u;
    SET_GPR_U32(ctx, 31, 0x36F5ECu);
    ctx->pc = 0x36F5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F5E4u;
    // 0x36f5e8: 0xac22cebc  sw          $v0, -0x3144($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36F6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36F6A0u, 0x36F5E4u, 0x36F5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F5ECu;
label_36f5ec:
    // 0x36f5ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36f5ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36f5f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36f5f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36f5f4: 0x3e00008  jr          $ra
    ctx->pc = 0x36F5F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F5F4u;
        // 0x36f5f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F5F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F5FCu;
}
