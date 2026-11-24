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

// Function: sub_002E5970
// Address: 0x2e5970 - 0x2e5c40
void sub_002E5970_0x2e5970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5970_0x2e5970");
#endif

    switch (ctx->pc) {
        case 0x2e59dcu: goto label_2e59dc;
        case 0x2e59ecu: goto label_2e59ec;
        case 0x2e59f8u: goto label_2e59f8;
        case 0x2e5a08u: goto label_2e5a08;
        case 0x2e5a40u: goto label_2e5a40;
        case 0x2e5a6cu: goto label_2e5a6c;
        case 0x2e5a88u: goto label_2e5a88;
        case 0x2e5a94u: goto label_2e5a94;
        case 0x2e5afcu: goto label_2e5afc;
        case 0x2e5b14u: goto label_2e5b14;
        case 0x2e5b24u: goto label_2e5b24;
        case 0x2e5b5cu: goto label_2e5b5c;
        case 0x2e5b6cu: goto label_2e5b6c;
        case 0x2e5b7cu: goto label_2e5b7c;
        case 0x2e5b8cu: goto label_2e5b8c;
        case 0x2e5c00u: goto label_2e5c00;
        default: break;
    }

    ctx->pc = 0x2e5970u;

    // 0x2e5970: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2e5970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2e5974: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2e5974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x2e5978: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x2e5978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
    // 0x2e597c: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x2e597cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x2e5980: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x2e5980u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5984: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x2e5984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x2e5988: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2e5988u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e598c: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x2e598cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x2e5990: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2e5990u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5994: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2e5994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x2e5998: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2e5998u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e599c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2e599cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2e59a0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2e59a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e59a4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2e59a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2e59a8: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x2e59a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e59ac: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2e59acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2e59b0: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x2e59b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e59b4: 0xe7b80020  swc1        $f24, 0x20($sp)
    ctx->pc = 0x2e59b4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2e59b8: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x2e59b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e59bc: 0xe7b7001c  swc1        $f23, 0x1C($sp)
    ctx->pc = 0x2e59bcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2e59c0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2e59c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2e59c4: 0xe7b60018  swc1        $f22, 0x18($sp)
    ctx->pc = 0x2e59c4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2e59c8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2e59c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e59cc: 0xe7b50014  swc1        $f21, 0x14($sp)
    ctx->pc = 0x2e59ccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2e59d0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2e59d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e59d4: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2E59D4u;
    SET_GPR_U32(ctx, 31, 0x2E59DCu);
    ctx->pc = 0x2E59D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E59D4u;
    // 0x2e59d8: 0xe7b40010  swc1        $f20, 0x10($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2E59D4u, 0x2E59DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E59DCu;
label_2e59dc:
    // 0x2e59dc: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2e59dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2e59e0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2e59e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e59e4: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2E59E4u;
    SET_GPR_U32(ctx, 31, 0x2E59ECu);
    ctx->pc = 0x2E59E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E59E4u;
    // 0x2e59e8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2E59E4u, 0x2E59ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E59ECu;
label_2e59ec:
    // 0x2e59ec: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2e59ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2e59f0: 0xc041468  jal         func_1051A0
    ctx->pc = 0x2E59F0u;
    SET_GPR_U32(ctx, 31, 0x2E59F8u);
    ctx->pc = 0x2E59F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E59F0u;
    // 0x2e59f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x2E59F0u, 0x2E59F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E59F8u;
label_2e59f8:
    // 0x2e59f8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2e59f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2e59fc: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x2e59fcu;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
    // 0x2e5a00: 0xc041468  jal         func_1051A0
    ctx->pc = 0x2E5A00u;
    SET_GPR_U32(ctx, 31, 0x2E5A08u);
    ctx->pc = 0x2E5A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5A00u;
    // 0x2e5a04: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x2E5A00u, 0x2E5A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5A08u;
label_2e5a08:
    // 0x2e5a08: 0x3c022b8c  lui         $v0, 0x2B8C
    ctx->pc = 0x2e5a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11148 << 16));
    // 0x2e5a0c: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x2e5a0cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x2e5a10: 0x3442bccc  ori         $v0, $v0, 0xBCCC
    ctx->pc = 0x2e5a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48332);
    // 0x2e5a14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5a14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5a18: 0x0  nop
    ctx->pc = 0x2e5a18u;
    // NOP
    // 0x2e5a1c: 0x4600c034  c.lt.s      $f24, $f0
    ctx->pc = 0x2e5a1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5a20: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2E5A20u;
    {
        const bool branch_taken_0x2e5a20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E5A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5A20u;
        // 0x2e5a24: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5a20) {
            ctx->pc = 0x2E5A48u;
            goto label_2e5a48;
        }
    }
    ctx->pc = 0x2E5A28u;
    // 0x2e5a28: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e5a28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5a2c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2e5a2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5a30: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2e5a30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5a34: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2e5a34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5a38: 0xc0b94ac  jal         func_2E52B0
    ctx->pc = 0x2E5A38u;
    SET_GPR_U32(ctx, 31, 0x2E5A40u);
    ctx->pc = 0x2E5A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5A38u;
    // 0x2e5a3c: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E52B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E52B0u, 0x2E5A38u, 0x2E5A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5A40u;
label_2e5a40:
    // 0x2e5a40: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x2E5A40u;
    {
        const bool branch_taken_0x2e5a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5a40) {
            ctx->pc = 0x2E5C00u;
            goto label_2e5c00;
        }
    }
    ctx->pc = 0x2E5A48u;
label_2e5a48:
    // 0x2e5a48: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x2e5a48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5a4c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2E5A4Cu;
    {
        const bool branch_taken_0x2e5a4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E5A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5A4Cu;
        // 0x2e5a50: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5a4c) {
            ctx->pc = 0x2E5A78u;
            goto label_2e5a78;
        }
    }
    ctx->pc = 0x2E5A54u;
    // 0x2e5a54: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2e5a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5a58: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2e5a58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5a5c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2e5a5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5a60: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2e5a60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5a64: 0xc0b94ac  jal         func_2E52B0
    ctx->pc = 0x2E5A64u;
    SET_GPR_U32(ctx, 31, 0x2E5A6Cu);
    ctx->pc = 0x2E5A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5A64u;
    // 0x2e5a68: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E52B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E52B0u, 0x2E5A64u, 0x2E5A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5A6Cu;
label_2e5a6c:
    // 0x2e5a6c: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x2E5A6Cu;
    {
        const bool branch_taken_0x2e5a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5a6c) {
            ctx->pc = 0x2E5C00u;
            goto label_2e5c00;
        }
    }
    ctx->pc = 0x2E5A74u;
    // 0x2e5a74: 0x0  nop
    ctx->pc = 0x2e5a74u;
    // NOP
label_2e5a78:
    // 0x2e5a78: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2e5a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2e5a7c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e5a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5a80: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2E5A80u;
    SET_GPR_U32(ctx, 31, 0x2E5A88u);
    ctx->pc = 0x2E5A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5A80u;
    // 0x2e5a84: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2E5A80u, 0x2E5A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5A88u;
label_2e5a88:
    // 0x2e5a88: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2e5a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2e5a8c: 0xc041468  jal         func_1051A0
    ctx->pc = 0x2E5A8Cu;
    SET_GPR_U32(ctx, 31, 0x2E5A94u);
    ctx->pc = 0x2E5A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5A8Cu;
    // 0x2e5a90: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x2E5A8Cu, 0x2E5A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5A94u;
label_2e5a94:
    // 0x2e5a94: 0x46000547  neg.s       $f21, $f0
    ctx->pc = 0x2e5a94u;
    ctx->f[21] = FPU_NEG_S(ctx->f[0]);
    // 0x2e5a98: 0x4617c01a  mula.s      $f24, $f23
    ctx->pc = 0x2e5a98u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[24], ctx->f[23]));
    // 0x2e5a9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e5a9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5aa0: 0x4615ad9d  msub.s      $f22, $f21, $f21
    ctx->pc = 0x2e5aa0u;
    ctx->f[22] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[21], ctx->f[21]));
    // 0x2e5aa4: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x2e5aa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5aa8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2E5AA8u;
    {
        const bool branch_taken_0x2e5aa8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E5AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5AA8u;
        // 0x2e5aac: 0x4600b046  mov.s       $f1, $f22 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5aa8) {
            ctx->pc = 0x2E5AB4u;
            goto label_2e5ab4;
        }
    }
    ctx->pc = 0x2E5AB0u;
    // 0x2e5ab0: 0x4600b047  neg.s       $f1, $f22
    ctx->pc = 0x2e5ab0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[22]);
label_2e5ab4:
    // 0x2e5ab4: 0x3c023586  lui         $v0, 0x3586
    ctx->pc = 0x2e5ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13702 << 16));
    // 0x2e5ab8: 0x344237bd  ori         $v0, $v0, 0x37BD
    ctx->pc = 0x2e5ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14269);
    // 0x2e5abc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5abcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5ac0: 0x0  nop
    ctx->pc = 0x2e5ac0u;
    // NOP
    // 0x2e5ac4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e5ac4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5ac8: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x2E5AC8u;
    {
        const bool branch_taken_0x2e5ac8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5ac8) {
            ctx->pc = 0x2E5B08u;
            goto label_2e5b08;
        }
    }
    ctx->pc = 0x2E5AD0u;
    // 0x2e5ad0: 0xffb10000  sd          $s1, 0x0($sp)
    ctx->pc = 0x2e5ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 17));
    // 0x2e5ad4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2e5ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5ad8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2e5ad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5adc: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2e5adcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5ae0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2e5ae0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5ae4: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x2e5ae4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5ae8: 0x240582d  daddu       $t3, $s2, $zero
    ctx->pc = 0x2e5ae8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5aec: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x2e5aecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2e5af0: 0x27aa00d0  addiu       $t2, $sp, 0xD0
    ctx->pc = 0x2e5af0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2e5af4: 0xc0b9500  jal         func_2E5400
    ctx->pc = 0x2E5AF4u;
    SET_GPR_U32(ctx, 31, 0x2E5AFCu);
    ctx->pc = 0x2E5AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5AF4u;
    // 0x2e5af8: 0xffb00008  sd          $s0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5400u, 0x2E5AF4u, 0x2E5AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5AFCu;
label_2e5afc:
    // 0x2e5afc: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x2E5AFCu;
    {
        const bool branch_taken_0x2e5afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5afc) {
            ctx->pc = 0x2E5C00u;
            goto label_2e5c00;
        }
    }
    ctx->pc = 0x2E5B04u;
    // 0x2e5b04: 0x0  nop
    ctx->pc = 0x2e5b04u;
    // NOP
label_2e5b08:
    // 0x2e5b08: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2e5b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2e5b0c: 0xc041468  jal         func_1051A0
    ctx->pc = 0x2E5B0Cu;
    SET_GPR_U32(ctx, 31, 0x2E5B14u);
    ctx->pc = 0x2E5B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5B0Cu;
    // 0x2e5b10: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x2E5B0Cu, 0x2E5B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5B14u;
label_2e5b14:
    // 0x2e5b14: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2e5b14u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2e5b18: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2e5b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2e5b1c: 0xc041468  jal         func_1051A0
    ctx->pc = 0x2E5B1Cu;
    SET_GPR_U32(ctx, 31, 0x2E5B24u);
    ctx->pc = 0x2E5B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5B1Cu;
    // 0x2e5b20: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x2E5B1Cu, 0x2E5B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5B24u;
label_2e5b24:
    // 0x2e5b24: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2e5b24u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2e5b28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e5b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5b2c: 0x4600c01a  mula.s      $f24, $f0
    ctx->pc = 0x2e5b2cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[24], ctx->f[0]));
    // 0x2e5b30: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2e5b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2e5b34: 0x4615a05d  msub.s      $f1, $f20, $f21
    ctx->pc = 0x2e5b34u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[20], ctx->f[21]));
    // 0x2e5b38: 0x4614b81a  mula.s      $f23, $f20
    ctx->pc = 0x2e5b38u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[23], ctx->f[20]));
    // 0x2e5b3c: 0x4615001d  msub.s      $f0, $f0, $f21
    ctx->pc = 0x2e5b3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[21]));
    // 0x2e5b40: 0x46160d43  div.s       $f21, $f1, $f22
    ctx->pc = 0x2e5b40u;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[1], ctx->f[22]); }
    // 0x2e5b44: 0x0  nop
    ctx->pc = 0x2e5b44u;
    // NOP
    // 0x2e5b48: 0x46160503  div.s       $f20, $f0, $f22
    ctx->pc = 0x2e5b48u;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[22]); }
    // 0x2e5b4c: 0x0  nop
    ctx->pc = 0x2e5b4cu;
    // NOP
    // 0x2e5b50: 0x0  nop
    ctx->pc = 0x2e5b50u;
    // NOP
    // 0x2e5b54: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2E5B54u;
    SET_GPR_U32(ctx, 31, 0x2E5B5Cu);
    ctx->pc = 0x2E5B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5B54u;
    // 0x2e5b58: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2E5B54u, 0x2E5B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5B5Cu;
label_2e5b5c:
    // 0x2e5b5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5b60: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x2e5b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2e5b64: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2E5B64u;
    SET_GPR_U32(ctx, 31, 0x2E5B6Cu);
    ctx->pc = 0x2E5B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5B64u;
    // 0x2e5b68: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2E5B64u, 0x2E5B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5B6Cu;
label_2e5b6c:
    // 0x2e5b6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e5b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5b70: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e5b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5b74: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2E5B74u;
    SET_GPR_U32(ctx, 31, 0x2E5B7Cu);
    ctx->pc = 0x2E5B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5B74u;
    // 0x2e5b78: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2E5B74u, 0x2E5B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5B7Cu;
label_2e5b7c:
    // 0x2e5b7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5b80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e5b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5b84: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2E5B84u;
    SET_GPR_U32(ctx, 31, 0x2E5B8Cu);
    ctx->pc = 0x2E5B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5B84u;
    // 0x2e5b88: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2E5B84u, 0x2E5B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5B8Cu;
label_2e5b8c:
    // 0x2e5b8c: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x2e5b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x2e5b90: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2E5B90u;
    {
        const bool branch_taken_0x2e5b90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e5b90) {
            ctx->pc = 0x2E5C00u;
            goto label_2e5c00;
        }
    }
    ctx->pc = 0x2E5B98u;
    // 0x2e5b98: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2e5b98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e5b9c: 0x0  nop
    ctx->pc = 0x2e5b9cu;
    // NOP
    // 0x2e5ba0: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x2e5ba0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5ba4: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x2E5BA4u;
    {
        const bool branch_taken_0x2e5ba4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E5BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5BA4u;
        // 0x2e5ba8: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5ba4) {
            ctx->pc = 0x2E5BD8u;
            goto label_2e5bd8;
        }
    }
    ctx->pc = 0x2E5BACu;
    // 0x2e5bac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e5bacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5bb0: 0x0  nop
    ctx->pc = 0x2e5bb0u;
    // NOP
    // 0x2e5bb4: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2e5bb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5bb8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2E5BB8u;
    {
        const bool branch_taken_0x2e5bb8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5bb8) {
            ctx->pc = 0x2E5BD8u;
            goto label_2e5bd8;
        }
    }
    ctx->pc = 0x2E5BC0u;
    // 0x2e5bc0: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x2e5bc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5bc4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2E5BC4u;
    {
        const bool branch_taken_0x2e5bc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5bc4) {
            ctx->pc = 0x2E5BD8u;
            goto label_2e5bd8;
        }
    }
    ctx->pc = 0x2E5BCCu;
    // 0x2e5bcc: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x2e5bccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5bd0: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x2E5BD0u;
    {
        const bool branch_taken_0x2e5bd0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5bd0) {
            ctx->pc = 0x2E5C00u;
            goto label_2e5c00;
        }
    }
    ctx->pc = 0x2E5BD8u;
label_2e5bd8:
    // 0x2e5bd8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2e5bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5bdc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2e5bdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5be0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2e5be0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5be4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2e5be4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2e5be8: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2e5be8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5bec: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2e5becu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2e5bf0: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x2e5bf0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5bf4: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x2e5bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2e5bf8: 0xc0b9580  jal         func_2E5600
    ctx->pc = 0x2E5BF8u;
    SET_GPR_U32(ctx, 31, 0x2E5C00u);
    ctx->pc = 0x2E5BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5BF8u;
    // 0x2e5bfc: 0x27a800d0  addiu       $t0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5600u, 0x2E5BF8u, 0x2E5C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5C00u;
label_2e5c00:
    // 0x2e5c00: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x2e5c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e5c04: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x2e5c04u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e5c08: 0xc7b80020  lwc1        $f24, 0x20($sp)
    ctx->pc = 0x2e5c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2e5c0c: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x2e5c0cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e5c10: 0xc7b7001c  lwc1        $f23, 0x1C($sp)
    ctx->pc = 0x2e5c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2e5c14: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x2e5c14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e5c18: 0xc7b60018  lwc1        $f22, 0x18($sp)
    ctx->pc = 0x2e5c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2e5c1c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x2e5c1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e5c20: 0xc7b50014  lwc1        $f21, 0x14($sp)
    ctx->pc = 0x2e5c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e5c24: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2e5c24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e5c28: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x2e5c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e5c2c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2e5c2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e5c30: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2e5c30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e5c34: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2e5c34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e5c38: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E5C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5C38u;
        // 0x2e5c3c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5C38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E5C40u;
}
