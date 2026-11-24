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

// Function: sub_001A78E0
// Address: 0x1a78e0 - 0x1a8b08
void sub_001A78E0_0x1a78e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A78E0_0x1a78e0");
#endif

    switch (ctx->pc) {
        case 0x1a792cu: goto label_1a792c;
        case 0x1a7934u: goto label_1a7934;
        case 0x1a7960u: goto label_1a7960;
        case 0x1a7970u: goto label_1a7970;
        case 0x1a7984u: goto label_1a7984;
        case 0x1a7990u: goto label_1a7990;
        case 0x1a79b4u: goto label_1a79b4;
        case 0x1a79f4u: goto label_1a79f4;
        case 0x1a7a08u: goto label_1a7a08;
        case 0x1a7a28u: goto label_1a7a28;
        case 0x1a7a38u: goto label_1a7a38;
        case 0x1a7a48u: goto label_1a7a48;
        case 0x1a7a78u: goto label_1a7a78;
        case 0x1a7a8cu: goto label_1a7a8c;
        case 0x1a7ab0u: goto label_1a7ab0;
        case 0x1a7ac4u: goto label_1a7ac4;
        case 0x1a7adcu: goto label_1a7adc;
        case 0x1a7afcu: goto label_1a7afc;
        case 0x1a7b18u: goto label_1a7b18;
        case 0x1a7b28u: goto label_1a7b28;
        case 0x1a7b34u: goto label_1a7b34;
        case 0x1a7b58u: goto label_1a7b58;
        case 0x1a7b98u: goto label_1a7b98;
        case 0x1a7bacu: goto label_1a7bac;
        case 0x1a7bccu: goto label_1a7bcc;
        case 0x1a7be8u: goto label_1a7be8;
        case 0x1a7bf8u: goto label_1a7bf8;
        case 0x1a7c08u: goto label_1a7c08;
        case 0x1a7c38u: goto label_1a7c38;
        case 0x1a7c4cu: goto label_1a7c4c;
        case 0x1a7c70u: goto label_1a7c70;
        case 0x1a7c84u: goto label_1a7c84;
        case 0x1a7c9cu: goto label_1a7c9c;
        case 0x1a7cbcu: goto label_1a7cbc;
        case 0x1a7cd0u: goto label_1a7cd0;
        case 0x1a7ce0u: goto label_1a7ce0;
        case 0x1a7cecu: goto label_1a7cec;
        case 0x1a7d00u: goto label_1a7d00;
        case 0x1a7d24u: goto label_1a7d24;
        case 0x1a7d64u: goto label_1a7d64;
        case 0x1a7d78u: goto label_1a7d78;
        case 0x1a7db0u: goto label_1a7db0;
        case 0x1a7dccu: goto label_1a7dcc;
        case 0x1a7ddcu: goto label_1a7ddc;
        case 0x1a7decu: goto label_1a7dec;
        case 0x1a7df8u: goto label_1a7df8;
        case 0x1a7e28u: goto label_1a7e28;
        case 0x1a7e3cu: goto label_1a7e3c;
        case 0x1a7e60u: goto label_1a7e60;
        case 0x1a7e74u: goto label_1a7e74;
        case 0x1a7e8cu: goto label_1a7e8c;
        case 0x1a7eacu: goto label_1a7eac;
        case 0x1a7ef8u: goto label_1a7ef8;
        case 0x1a7f3cu: goto label_1a7f3c;
        case 0x1a7f70u: goto label_1a7f70;
        case 0x1a7f80u: goto label_1a7f80;
        case 0x1a7f90u: goto label_1a7f90;
        case 0x1a8000u: goto label_1a8000;
        case 0x1a8028u: goto label_1a8028;
        case 0x1a804cu: goto label_1a804c;
        case 0x1a805cu: goto label_1a805c;
        case 0x1a8230u: goto label_1a8230;
        case 0x1a8240u: goto label_1a8240;
        case 0x1a828cu: goto label_1a828c;
        case 0x1a8310u: goto label_1a8310;
        case 0x1a8320u: goto label_1a8320;
        case 0x1a8374u: goto label_1a8374;
        case 0x1a8390u: goto label_1a8390;
        case 0x1a839cu: goto label_1a839c;
        case 0x1a83ccu: goto label_1a83cc;
        case 0x1a840cu: goto label_1a840c;
        case 0x1a8428u: goto label_1a8428;
        case 0x1a8444u: goto label_1a8444;
        case 0x1a8454u: goto label_1a8454;
        case 0x1a8468u: goto label_1a8468;
        case 0x1a8494u: goto label_1a8494;
        case 0x1a84a8u: goto label_1a84a8;
        case 0x1a84ccu: goto label_1a84cc;
        case 0x1a84dcu: goto label_1a84dc;
        case 0x1a84ecu: goto label_1a84ec;
        case 0x1a850cu: goto label_1a850c;
        case 0x1a8548u: goto label_1a8548;
        case 0x1a85b0u: goto label_1a85b0;
        case 0x1a85c0u: goto label_1a85c0;
        case 0x1a8648u: goto label_1a8648;
        case 0x1a8674u: goto label_1a8674;
        case 0x1a8688u: goto label_1a8688;
        case 0x1a8698u: goto label_1a8698;
        case 0x1a86a8u: goto label_1a86a8;
        case 0x1a86b8u: goto label_1a86b8;
        case 0x1a86dcu: goto label_1a86dc;
        case 0x1a8740u: goto label_1a8740;
        case 0x1a874cu: goto label_1a874c;
        case 0x1a877cu: goto label_1a877c;
        case 0x1a87bcu: goto label_1a87bc;
        case 0x1a87ccu: goto label_1a87cc;
        case 0x1a87e8u: goto label_1a87e8;
        case 0x1a8800u: goto label_1a8800;
        case 0x1a882cu: goto label_1a882c;
        case 0x1a8840u: goto label_1a8840;
        case 0x1a8864u: goto label_1a8864;
        case 0x1a8874u: goto label_1a8874;
        case 0x1a8884u: goto label_1a8884;
        case 0x1a88d8u: goto label_1a88d8;
        case 0x1a88ecu: goto label_1a88ec;
        case 0x1a88f8u: goto label_1a88f8;
        case 0x1a8920u: goto label_1a8920;
        case 0x1a8960u: goto label_1a8960;
        case 0x1a8968u: goto label_1a8968;
        case 0x1a8994u: goto label_1a8994;
        case 0x1a89bcu: goto label_1a89bc;
        case 0x1a89ccu: goto label_1a89cc;
        case 0x1a8a10u: goto label_1a8a10;
        case 0x1a8a58u: goto label_1a8a58;
        case 0x1a8a68u: goto label_1a8a68;
        case 0x1a8a8cu: goto label_1a8a8c;
        case 0x1a8a9cu: goto label_1a8a9c;
        case 0x1a8ab4u: goto label_1a8ab4;
        default: break;
    }

    ctx->pc = 0x1a78e0u;

    // 0x1a78e0: 0x27bdfa30  addiu       $sp, $sp, -0x5D0
    ctx->pc = 0x1a78e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965808));
    // 0x1a78e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a78e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a78e8: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1a78e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1a78ec: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x1a78ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1a78f0: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x1a78f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x1a78f4: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1a78f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x1a78f8: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1a78f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x1a78fc: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1a78fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x1a7900: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1a7900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1a7904: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1a7904u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7908: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1a7908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1a790c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1a790cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1a7910: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1a7910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1a7914: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a7914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1a7918: 0xe7b50014  swc1        $f21, 0x14($sp)
    ctx->pc = 0x1a7918u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1a791c: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x1a791cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1a7920: 0xafa501cc  sw          $a1, 0x1CC($sp)
    ctx->pc = 0x1a7920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 5));
    // 0x1a7924: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1A7924u;
    SET_GPR_U32(ctx, 31, 0x1A792Cu);
    ctx->pc = 0x1A7928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7924u;
    // 0x1a7928: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1A7924u, 0x1A792Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A792Cu;
label_1a792c:
    // 0x1a792c: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1A792Cu;
    SET_GPR_U32(ctx, 31, 0x1A7934u);
    ctx->pc = 0x1A7930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A792Cu;
    // 0x1a7930: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1A792Cu, 0x1A7934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7934u;
label_1a7934:
    // 0x1a7934: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1a7934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1a7938: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a7938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a793c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a793cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7940: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1a7940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a7944: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x1a7944u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1a7948: 0x24080070  addiu       $t0, $zero, 0x70
    ctx->pc = 0x1a7948u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1a794c: 0x24090200  addiu       $t1, $zero, 0x200
    ctx->pc = 0x1a794cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1a7950: 0x240a00e0  addiu       $t2, $zero, 0xE0
    ctx->pc = 0x1a7950u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1a7954: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1a7954u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a7958: 0xc06afc4  jal         func_1ABF10
    ctx->pc = 0x1A7958u;
    SET_GPR_U32(ctx, 31, 0x1A7960u);
    ctx->pc = 0x1A795Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7958u;
    // 0x1a795c: 0xffa00008  sd          $zero, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABF10u, 0x1A7958u, 0x1A7960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7960u;
label_1a7960:
    // 0x1a7960: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a7960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7964: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1a7964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1a7968: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A7968u;
    SET_GPR_U32(ctx, 31, 0x1A7970u);
    ctx->pc = 0x1A796Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7968u;
    // 0x1a796c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A7968u, 0x1A7970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7970u;
label_1a7970:
    // 0x1a7970: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1a7970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a7974: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a7974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7978: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x1a7978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1a797c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A797Cu;
    SET_GPR_U32(ctx, 31, 0x1A7984u);
    ctx->pc = 0x1A7980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A797Cu;
    // 0x1a7980: 0x2303c  dsll32      $a2, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A797Cu, 0x1A7984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7984u;
label_1a7984:
    // 0x1a7984: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a7984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7988: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1A7988u;
    SET_GPR_U32(ctx, 31, 0x1A7990u);
    ctx->pc = 0x1A798Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7988u;
    // 0x1a798c: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1A7988u, 0x1A7990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7990u;
label_1a7990:
    // 0x1a7990: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a7990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a7994: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a7994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7998: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a7998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a799c: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1a799cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1a79a0: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x1a79a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x1a79a4: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1a79a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1a79a8: 0x628025  or          $s0, $v1, $v0
    ctx->pc = 0x1a79a8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a79ac: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1A79ACu;
    SET_GPR_U32(ctx, 31, 0x1A79B4u);
    ctx->pc = 0x1A79B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A79ACu;
    // 0x1a79b0: 0x240500e0  addiu       $a1, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1A79ACu, 0x1A79B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A79B4u;
label_1a79b4:
    // 0x1a79b4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a79b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a79b8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1a79b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a79bc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a79bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a79c0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1a79c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1a79c4: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1a79c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1a79c8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a79c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a79cc: 0x2032025  or          $a0, $s0, $v1
    ctx->pc = 0x1a79ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1a79d0: 0x9ea378d0  lwu         $v1, 0x78D0($s5)
    ctx->pc = 0x1a79d0u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 30928)));
    // 0x1a79d4: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1a79d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1a79d8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1a79d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1a79dc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a79dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a79e0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a79e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a79e4: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1a79e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1a79e8: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1a79e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1a79ec: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A79ECu;
    SET_GPR_U32(ctx, 31, 0x1A79F4u);
    ctx->pc = 0x1A79F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A79ECu;
    // 0x1a79f0: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A79ECu, 0x1A79F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A79F4u;
label_1a79f4:
    // 0x1a79f4: 0x3c020204  lui         $v0, 0x204
    ctx->pc = 0x1a79f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)516 << 16));
    // 0x1a79f8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a79f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a79fc: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1a79fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1a7a00: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A7A00u;
    SET_GPR_U32(ctx, 31, 0x1A7A08u);
    ctx->pc = 0x1A7A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7A00u;
    // 0x1a7a04: 0x34460090  ori         $a2, $v0, 0x90 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)144);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A7A00u, 0x1A7A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7A08u;
label_1a7a08:
    // 0x1a7a08: 0x240306fc  addiu       $v1, $zero, 0x6FC
    ctx->pc = 0x1a7a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1788));
    // 0x1a7a0c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1a7a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1a7a10: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a7a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a7a14: 0x3442c005  ori         $v0, $v0, 0xC005
    ctx->pc = 0x1a7a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49157);
    // 0x1a7a18: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a7a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7a1c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1a7a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1a7a20: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A7A20u;
    SET_GPR_U32(ctx, 31, 0x1A7A28u);
    ctx->pc = 0x1A7A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7A20u;
    // 0x1a7a24: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A7A20u, 0x1A7A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7A28u;
label_1a7a28:
    // 0x1a7a28: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a7a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7a2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a7a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7a30: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A7A30u;
    SET_GPR_U32(ctx, 31, 0x1A7A38u);
    ctx->pc = 0x1A7A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7A30u;
    // 0x1a7a34: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A7A30u, 0x1A7A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7A38u;
label_1a7a38:
    // 0x1a7a38: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a7a38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7a3c: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x1a7a3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1a7a40: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a7a40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7a44: 0x0  nop
    ctx->pc = 0x1a7a44u;
    // NOP
label_1a7a48:
    // 0x1a7a48: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x1a7a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1a7a4c: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x1a7a4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1a7a50: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a7a50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a7a54: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1a7a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x1a7a58: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1a7a58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1a7a5c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1a7a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1a7a60: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a7a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a7a64: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1a7a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1a7a68: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1a7a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1a7a6c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a7a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7a70: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A7A70u;
    SET_GPR_U32(ctx, 31, 0x1A7A78u);
    ctx->pc = 0x1A7A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7A70u;
    // 0x1a7a74: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A7A70u, 0x1A7A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7A78u;
label_1a7a78:
    // 0x1a7a78: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1a7a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1a7a7c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a7a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7a80: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a7a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a7a84: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A7A84u;
    SET_GPR_U32(ctx, 31, 0x1A7A8Cu);
    ctx->pc = 0x1A7A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7A84u;
    // 0x1a7a88: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A7A84u, 0x1A7A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7A8Cu;
label_1a7a8c:
    // 0x1a7a8c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1a7a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a7a90: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1a7a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1a7a94: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a7a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a7a98: 0x34427080  ori         $v0, $v0, 0x7080
    ctx->pc = 0x1a7a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28800);
    // 0x1a7a9c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a7a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a7aa0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a7aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7aa4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1a7aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1a7aa8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A7AA8u;
    SET_GPR_U32(ctx, 31, 0x1A7AB0u);
    ctx->pc = 0x1A7AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7AA8u;
    // 0x1a7aac: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A7AA8u, 0x1A7AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7AB0u;
label_1a7ab0:
    // 0x1a7ab0: 0x3c021c09  lui         $v0, 0x1C09
    ctx->pc = 0x1a7ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7177 << 16));
    // 0x1a7ab4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a7ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7ab8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a7ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a7abc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A7ABCu;
    SET_GPR_U32(ctx, 31, 0x1A7AC4u);
    ctx->pc = 0x1A7AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7ABCu;
    // 0x1a7ac0: 0x34461009  ori         $a2, $v0, 0x1009 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A7ABCu, 0x1A7AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7AC4u;
label_1a7ac4:
    // 0x1a7ac4: 0x3c029500  lui         $v0, 0x9500
    ctx->pc = 0x1a7ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38144 << 16));
    // 0x1a7ac8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a7ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7acc: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x1a7accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x1a7ad0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1a7ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a7ad4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A7AD4u;
    SET_GPR_U32(ctx, 31, 0x1A7ADCu);
    ctx->pc = 0x1A7AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7AD4u;
    // 0x1a7ad8: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A7AD4u, 0x1A7ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7ADCu;
label_1a7adc:
    // 0x1a7adc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1a7adcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1a7ae0: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x1a7ae0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1a7ae4: 0x2e420008  sltiu       $v0, $s2, 0x8
    ctx->pc = 0x1a7ae4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1a7ae8: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1A7AE8u;
    {
        const bool branch_taken_0x1a7ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7AE8u;
        // 0x1a7aec: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7ae8) {
            ctx->pc = 0x1A7A48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a7a48;
        }
    }
    ctx->pc = 0x1A7AF0u;
    // 0x1a7af0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a7af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7af4: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1A7AF4u;
    SET_GPR_U32(ctx, 31, 0x1A7AFCu);
    ctx->pc = 0x1A7AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7AF4u;
    // 0x1a7af8: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1A7AF4u, 0x1A7AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7AFCu;
label_1a7afc:
    // 0x1a7afc: 0x8fa201cc  lw          $v0, 0x1CC($sp)
    ctx->pc = 0x1a7afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
    // 0x1a7b00: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a7b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7b04: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x1a7b04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x1a7b08: 0x8c480034  lw          $t0, 0x34($v0)
    ctx->pc = 0x1a7b08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1a7b0c: 0x24460014  addiu       $a2, $v0, 0x14
    ctx->pc = 0x1a7b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1a7b10: 0xc0706f0  jal         func_1C1BC0
    ctx->pc = 0x1A7B10u;
    SET_GPR_U32(ctx, 31, 0x1A7B18u);
    ctx->pc = 0x1A7B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7B10u;
    // 0x1a7b14: 0x24470024  addiu       $a3, $v0, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1BC0u, 0x1A7B10u, 0x1A7B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7B18u;
label_1a7b18:
    // 0x1a7b18: 0x8ea578d0  lw          $a1, 0x78D0($s5)
    ctx->pc = 0x1a7b18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30928)));
    // 0x1a7b1c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a7b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7b20: 0xc070468  jal         func_1C11A0
    ctx->pc = 0x1A7B20u;
    SET_GPR_U32(ctx, 31, 0x1A7B28u);
    ctx->pc = 0x1A7B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7B20u;
    // 0x1a7b24: 0x3c067000  lui         $a2, 0x7000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C11A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C11A0u, 0x1A7B20u, 0x1A7B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7B28u;
label_1a7b28:
    // 0x1a7b28: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a7b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7b2c: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1A7B2Cu;
    SET_GPR_U32(ctx, 31, 0x1A7B34u);
    ctx->pc = 0x1A7B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7B2Cu;
    // 0x1a7b30: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1A7B2Cu, 0x1A7B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7B34u;
label_1a7b34:
    // 0x1a7b34: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a7b34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a7b38: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a7b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7b3c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a7b3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a7b40: 0x3c0201b1  lui         $v0, 0x1B1
    ctx->pc = 0x1a7b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)433 << 16));
    // 0x1a7b44: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x1a7b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x1a7b48: 0x34421200  ori         $v0, $v0, 0x1200
    ctx->pc = 0x1a7b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4608);
    // 0x1a7b4c: 0x628025  or          $s0, $v1, $v0
    ctx->pc = 0x1a7b4cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a7b50: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1A7B50u;
    SET_GPR_U32(ctx, 31, 0x1A7B58u);
    ctx->pc = 0x1A7B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7B50u;
    // 0x1a7b54: 0x24050070  addiu       $a1, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1A7B50u, 0x1A7B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7B58u;
label_1a7b58:
    // 0x1a7b58: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a7b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a7b5c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1a7b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a7b60: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a7b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a7b64: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1a7b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1a7b68: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1a7b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1a7b6c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a7b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a7b70: 0x2032025  or          $a0, $s0, $v1
    ctx->pc = 0x1a7b70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1a7b74: 0x9ea378d0  lwu         $v1, 0x78D0($s5)
    ctx->pc = 0x1a7b74u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 30928)));
    // 0x1a7b78: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1a7b78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1a7b7c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1a7b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1a7b80: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a7b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7b84: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a7b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a7b88: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1a7b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1a7b8c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1a7b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1a7b90: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A7B90u;
    SET_GPR_U32(ctx, 31, 0x1A7B98u);
    ctx->pc = 0x1A7B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7B90u;
    // 0x1a7b94: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A7B90u, 0x1A7B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7B98u;
label_1a7b98:
    // 0x1a7b98: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1a7b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1a7b9c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a7b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7ba0: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1a7ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1a7ba4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A7BA4u;
    SET_GPR_U32(ctx, 31, 0x1A7BACu);
    ctx->pc = 0x1A7BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7BA4u;
    // 0x1a7ba8: 0x34460080  ori         $a2, $v0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A7BA4u, 0x1A7BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7BACu;
label_1a7bac:
    // 0x1a7bac: 0x240301bc  addiu       $v1, $zero, 0x1BC
    ctx->pc = 0x1a7bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 444));
    // 0x1a7bb0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1a7bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1a7bb4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a7bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a7bb8: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x1a7bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x1a7bbc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a7bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7bc0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1a7bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1a7bc4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A7BC4u;
    SET_GPR_U32(ctx, 31, 0x1A7BCCu);
    ctx->pc = 0x1A7BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7BC4u;
    // 0x1a7bc8: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A7BC4u, 0x1A7BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7BCCu;
label_1a7bcc:
    // 0x1a7bcc: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1a7bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a7bd0: 0x24020089  addiu       $v0, $zero, 0x89
    ctx->pc = 0x1a7bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    // 0x1a7bd4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a7bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a7bd8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a7bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7bdc: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1a7bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1a7be0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A7BE0u;
    SET_GPR_U32(ctx, 31, 0x1A7BE8u);
    ctx->pc = 0x1A7BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7BE0u;
    // 0x1a7be4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A7BE0u, 0x1A7BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7BE8u;
label_1a7be8:
    // 0x1a7be8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a7be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7bec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a7becu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7bf0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A7BF0u;
    SET_GPR_U32(ctx, 31, 0x1A7BF8u);
    ctx->pc = 0x1A7BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7BF0u;
    // 0x1a7bf4: 0x24060356  addiu       $a2, $zero, 0x356 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A7BF0u, 0x1A7BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7BF8u;
label_1a7bf8:
    // 0x1a7bf8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a7bf8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7bfc: 0x2411003f  addiu       $s1, $zero, 0x3F
    ctx->pc = 0x1a7bfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1a7c00: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a7c00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7c04: 0x0  nop
    ctx->pc = 0x1a7c04u;
    // NOP
label_1a7c08:
    // 0x1a7c08: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x1a7c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1a7c0c: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x1a7c0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1a7c10: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a7c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a7c14: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1a7c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1a7c18: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1a7c18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1a7c1c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1a7c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1a7c20: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a7c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a7c24: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1a7c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1a7c28: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1a7c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1a7c2c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a7c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7c30: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A7C30u;
    SET_GPR_U32(ctx, 31, 0x1A7C38u);
    ctx->pc = 0x1A7C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7C30u;
    // 0x1a7c34: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A7C30u, 0x1A7C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7C38u;
label_1a7c38:
    // 0x1a7c38: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1a7c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1a7c3c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a7c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7c40: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a7c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a7c44: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A7C44u;
    SET_GPR_U32(ctx, 31, 0x1A7C4Cu);
    ctx->pc = 0x1A7C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7C44u;
    // 0x1a7c48: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A7C44u, 0x1A7C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7C4Cu;
label_1a7c4c:
    // 0x1a7c4c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1a7c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a7c50: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1a7c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1a7c54: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a7c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a7c58: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1a7c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1a7c5c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a7c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a7c60: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a7c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7c64: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1a7c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1a7c68: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A7C68u;
    SET_GPR_U32(ctx, 31, 0x1A7C70u);
    ctx->pc = 0x1A7C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7C68u;
    // 0x1a7c6c: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A7C68u, 0x1A7C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7C70u;
label_1a7c70:
    // 0x1a7c70: 0x3c020709  lui         $v0, 0x709
    ctx->pc = 0x1a7c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1801 << 16));
    // 0x1a7c74: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a7c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7c78: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a7c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a7c7c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A7C7Cu;
    SET_GPR_U32(ctx, 31, 0x1A7C84u);
    ctx->pc = 0x1A7C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7C7Cu;
    // 0x1a7c80: 0x34461009  ori         $a2, $v0, 0x1009 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A7C7Cu, 0x1A7C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7C84u;
label_1a7c84:
    // 0x1a7c84: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1a7c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1a7c88: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a7c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7c8c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1a7c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1a7c90: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1a7c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a7c94: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A7C94u;
    SET_GPR_U32(ctx, 31, 0x1A7C9Cu);
    ctx->pc = 0x1A7C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7C94u;
    // 0x1a7c98: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A7C94u, 0x1A7C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7C9Cu;
label_1a7c9c:
    // 0x1a7c9c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1a7c9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1a7ca0: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x1a7ca0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1a7ca4: 0x2e420004  sltiu       $v0, $s2, 0x4
    ctx->pc = 0x1a7ca4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1a7ca8: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1A7CA8u;
    {
        const bool branch_taken_0x1a7ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7CA8u;
        // 0x1a7cac: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7ca8) {
            ctx->pc = 0x1A7C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a7c08;
        }
    }
    ctx->pc = 0x1A7CB0u;
    // 0x1a7cb0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a7cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7cb4: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1A7CB4u;
    SET_GPR_U32(ctx, 31, 0x1A7CBCu);
    ctx->pc = 0x1A7CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7CB4u;
    // 0x1a7cb8: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1A7CB4u, 0x1A7CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7CBCu;
label_1a7cbc:
    // 0x1a7cbc: 0x8fa201cc  lw          $v0, 0x1CC($sp)
    ctx->pc = 0x1a7cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
    // 0x1a7cc0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a7cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7cc4: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x1a7cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1a7cc8: 0xc070614  jal         func_1C1850
    ctx->pc = 0x1A7CC8u;
    SET_GPR_U32(ctx, 31, 0x1A7CD0u);
    ctx->pc = 0x1A7CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7CC8u;
    // 0x1a7ccc: 0x24460058  addiu       $a2, $v0, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1850u, 0x1A7CC8u, 0x1A7CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7CD0u;
label_1a7cd0:
    // 0x1a7cd0: 0x8ea578d0  lw          $a1, 0x78D0($s5)
    ctx->pc = 0x1a7cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30928)));
    // 0x1a7cd4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a7cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7cd8: 0xc070468  jal         func_1C11A0
    ctx->pc = 0x1A7CD8u;
    SET_GPR_U32(ctx, 31, 0x1A7CE0u);
    ctx->pc = 0x1A7CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7CD8u;
    // 0x1a7cdc: 0x27a601d0  addiu       $a2, $sp, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C11A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C11A0u, 0x1A7CD8u, 0x1A7CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7CE0u;
label_1a7ce0:
    // 0x1a7ce0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a7ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7ce4: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1A7CE4u;
    SET_GPR_U32(ctx, 31, 0x1A7CECu);
    ctx->pc = 0x1A7CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7CE4u;
    // 0x1a7ce8: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1A7CE4u, 0x1A7CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7CECu;
label_1a7cec:
    // 0x1a7cec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a7cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a7cf0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a7cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7cf4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1a7cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1a7cf8: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1A7CF8u;
    SET_GPR_U32(ctx, 31, 0x1A7D00u);
    ctx->pc = 0x1A7CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7CF8u;
    // 0x1a7cfc: 0x286b8  dsll        $s0, $v0, 26 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << 26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1A7CF8u, 0x1A7D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7D00u;
label_1a7d00:
    // 0x1a7d00: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1a7d00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1a7d04: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a7d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7d08: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a7d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a7d0c: 0x3c0201b2  lui         $v0, 0x1B2
    ctx->pc = 0x1a7d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)434 << 16));
    // 0x1a7d10: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a7d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a7d14: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x1a7d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1a7d18: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1a7d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a7d1c: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1A7D1Cu;
    SET_GPR_U32(ctx, 31, 0x1A7D24u);
    ctx->pc = 0x1A7D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7D1Cu;
    // 0x1a7d20: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1A7D1Cu, 0x1A7D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7D24u;
label_1a7d24:
    // 0x1a7d24: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a7d24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a7d28: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1a7d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a7d2c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a7d2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a7d30: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1a7d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1a7d34: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1a7d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1a7d38: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a7d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a7d3c: 0x702025  or          $a0, $v1, $s0
    ctx->pc = 0x1a7d3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x1a7d40: 0x9ea378d0  lwu         $v1, 0x78D0($s5)
    ctx->pc = 0x1a7d40u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 30928)));
    // 0x1a7d44: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1a7d44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1a7d48: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1a7d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1a7d4c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a7d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7d50: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a7d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a7d54: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1a7d54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1a7d58: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1a7d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1a7d5c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A7D5Cu;
    SET_GPR_U32(ctx, 31, 0x1A7D64u);
    ctx->pc = 0x1A7D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7D5Cu;
    // 0x1a7d60: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A7D5Cu, 0x1A7D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7D64u;
label_1a7d64:
    // 0x1a7d64: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1a7d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1a7d68: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a7d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7d6c: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1a7d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1a7d70: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A7D70u;
    SET_GPR_U32(ctx, 31, 0x1A7D78u);
    ctx->pc = 0x1A7D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7D70u;
    // 0x1a7d74: 0x34460080  ori         $a2, $v0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A7D70u, 0x1A7D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7D78u;
label_1a7d78:
    // 0x1a7d78: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x1a7d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x1a7d7c: 0x9ea678c0  lwu         $a2, 0x78C0($s5)
    ctx->pc = 0x1a7d7cu;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 30912)));
    // 0x1a7d80: 0x3443c00a  ori         $v1, $v0, 0xC00A
    ctx->pc = 0x1a7d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x1a7d84: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a7d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7d88: 0x8ea278c4  lw          $v0, 0x78C4($s5)
    ctx->pc = 0x1a7d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30916)));
    // 0x1a7d8c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1a7d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1a7d90: 0x63638  dsll        $a2, $a2, 24
    ctx->pc = 0x1a7d90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 24);
    // 0x1a7d94: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1a7d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1a7d98: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a7d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a7d9c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a7d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a7da0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1a7da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1a7da4: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1a7da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x1a7da8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A7DA8u;
    SET_GPR_U32(ctx, 31, 0x1A7DB0u);
    ctx->pc = 0x1A7DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7DA8u;
    // 0x1a7dac: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A7DA8u, 0x1A7DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7DB0u;
label_1a7db0:
    // 0x1a7db0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1a7db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a7db4: 0x24020089  addiu       $v0, $zero, 0x89
    ctx->pc = 0x1a7db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    // 0x1a7db8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a7db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a7dbc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a7dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7dc0: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1a7dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1a7dc4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A7DC4u;
    SET_GPR_U32(ctx, 31, 0x1A7DCCu);
    ctx->pc = 0x1A7DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7DC4u;
    // 0x1a7dc8: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A7DC4u, 0x1A7DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7DCCu;
label_1a7dcc:
    // 0x1a7dcc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a7dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7dd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a7dd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7dd4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A7DD4u;
    SET_GPR_U32(ctx, 31, 0x1A7DDCu);
    ctx->pc = 0x1A7DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7DD4u;
    // 0x1a7dd8: 0x24060356  addiu       $a2, $zero, 0x356 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A7DD4u, 0x1A7DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7DDCu;
label_1a7ddc:
    // 0x1a7ddc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a7ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7de0: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1a7de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1a7de4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A7DE4u;
    SET_GPR_U32(ctx, 31, 0x1A7DECu);
    ctx->pc = 0x1A7DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7DE4u;
    // 0x1a7de8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A7DE4u, 0x1A7DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7DECu;
label_1a7dec:
    // 0x1a7dec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a7decu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7df0: 0x2411003f  addiu       $s1, $zero, 0x3F
    ctx->pc = 0x1a7df0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1a7df4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a7df4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a7df8:
    // 0x1a7df8: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x1a7df8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1a7dfc: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x1a7dfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1a7e00: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a7e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a7e04: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1a7e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1a7e08: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1a7e08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1a7e0c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1a7e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1a7e10: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a7e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a7e14: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1a7e14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1a7e18: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1a7e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1a7e1c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a7e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7e20: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A7E20u;
    SET_GPR_U32(ctx, 31, 0x1A7E28u);
    ctx->pc = 0x1A7E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7E20u;
    // 0x1a7e24: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A7E20u, 0x1A7E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7E28u;
label_1a7e28:
    // 0x1a7e28: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1a7e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1a7e2c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a7e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7e30: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a7e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a7e34: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A7E34u;
    SET_GPR_U32(ctx, 31, 0x1A7E3Cu);
    ctx->pc = 0x1A7E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7E34u;
    // 0x1a7e38: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A7E34u, 0x1A7E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7E3Cu;
label_1a7e3c:
    // 0x1a7e3c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1a7e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a7e40: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1a7e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1a7e44: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a7e44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a7e48: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1a7e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1a7e4c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a7e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a7e50: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a7e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7e54: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1a7e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1a7e58: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A7E58u;
    SET_GPR_U32(ctx, 31, 0x1A7E60u);
    ctx->pc = 0x1A7E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7E58u;
    // 0x1a7e5c: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A7E58u, 0x1A7E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7E60u;
label_1a7e60:
    // 0x1a7e60: 0x3c020e09  lui         $v0, 0xE09
    ctx->pc = 0x1a7e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3593 << 16));
    // 0x1a7e64: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a7e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7e68: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a7e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a7e6c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A7E6Cu;
    SET_GPR_U32(ctx, 31, 0x1A7E74u);
    ctx->pc = 0x1A7E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7E6Cu;
    // 0x1a7e70: 0x34462009  ori         $a2, $v0, 0x2009 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8201);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A7E6Cu, 0x1A7E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7E74u;
label_1a7e74:
    // 0x1a7e74: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1a7e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1a7e78: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a7e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7e7c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1a7e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1a7e80: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1a7e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a7e84: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A7E84u;
    SET_GPR_U32(ctx, 31, 0x1A7E8Cu);
    ctx->pc = 0x1A7E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7E84u;
    // 0x1a7e88: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A7E84u, 0x1A7E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7E8Cu;
label_1a7e8c:
    // 0x1a7e8c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1a7e8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1a7e90: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x1a7e90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1a7e94: 0x2e420004  sltiu       $v0, $s2, 0x4
    ctx->pc = 0x1a7e94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1a7e98: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1A7E98u;
    {
        const bool branch_taken_0x1a7e98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7E98u;
        // 0x1a7e9c: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7e98) {
            ctx->pc = 0x1A7DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a7df8;
        }
    }
    ctx->pc = 0x1A7EA0u;
    // 0x1a7ea0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a7ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7ea4: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1A7EA4u;
    SET_GPR_U32(ctx, 31, 0x1A7EACu);
    ctx->pc = 0x1A7EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7EA4u;
    // 0x1a7ea8: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1A7EA4u, 0x1A7EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7EACu;
label_1a7eac:
    // 0x1a7eac: 0x8fa201cc  lw          $v0, 0x1CC($sp)
    ctx->pc = 0x1a7eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
    // 0x1a7eb0: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x1a7eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1a7eb4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A7EB4u;
    {
        const bool branch_taken_0x1a7eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7eb4) {
            ctx->pc = 0x1A7F00u;
            goto label_1a7f00;
        }
    }
    ctx->pc = 0x1A7EBCu;
    // 0x1a7ebc: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1a7ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1a7ec0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1a7ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a7ec4: 0xafa201b0  sw          $v0, 0x1B0($sp)
    ctx->pc = 0x1a7ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 2));
    // 0x1a7ec8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a7ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7ecc: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x1a7eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x1a7ed0: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x1a7ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1a7ed4: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x1a7ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
    // 0x1a7ed8: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x1a7ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x1a7edc: 0x8fa601b0  lw          $a2, 0x1B0($sp)
    ctx->pc = 0x1a7edcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1a7ee0: 0x24090100  addiu       $t1, $zero, 0x100
    ctx->pc = 0x1a7ee0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1a7ee4: 0x8fa801a0  lw          $t0, 0x1A0($sp)
    ctx->pc = 0x1a7ee4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1a7ee8: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1a7ee8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a7eec: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1a7eecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7ef0: 0xc06afc4  jal         func_1ABF10
    ctx->pc = 0x1A7EF0u;
    SET_GPR_U32(ctx, 31, 0x1A7EF8u);
    ctx->pc = 0x1A7EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7EF0u;
    // 0x1a7ef4: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABF10u, 0x1A7EF0u, 0x1A7EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7EF8u;
label_1a7ef8:
    // 0x1a7ef8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1A7EF8u;
    {
        const bool branch_taken_0x1a7ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7ef8) {
            ctx->pc = 0x1A7F40u;
            goto label_1a7f40;
        }
    }
    ctx->pc = 0x1A7F00u;
label_1a7f00:
    // 0x1a7f00: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1a7f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1a7f04: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x1a7f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x1a7f08: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1a7f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a7f0c: 0xafa201b0  sw          $v0, 0x1B0($sp)
    ctx->pc = 0x1a7f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 2));
    // 0x1a7f10: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a7f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7f14: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x1a7f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1a7f18: 0x8fa601b0  lw          $a2, 0x1B0($sp)
    ctx->pc = 0x1a7f18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1a7f1c: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x1a7f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
    // 0x1a7f20: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x1a7f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x1a7f24: 0x8fa801a0  lw          $t0, 0x1A0($sp)
    ctx->pc = 0x1a7f24u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1a7f28: 0x24090100  addiu       $t1, $zero, 0x100
    ctx->pc = 0x1a7f28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1a7f2c: 0x240a0070  addiu       $t2, $zero, 0x70
    ctx->pc = 0x1a7f2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1a7f30: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1a7f30u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a7f34: 0xc06afc4  jal         func_1ABF10
    ctx->pc = 0x1A7F34u;
    SET_GPR_U32(ctx, 31, 0x1A7F3Cu);
    ctx->pc = 0x1A7F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7F34u;
    // 0x1a7f38: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABF10u, 0x1A7F34u, 0x1A7F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7F3Cu;
label_1a7f3c:
    // 0x1a7f3c: 0x0  nop
    ctx->pc = 0x1a7f3cu;
    // NOP
label_1a7f40:
    // 0x1a7f40: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x1a7f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1a7f44: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a7f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7f48: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1a7f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1a7f4c: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x1a7f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x1a7f50: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x1a7f50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x1a7f54: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x1a7f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1a7f58: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a7f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a7f5c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1a7f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1a7f60: 0xffa200c0  sd          $v0, 0xC0($sp)
    ctx->pc = 0x1a7f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 2));
    // 0x1a7f64: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1a7f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1a7f68: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A7F68u;
    SET_GPR_U32(ctx, 31, 0x1A7F70u);
    ctx->pc = 0x1A7F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7F68u;
    // 0x1a7f6c: 0x34460080  ori         $a2, $v0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A7F68u, 0x1A7F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7F70u;
label_1a7f70:
    // 0x1a7f70: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a7f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7f74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a7f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7f78: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A7F78u;
    SET_GPR_U32(ctx, 31, 0x1A7F80u);
    ctx->pc = 0x1A7F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7F78u;
    // 0x1a7f7c: 0x24060306  addiu       $a2, $zero, 0x306 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 774));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A7F78u, 0x1A7F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7F80u;
label_1a7f80:
    // 0x1a7f80: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a7f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7f84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a7f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a7f88: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A7F88u;
    SET_GPR_U32(ctx, 31, 0x1A7F90u);
    ctx->pc = 0x1A7F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7F88u;
    // 0x1a7f8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A7F88u, 0x1A7F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7F90u;
label_1a7f90:
    // 0x1a7f90: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x1a7f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1a7f94: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x1a7f94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a7f98: 0x10200037  beqz        $at, . + 4 + (0x37 << 2)
    ctx->pc = 0x1A7F98u;
    {
        const bool branch_taken_0x1a7f98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7F98u;
        // 0x1a7f9c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7f98) {
            ctx->pc = 0x1A8078u;
            goto label_1a8078;
        }
    }
    ctx->pc = 0x1A7FA0u;
    // 0x1a7fa0: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1a7fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1a7fa4: 0x2413003f  addiu       $s3, $zero, 0x3F
    ctx->pc = 0x1a7fa4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1a7fa8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a7fa8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7fac: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1a7facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a7fb0: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x1a7fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1a7fb4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a7fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a7fb8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a7fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a7fbc: 0x38c3c  dsll32      $s1, $v1, 16
    ctx->pc = 0x1a7fbcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1a7fc0: 0x24420700  addiu       $v0, $v0, 0x700
    ctx->pc = 0x1a7fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1792));
    // 0x1a7fc4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a7fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a7fc8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1a7fc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a7fcc: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1a7fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1a7fd0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1a7fd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1a7fd4: 0x24430790  addiu       $v1, $v0, 0x790
    ctx->pc = 0x1a7fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1936));
    // 0x1a7fd8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a7fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a7fdc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a7fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a7fe0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a7fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a7fe4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a7fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a7fe8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a7fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a7fec: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1a7fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1a7ff0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1a7ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1a7ff4: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1a7ff4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1a7ff8: 0x628025  or          $s0, $v1, $v0
    ctx->pc = 0x1a7ff8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a7ffc: 0x0  nop
    ctx->pc = 0x1a7ffcu;
    // NOP
label_1a8000:
    // 0x1a8000: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x1a8000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1a8004: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x1a8004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1a8008: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1a8008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1a800c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a800cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a8010: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1a8010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1a8014: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1a8014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a8018: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a801c: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1a801cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1a8020: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A8020u;
    SET_GPR_U32(ctx, 31, 0x1A8028u);
    ctx->pc = 0x1A8024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8020u;
    // 0x1a8024: 0x2223025  or          $a2, $s1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A8020u, 0x1A8028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8028u;
label_1a8028:
    // 0x1a8028: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1a8028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a802c: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1a802cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1a8030: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a8030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a8034: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1a8034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1a8038: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a8038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a803c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a803cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8040: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1a8040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1a8044: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A8044u;
    SET_GPR_U32(ctx, 31, 0x1A804Cu);
    ctx->pc = 0x1A8048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8044u;
    // 0x1a8048: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A8044u, 0x1A804Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A804Cu;
label_1a804c:
    // 0x1a804c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a804cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8050: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1a8050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a8054: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A8054u;
    SET_GPR_U32(ctx, 31, 0x1A805Cu);
    ctx->pc = 0x1A8058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8054u;
    // 0x1a8058: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A8054u, 0x1A805Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A805Cu;
label_1a805c:
    // 0x1a805c: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x1a805cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1a8060: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1a8060u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1a8064: 0x26730040  addiu       $s3, $s3, 0x40
    ctx->pc = 0x1a8064u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x1a8068: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x1a8068u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a806c: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1A806Cu;
    {
        const bool branch_taken_0x1a806c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A806Cu;
        // 0x1a8070: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a806c) {
            ctx->pc = 0x1A8000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8000;
        }
    }
    ctx->pc = 0x1A8074u;
    // 0x1a8074: 0x0  nop
    ctx->pc = 0x1a8074u;
    // NOP
label_1a8078:
    // 0x1a8078: 0x8fa201cc  lw          $v0, 0x1CC($sp)
    ctx->pc = 0x1a8078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
    // 0x1a807c: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x1a807cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1a8080: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A8080u;
    {
        const bool branch_taken_0x1a8080 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1A8084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8080u;
        // 0x1a8084: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8080) {
            ctx->pc = 0x1A8094u;
            goto label_1a8094;
        }
    }
    ctx->pc = 0x1A8088u;
    // 0x1a8088: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a8088u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a808c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A808Cu;
    {
        const bool branch_taken_0x1a808c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A808Cu;
        // 0x1a8090: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a808c) {
            ctx->pc = 0x1A80ACu;
            goto label_1a80ac;
        }
    }
    ctx->pc = 0x1A8094u;
label_1a8094:
    // 0x1a8094: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a8094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a8098: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a8098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a809c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a809cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a80a0: 0x0  nop
    ctx->pc = 0x1a80a0u;
    // NOP
    // 0x1a80a4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1a80a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a80a8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1a80a8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1a80ac:
    // 0x1a80ac: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1a80acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1a80b0: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x1a80b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x1a80b4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a80b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1a80b8: 0x3c0343b4  lui         $v1, 0x43B4
    ctx->pc = 0x1a80b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17332 << 16));
    // 0x1a80bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a80bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a80c0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1a80c0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a80c4: 0x0  nop
    ctx->pc = 0x1a80c4u;
    // NOP
    // 0x1a80c8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1a80c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1a80cc: 0x8fa201cc  lw          $v0, 0x1CC($sp)
    ctx->pc = 0x1a80ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
    // 0x1a80d0: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x1a80d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a80d4: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x1a80d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1a80d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a80d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a80dc: 0x0  nop
    ctx->pc = 0x1a80dcu;
    // NOP
    // 0x1a80e0: 0x46001543  div.s       $f21, $f2, $f0
    ctx->pc = 0x1a80e0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x1a80e4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1a80e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1a80e8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a80e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1a80ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a80ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a80f0: 0x0  nop
    ctx->pc = 0x1a80f0u;
    // NOP
    // 0x1a80f4: 0x0  nop
    ctx->pc = 0x1a80f4u;
    // NOP
    // 0x1a80f8: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A80F8u;
    {
        const bool branch_taken_0x1a80f8 = (GPR_S64(ctx, 5) < 0);
        if (branch_taken_0x1a80f8) {
            ctx->pc = 0x1A810Cu;
            goto label_1a810c;
        }
    }
    ctx->pc = 0x1A8100u;
    // 0x1a8100: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1a8100u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a8104: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A8104u;
    {
        const bool branch_taken_0x1a8104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8104u;
        // 0x1a8108: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8104) {
            ctx->pc = 0x1A8128u;
            goto label_1a8128;
        }
    }
    ctx->pc = 0x1A810Cu;
label_1a810c:
    // 0x1a810c: 0x51842  srl         $v1, $a1, 1
    ctx->pc = 0x1a810cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x1a8110: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x1a8110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1a8114: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a8114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a8118: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a8118u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a811c: 0x0  nop
    ctx->pc = 0x1a811cu;
    // NOP
    // 0x1a8120: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a8120u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a8124: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1a8124u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1a8128:
    // 0x1a8128: 0x0  nop
    ctx->pc = 0x1a8128u;
    // NOP
    // 0x1a812c: 0x0  nop
    ctx->pc = 0x1a812cu;
    // NOP
    // 0x1a8130: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x1a8130u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1a8134: 0x0  nop
    ctx->pc = 0x1a8134u;
    // NOP
    // 0x1a8138: 0x5082b  sltu        $at, $zero, $a1
    ctx->pc = 0x1a8138u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1a813c: 0x102001e2  beqz        $at, . + 4 + (0x1E2 << 2)
    ctx->pc = 0x1A813Cu;
    {
        const bool branch_taken_0x1a813c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A813Cu;
        // 0x1a8140: 0xafa00190  sw          $zero, 0x190($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a813c) {
            ctx->pc = 0x1A88C8u;
            goto label_1a88c8;
        }
    }
    ctx->pc = 0x1A8144u;
    // 0x1a8144: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1a8144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1a8148: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1a8148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a814c: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x1a814cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1a8150: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x1a8150u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a8154: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1a8154u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1a8158: 0x518bc  dsll32      $v1, $a1, 2
    ctx->pc = 0x1a8158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 2));
    // 0x1a815c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a815cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a8160: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a8160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a8164: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1a8164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1a8168: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x1a8168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x1a816c: 0x3444000a  ori         $a0, $v0, 0xA
    ctx->pc = 0x1a816cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x1a8170: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1a8170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1a8174: 0xffa20100  sd          $v0, 0x100($sp)
    ctx->pc = 0x1a8174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 2));
    // 0x1a8178: 0x831025  or          $v0, $a0, $v1
    ctx->pc = 0x1a8178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1a817c: 0xffa20140  sd          $v0, 0x140($sp)
    ctx->pc = 0x1a817cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 2));
    // 0x1a8180: 0xdfa200c0  ld          $v0, 0xC0($sp)
    ctx->pc = 0x1a8180u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1a8184: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x1a8184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x1a8188: 0xffa20120  sd          $v0, 0x120($sp)
    ctx->pc = 0x1a8188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 2));
    // 0x1a818c: 0xdfa200c0  ld          $v0, 0xC0($sp)
    ctx->pc = 0x1a818cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1a8190: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1a8190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1a8194: 0xffa20110  sd          $v0, 0x110($sp)
    ctx->pc = 0x1a8194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 2));
    // 0x1a8198: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x1a8198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1a819c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a819cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a81a0: 0x24430009  addiu       $v1, $v0, 0x9
    ctx->pc = 0x1a81a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x1a81a4: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1a81a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1a81a8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1a81a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a81ac: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1a81acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1a81b0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a81b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a81b4: 0x24420009  addiu       $v0, $v0, 0x9
    ctx->pc = 0x1a81b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x1a81b8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a81b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a81bc: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1a81bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1a81c0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a81c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a81c4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1a81c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1a81c8: 0x839825  or          $s3, $a0, $v1
    ctx->pc = 0x1a81c8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1a81cc: 0x24420790  addiu       $v0, $v0, 0x790
    ctx->pc = 0x1a81ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1936));
    // 0x1a81d0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a81d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a81d4: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x1a81d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x1a81d8: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x1a81d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1a81dc: 0x24420700  addiu       $v0, $v0, 0x700
    ctx->pc = 0x1a81dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1792));
    // 0x1a81e0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a81e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a81e4: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x1a81e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x1a81e8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1a81e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1a81ec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a81ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a81f0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1a81f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1a81f4: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1a81f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1a81f8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1a81f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1a81fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a81fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a8200: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1a8200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1a8204: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1a8204u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a8208: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a8208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a820c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a820cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a8210: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x1a8210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1a8214: 0x29142  srl         $s2, $v0, 5
    ctx->pc = 0x1a8214u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x1a8218: 0x70031389  pcpyld      $v0, $zero, $v1
    ctx->pc = 0x1a8218u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1a821c: 0x82f025  or          $fp, $a0, $v0
    ctx->pc = 0x1a821cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1a8220: 0xdfa20110  ld          $v0, 0x110($sp)
    ctx->pc = 0x1a8220u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1a8224: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1a8224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1a8228: 0xffa200d0  sd          $v0, 0xD0($sp)
    ctx->pc = 0x1a8228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 2));
    // 0x1a822c: 0x0  nop
    ctx->pc = 0x1a822cu;
    // NOP
label_1a8230:
    // 0x1a8230: 0x24100090  addiu       $s0, $zero, 0x90
    ctx->pc = 0x1a8230u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x1a8234: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1a8234u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1a8238: 0xc047a98  jal         func_11EA60
    ctx->pc = 0x1A8238u;
    SET_GPR_U32(ctx, 31, 0x1A8240u);
    ctx->pc = 0x1A823Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8238u;
    // 0x1a823c: 0x241100a0  addiu       $s1, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EA60u, 0x1A8238u, 0x1A8240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8240u;
label_1a8240:
    // 0x1a8240: 0x8fa201cc  lw          $v0, 0x1CC($sp)
    ctx->pc = 0x1a8240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
    // 0x1a8244: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1a8244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1a8248: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A8248u;
    {
        const bool branch_taken_0x1a8248 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1A824Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8248u;
        // 0x1a824c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8248) {
            ctx->pc = 0x1A825Cu;
            goto label_1a825c;
        }
    }
    ctx->pc = 0x1A8250u;
    // 0x1a8250: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a8250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a8254: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A8254u;
    {
        const bool branch_taken_0x1a8254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8254u;
        // 0x1a8258: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8254) {
            ctx->pc = 0x1A8274u;
            goto label_1a8274;
        }
    }
    ctx->pc = 0x1A825Cu;
label_1a825c:
    // 0x1a825c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a825cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a8260: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a8260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a8264: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1a8264u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a8268: 0x0  nop
    ctx->pc = 0x1a8268u;
    // NOP
    // 0x1a826c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a826cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a8270: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1a8270u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1a8274:
    // 0x1a8274: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a8274u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a8278: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a8278u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a827c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1a827cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1a8280: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1a8280u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1a8284: 0xc047b2c  jal         func_11ECB0
    ctx->pc = 0x1A8284u;
    SET_GPR_U32(ctx, 31, 0x1A828Cu);
    ctx->pc = 0x1A8288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8284u;
    // 0x1a8288: 0xafa20180  sw          $v0, 0x180($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ECB0u, 0x1A8284u, 0x1A828Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A828Cu;
label_1a828c:
    // 0x1a828c: 0x8fa201cc  lw          $v0, 0x1CC($sp)
    ctx->pc = 0x1a828cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
    // 0x1a8290: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1a8290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1a8294: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A8294u;
    {
        const bool branch_taken_0x1a8294 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1A8298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8294u;
        // 0x1a8298: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8294) {
            ctx->pc = 0x1A82A8u;
            goto label_1a82a8;
        }
    }
    ctx->pc = 0x1A829Cu;
    // 0x1a829c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a829cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a82a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A82A0u;
    {
        const bool branch_taken_0x1a82a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A82A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A82A0u;
        // 0x1a82a4: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a82a0) {
            ctx->pc = 0x1A82C0u;
            goto label_1a82c0;
        }
    }
    ctx->pc = 0x1A82A8u;
label_1a82a8:
    // 0x1a82a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a82a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a82ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a82acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a82b0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1a82b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a82b4: 0x0  nop
    ctx->pc = 0x1a82b4u;
    // NOP
    // 0x1a82b8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a82b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a82bc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1a82bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1a82c0:
    // 0x1a82c0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a82c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a82c4: 0x3c074000  lui         $a3, 0x4000
    ctx->pc = 0x1a82c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
    // 0x1a82c8: 0x8fa201cc  lw          $v0, 0x1CC($sp)
    ctx->pc = 0x1a82c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
    // 0x1a82cc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a82ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a82d0: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1a82d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1a82d4: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x1a82d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1a82d8: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x1a82d8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a82dc: 0x0  nop
    ctx->pc = 0x1a82dcu;
    // NOP
    // 0x1a82e0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a82e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a82e4: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x1a82e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1a82e8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1a82e8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1a82ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a82ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a82f0: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x1a82f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
    // 0x1a82f4: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x1a82f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1a82f8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a82f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a82fc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1a82fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1a8300: 0x0  nop
    ctx->pc = 0x1a8300u;
    // NOP
    // 0x1a8304: 0x431007  srav        $v0, $v1, $v0
    ctx->pc = 0x1a8304u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1a8308: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A8308u;
    SET_GPR_U32(ctx, 31, 0x1A8310u);
    ctx->pc = 0x1A830Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8308u;
    // 0x1a830c: 0xafa20170  sw          $v0, 0x170($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A8308u, 0x1A8310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8310u;
label_1a8310:
    // 0x1a8310: 0xdfa60140  ld          $a2, 0x140($sp)
    ctx->pc = 0x1a8310u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1a8314: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8318: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A8318u;
    SET_GPR_U32(ctx, 31, 0x1A8320u);
    ctx->pc = 0x1A831Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8318u;
    // 0x1a831c: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A8318u, 0x1A8320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8320u;
label_1a8320:
    // 0x1a8320: 0x8fa201cc  lw          $v0, 0x1CC($sp)
    ctx->pc = 0x1a8320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
    // 0x1a8324: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a8324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a8328: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a832c: 0x8c480010  lw          $t0, 0x10($v0)
    ctx->pc = 0x1a832cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1a8330: 0x81a02  srl         $v1, $t0, 8
    ctx->pc = 0x1a8330u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 8));
    // 0x1a8334: 0x310600ff  andi        $a2, $t0, 0xFF
    ctx->pc = 0x1a8334u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x1a8338: 0x306700ff  andi        $a3, $v1, 0xFF
    ctx->pc = 0x1a8338u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a833c: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x1a833cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1a8340: 0x81c02  srl         $v1, $t0, 16
    ctx->pc = 0x1a8340u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x1a8344: 0x73a38  dsll        $a3, $a3, 8
    ctx->pc = 0x1a8344u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 8);
    // 0x1a8348: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a8348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a834c: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1a834cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1a8350: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1a8350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1a8354: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x1a8354u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1a8358: 0x81e02  srl         $v1, $t0, 24
    ctx->pc = 0x1a8358u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 24));
    // 0x1a835c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a835cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a8360: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a8360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a8364: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1a8364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1a8368: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1a8368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1a836c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A836Cu;
    SET_GPR_U32(ctx, 31, 0x1A8374u);
    ctx->pc = 0x1A8370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A836Cu;
    // 0x1a8370: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A836Cu, 0x1A8374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8374u;
label_1a8374:
    // 0x1a8374: 0x8fa201cc  lw          $v0, 0x1CC($sp)
    ctx->pc = 0x1a8374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
    // 0x1a8378: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x1a8378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    // 0x1a837c: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x1a837cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1a8380: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x1a8380u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a8384: 0x102000ea  beqz        $at, . + 4 + (0xEA << 2)
    ctx->pc = 0x1A8384u;
    {
        const bool branch_taken_0x1a8384 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8384) {
            ctx->pc = 0x1A8730u;
            goto label_1a8730;
        }
    }
    ctx->pc = 0x1A838Cu;
    // 0x1a838c: 0x0  nop
    ctx->pc = 0x1a838cu;
    // NOP
label_1a8390:
    // 0x1a8390: 0x8fa501b0  lw          $a1, 0x1B0($sp)
    ctx->pc = 0x1a8390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1a8394: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1A8394u;
    SET_GPR_U32(ctx, 31, 0x1A839Cu);
    ctx->pc = 0x1A8398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8394u;
    // 0x1a8398: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1A8394u, 0x1A839Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A839Cu;
label_1a839c:
    // 0x1a839c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a839cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a83a0: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x1a83a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x1a83a4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1a83a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1a83a8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a83a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a83ac: 0x22eb8  dsll        $a1, $v0, 26
    ctx->pc = 0x1a83acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << 26);
    // 0x1a83b0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a83b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a83b4: 0xdfa20120  ld          $v0, 0x120($sp)
    ctx->pc = 0x1a83b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1a83b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a83b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a83bc: 0x458025  or          $s0, $v0, $a1
    ctx->pc = 0x1a83bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1a83c0: 0x8fa501a0  lw          $a1, 0x1A0($sp)
    ctx->pc = 0x1a83c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1a83c4: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1A83C4u;
    SET_GPR_U32(ctx, 31, 0x1A83CCu);
    ctx->pc = 0x1A83C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A83C4u;
    // 0x1a83c8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1A83C4u, 0x1A83CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A83CCu;
label_1a83cc:
    // 0x1a83cc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a83ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a83d0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1a83d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a83d4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a83d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a83d8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a83d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a83dc: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1a83dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1a83e0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a83e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a83e4: 0x2032025  or          $a0, $s0, $v1
    ctx->pc = 0x1a83e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1a83e8: 0x9ea378d0  lwu         $v1, 0x78D0($s5)
    ctx->pc = 0x1a83e8u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 30928)));
    // 0x1a83ec: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1a83ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1a83f0: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1a83f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1a83f4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a83f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a83f8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a83f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a83fc: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1a83fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1a8400: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1a8400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1a8404: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A8404u;
    SET_GPR_U32(ctx, 31, 0x1A840Cu);
    ctx->pc = 0x1A8408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8404u;
    // 0x1a8408: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A8404u, 0x1A840Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A840Cu;
label_1a840c:
    // 0x1a840c: 0xdfa20110  ld          $v0, 0x110($sp)
    ctx->pc = 0x1a840cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1a8410: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x1a8410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1a8414: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a8414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a8418: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a841c: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1a841cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1a8420: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A8420u;
    SET_GPR_U32(ctx, 31, 0x1A8428u);
    ctx->pc = 0x1A8424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8420u;
    // 0x1a8424: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A8420u, 0x1A8428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8428u;
label_1a8428:
    // 0x1a8428: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1a8428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a842c: 0x24020068  addiu       $v0, $zero, 0x68
    ctx->pc = 0x1a842cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x1a8430: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a8430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a8434: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8438: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1a8438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1a843c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A843Cu;
    SET_GPR_U32(ctx, 31, 0x1A8444u);
    ctx->pc = 0x1A8440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A843Cu;
    // 0x1a8440: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A843Cu, 0x1A8444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8444u;
label_1a8444:
    // 0x1a8444: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8448: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a8448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a844c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A844Cu;
    SET_GPR_U32(ctx, 31, 0x1A8454u);
    ctx->pc = 0x1A8450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A844Cu;
    // 0x1a8450: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A844Cu, 0x1A8454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8454u;
label_1a8454:
    // 0x1a8454: 0x12082b  sltu        $at, $zero, $s2
    ctx->pc = 0x1a8454u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1a8458: 0x10200029  beqz        $at, . + 4 + (0x29 << 2)
    ctx->pc = 0x1A8458u;
    {
        const bool branch_taken_0x1a8458 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A845Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8458u;
        // 0x1a845c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8458) {
            ctx->pc = 0x1A8500u;
            goto label_1a8500;
        }
    }
    ctx->pc = 0x1A8460u;
    // 0x1a8460: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x1a8460u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1a8464: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a8464u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a8468:
    // 0x1a8468: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x1a8468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1a846c: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x1a846cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1a8470: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1a8470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1a8474: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a8474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a8478: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1a8478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1a847c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a847cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a8480: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8484: 0xdfa20100  ld          $v0, 0x100($sp)
    ctx->pc = 0x1a8484u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1a8488: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1a8488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1a848c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A848Cu;
    SET_GPR_U32(ctx, 31, 0x1A8494u);
    ctx->pc = 0x1A8490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A848Cu;
    // 0x1a8490: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A848Cu, 0x1A8494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8494u;
label_1a8494:
    // 0x1a8494: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1a8494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1a8498: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a849c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a849cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a84a0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A84A0u;
    SET_GPR_U32(ctx, 31, 0x1A84A8u);
    ctx->pc = 0x1A84A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A84A0u;
    // 0x1a84a4: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A84A0u, 0x1A84A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A84A8u;
label_1a84a8:
    // 0x1a84a8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1a84a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a84ac: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1a84acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1a84b0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a84b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a84b4: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1a84b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1a84b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a84b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a84bc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a84bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a84c0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1a84c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1a84c4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A84C4u;
    SET_GPR_U32(ctx, 31, 0x1A84CCu);
    ctx->pc = 0x1A84C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A84C4u;
    // 0x1a84c8: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A84C4u, 0x1A84CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A84CCu;
label_1a84cc:
    // 0x1a84cc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a84ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a84d0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a84d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a84d4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A84D4u;
    SET_GPR_U32(ctx, 31, 0x1A84DCu);
    ctx->pc = 0x1A84D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A84D4u;
    // 0x1a84d8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A84D4u, 0x1A84DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A84DCu;
label_1a84dc:
    // 0x1a84dc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a84dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a84e0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1a84e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a84e4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A84E4u;
    SET_GPR_U32(ctx, 31, 0x1A84ECu);
    ctx->pc = 0x1A84E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A84E4u;
    // 0x1a84e8: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A84E4u, 0x1A84ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A84ECu;
label_1a84ec:
    // 0x1a84ec: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1a84ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1a84f0: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x1a84f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1a84f4: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x1a84f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1a84f8: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1A84F8u;
    {
        const bool branch_taken_0x1a84f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A84FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A84F8u;
        // 0x1a84fc: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a84f8) {
            ctx->pc = 0x1A8468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8468;
        }
    }
    ctx->pc = 0x1A8500u;
label_1a8500:
    // 0x1a8500: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8504: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1A8504u;
    SET_GPR_U32(ctx, 31, 0x1A850Cu);
    ctx->pc = 0x1A8508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8504u;
    // 0x1a8508: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1A8504u, 0x1A850Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A850Cu;
label_1a850c:
    // 0x1a850c: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1a850cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1a8510: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A8510u;
    {
        const bool branch_taken_0x1a8510 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1A8514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8510u;
        // 0x1a8514: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8510) {
            ctx->pc = 0x1A8524u;
            goto label_1a8524;
        }
    }
    ctx->pc = 0x1A8518u;
    // 0x1a8518: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a8518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a851c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A851Cu;
    {
        const bool branch_taken_0x1a851c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A851Cu;
        // 0x1a8520: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a851c) {
            ctx->pc = 0x1A853Cu;
            goto label_1a853c;
        }
    }
    ctx->pc = 0x1A8524u;
label_1a8524:
    // 0x1a8524: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a8524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a8528: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a8528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a852c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a852cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a8530: 0x0  nop
    ctx->pc = 0x1a8530u;
    // NOP
    // 0x1a8534: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x1a8534u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x1a8538: 0x460d6b40  add.s       $f13, $f13, $f13
    ctx->pc = 0x1a8538u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[13]);
label_1a853c:
    // 0x1a853c: 0x8fa201cc  lw          $v0, 0x1CC($sp)
    ctx->pc = 0x1a853cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
    // 0x1a8540: 0xc047b9a  jal         func_11EE68
    ctx->pc = 0x1A8540u;
    SET_GPR_U32(ctx, 31, 0x1A8548u);
    ctx->pc = 0x1A8544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8540u;
    // 0x1a8544: 0xc44c0050  lwc1        $f12, 0x50($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE68u, 0x1A8540u, 0x1A8548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8548u;
label_1a8548:
    // 0x1a8548: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x1a8548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x1a854c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1a854cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1a8550: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1a8550u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a8554: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a8554u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a8558: 0x0  nop
    ctx->pc = 0x1a8558u;
    // NOP
    // 0x1a855c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1a855cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1a8560: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a8560u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a8564: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1A8564u;
    {
        const bool branch_taken_0x1a8564 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a8564) {
            ctx->pc = 0x1A857Cu;
            goto label_1a857c;
        }
    }
    ctx->pc = 0x1A856Cu;
    // 0x1a856c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a856cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a8570: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1a8570u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1a8574: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A8574u;
    {
        const bool branch_taken_0x1a8574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8574u;
        // 0x1a8578: 0x3103c  dsll32      $v0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8574) {
            ctx->pc = 0x1A8598u;
            goto label_1a8598;
        }
    }
    ctx->pc = 0x1A857Cu;
label_1a857c:
    // 0x1a857c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1a857cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1a8580: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1a8580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1a8584: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a8584u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a8588: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1a8588u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1a858c: 0x0  nop
    ctx->pc = 0x1a858cu;
    // NOP
    // 0x1a8590: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a8590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a8594: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x1a8594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
label_1a8598:
    // 0x1a8598: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a859c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1a859cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1a85a0: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1a85a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1a85a4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a85a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a85a8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A85A8u;
    SET_GPR_U32(ctx, 31, 0x1A85B0u);
    ctx->pc = 0x1A85ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A85A8u;
    // 0x1a85ac: 0x34460068  ori         $a2, $v0, 0x68 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)104);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A85A8u, 0x1A85B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A85B0u;
label_1a85b0:
    // 0x1a85b0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a85b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a85b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a85b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a85b8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A85B8u;
    SET_GPR_U32(ctx, 31, 0x1A85C0u);
    ctx->pc = 0x1A85BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A85B8u;
    // 0x1a85bc: 0x24060356  addiu       $a2, $zero, 0x356 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A85B8u, 0x1A85C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A85C0u;
label_1a85c0:
    // 0x1a85c0: 0x12082b  sltu        $at, $zero, $s2
    ctx->pc = 0x1a85c0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1a85c4: 0x10200042  beqz        $at, . + 4 + (0x42 << 2)
    ctx->pc = 0x1A85C4u;
    {
        const bool branch_taken_0x1a85c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A85C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A85C4u;
        // 0x1a85c8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a85c4) {
            ctx->pc = 0x1A86D0u;
            goto label_1a86d0;
        }
    }
    ctx->pc = 0x1A85CCu;
    // 0x1a85cc: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x1a85ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1a85d0: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x1a85d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1a85d4: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1a85d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1a85d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a85d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a85dc: 0x623818  mult        $a3, $v1, $v0
    ctx->pc = 0x1a85dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1a85e0: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x1a85e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1a85e4: 0x70622018  mult1       $a0, $v1, $v0
    ctx->pc = 0x1a85e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1a85e8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1a85e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1a85ec: 0x24837000  addiu       $v1, $a0, 0x7000
    ctx->pc = 0x1a85ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 28672));
    // 0x1a85f0: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x1a85f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a85f4: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1a85f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1a85f8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a85f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a85fc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a85fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a8600: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a8600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a8604: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a8604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a8608: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1a8608u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a860c: 0x24e27900  addiu       $v0, $a3, 0x7900
    ctx->pc = 0x1a860cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 30976));
    // 0x1a8610: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1a8610u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a8614: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1a8614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1a8618: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1a8618u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1a861c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1a861cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x1a8620: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x1a8620u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x1a8624: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1a8624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1a8628: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a8628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a862c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1a862cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1a8630: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1a8630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1a8634: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1a8634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a8638: 0x70041b89  pcpyld      $v1, $zero, $a0
    ctx->pc = 0x1a8638u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 4)));
    // 0x1a863c: 0xa3b025  or          $s6, $a1, $v1
    ctx->pc = 0x1a863cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1a8640: 0x43b825  or          $s7, $v0, $v1
    ctx->pc = 0x1a8640u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a8644: 0x0  nop
    ctx->pc = 0x1a8644u;
    // NOP
label_1a8648:
    // 0x1a8648: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x1a8648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1a864c: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x1a864cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1a8650: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1a8650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1a8654: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a8654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a8658: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1a8658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1a865c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a865cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a8660: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8664: 0xdfa20100  ld          $v0, 0x100($sp)
    ctx->pc = 0x1a8664u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1a8668: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1a8668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1a866c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A866Cu;
    SET_GPR_U32(ctx, 31, 0x1A8674u);
    ctx->pc = 0x1A8670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A866Cu;
    // 0x1a8670: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A866Cu, 0x1A8674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8674u;
label_1a8674:
    // 0x1a8674: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1a8674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1a8678: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a867c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a867cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a8680: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A8680u;
    SET_GPR_U32(ctx, 31, 0x1A8688u);
    ctx->pc = 0x1A8684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8680u;
    // 0x1a8684: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A8680u, 0x1A8688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8688u;
label_1a8688:
    // 0x1a8688: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a868c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1a868cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1a8690: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A8690u;
    SET_GPR_U32(ctx, 31, 0x1A8698u);
    ctx->pc = 0x1A8694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8690u;
    // 0x1a8694: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A8690u, 0x1A8698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8698u;
label_1a8698:
    // 0x1a8698: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a869c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a869cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a86a0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A86A0u;
    SET_GPR_U32(ctx, 31, 0x1A86A8u);
    ctx->pc = 0x1A86A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A86A0u;
    // 0x1a86a4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A86A0u, 0x1A86A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A86A8u;
label_1a86a8:
    // 0x1a86a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a86a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a86ac: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1a86acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a86b0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A86B0u;
    SET_GPR_U32(ctx, 31, 0x1A86B8u);
    ctx->pc = 0x1A86B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A86B0u;
    // 0x1a86b4: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A86B0u, 0x1A86B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A86B8u;
label_1a86b8:
    // 0x1a86b8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1a86b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1a86bc: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x1a86bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1a86c0: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x1a86c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1a86c4: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1A86C4u;
    {
        const bool branch_taken_0x1a86c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A86C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A86C4u;
        // 0x1a86c8: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a86c4) {
            ctx->pc = 0x1A8648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8648;
        }
    }
    ctx->pc = 0x1A86CCu;
    // 0x1a86cc: 0x0  nop
    ctx->pc = 0x1a86ccu;
    // NOP
label_1a86d0:
    // 0x1a86d0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a86d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a86d4: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1A86D4u;
    SET_GPR_U32(ctx, 31, 0x1A86DCu);
    ctx->pc = 0x1A86D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A86D4u;
    // 0x1a86d8: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1A86D4u, 0x1A86DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A86DCu;
label_1a86dc:
    // 0x1a86dc: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1a86dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1a86e0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1a86e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a86e4: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x1a86e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
    // 0x1a86e8: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1a86e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1a86ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a86ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a86f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A86F0u;
    {
        const bool branch_taken_0x1a86f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A86F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A86F0u;
        // 0x1a86f4: 0x241000b0  addiu       $s0, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a86f0) {
            ctx->pc = 0x1A8700u;
            goto label_1a8700;
        }
    }
    ctx->pc = 0x1A86F8u;
    // 0x1a86f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A86F8u;
    {
        const bool branch_taken_0x1a86f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A86FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A86F8u;
        // 0x1a86fc: 0x241100a0  addiu       $s1, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a86f8) {
            ctx->pc = 0x1A8708u;
            goto label_1a8708;
        }
    }
    ctx->pc = 0x1A8700u;
label_1a8700:
    // 0x1a8700: 0x241000a0  addiu       $s0, $zero, 0xA0
    ctx->pc = 0x1a8700u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1a8704: 0x241100b0  addiu       $s1, $zero, 0xB0
    ctx->pc = 0x1a8704u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_1a8708:
    // 0x1a8708: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1a8708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1a870c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a870cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a8710: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x1a8710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
    // 0x1a8714: 0x8fa201cc  lw          $v0, 0x1CC($sp)
    ctx->pc = 0x1a8714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
    // 0x1a8718: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x1a8718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1a871c: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1a871cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1a8720: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1a8720u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1a8724: 0x1440ff1a  bnez        $v0, . + 4 + (-0xE6 << 2)
    ctx->pc = 0x1A8724u;
    {
        const bool branch_taken_0x1a8724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8724) {
            ctx->pc = 0x1A8390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8390;
        }
    }
    ctx->pc = 0x1A872Cu;
    // 0x1a872c: 0x0  nop
    ctx->pc = 0x1a872cu;
    // NOP
label_1a8730:
    // 0x1a8730: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8734: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1a8734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1a8738: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A8738u;
    SET_GPR_U32(ctx, 31, 0x1A8740u);
    ctx->pc = 0x1A873Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8738u;
    // 0x1a873c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A8738u, 0x1A8740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8740u;
label_1a8740:
    // 0x1a8740: 0x8fa501b0  lw          $a1, 0x1B0($sp)
    ctx->pc = 0x1a8740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1a8744: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1A8744u;
    SET_GPR_U32(ctx, 31, 0x1A874Cu);
    ctx->pc = 0x1A8748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8744u;
    // 0x1a8748: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1A8744u, 0x1A874Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A874Cu;
label_1a874c:
    // 0x1a874c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a874cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a8750: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x1a8750u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x1a8754: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1a8754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1a8758: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a8758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a875c: 0x22eb8  dsll        $a1, $v0, 26
    ctx->pc = 0x1a875cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << 26);
    // 0x1a8760: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a8760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a8764: 0xdfa20120  ld          $v0, 0x120($sp)
    ctx->pc = 0x1a8764u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1a8768: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a8768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a876c: 0x458025  or          $s0, $v0, $a1
    ctx->pc = 0x1a876cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1a8770: 0x8fa501a0  lw          $a1, 0x1A0($sp)
    ctx->pc = 0x1a8770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1a8774: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1A8774u;
    SET_GPR_U32(ctx, 31, 0x1A877Cu);
    ctx->pc = 0x1A8778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8774u;
    // 0x1a8778: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1A8774u, 0x1A877Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A877Cu;
label_1a877c:
    // 0x1a877c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a877cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a8780: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1a8780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a8784: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a8784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a8788: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1a8788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1a878c: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1a878cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1a8790: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a8790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a8794: 0x2032025  or          $a0, $s0, $v1
    ctx->pc = 0x1a8794u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1a8798: 0x9ea378d0  lwu         $v1, 0x78D0($s5)
    ctx->pc = 0x1a8798u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 30928)));
    // 0x1a879c: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1a879cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1a87a0: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1a87a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1a87a4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a87a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a87a8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a87a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a87ac: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1a87acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1a87b0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1a87b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1a87b4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A87B4u;
    SET_GPR_U32(ctx, 31, 0x1A87BCu);
    ctx->pc = 0x1A87B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A87B4u;
    // 0x1a87b8: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A87B4u, 0x1A87BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A87BCu;
label_1a87bc:
    // 0x1a87bc: 0xdfa600d0  ld          $a2, 0xD0($sp)
    ctx->pc = 0x1a87bcu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1a87c0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a87c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a87c4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A87C4u;
    SET_GPR_U32(ctx, 31, 0x1A87CCu);
    ctx->pc = 0x1A87C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A87C4u;
    // 0x1a87c8: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A87C4u, 0x1A87CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A87CCu;
label_1a87cc:
    // 0x1a87cc: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1a87ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a87d0: 0x24020068  addiu       $v0, $zero, 0x68
    ctx->pc = 0x1a87d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x1a87d4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a87d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a87d8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a87d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a87dc: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1a87dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1a87e0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A87E0u;
    SET_GPR_U32(ctx, 31, 0x1A87E8u);
    ctx->pc = 0x1A87E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A87E0u;
    // 0x1a87e4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A87E0u, 0x1A87E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A87E8u;
label_1a87e8:
    // 0x1a87e8: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x1a87e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1a87ec: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x1a87ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a87f0: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
    ctx->pc = 0x1A87F0u;
    {
        const bool branch_taken_0x1a87f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A87F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A87F0u;
        // 0x1a87f4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a87f0) {
            ctx->pc = 0x1A88A0u;
            goto label_1a88a0;
        }
    }
    ctx->pc = 0x1A87F8u;
    // 0x1a87f8: 0x2410003f  addiu       $s0, $zero, 0x3F
    ctx->pc = 0x1a87f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1a87fc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1a87fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a8800:
    // 0x1a8800: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x1a8800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1a8804: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x1a8804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
    // 0x1a8808: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1a8808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1a880c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a880cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a8810: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1a8810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1a8814: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a8814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a8818: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a881c: 0xdfa20100  ld          $v0, 0x100($sp)
    ctx->pc = 0x1a881cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1a8820: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1a8820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1a8824: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A8824u;
    SET_GPR_U32(ctx, 31, 0x1A882Cu);
    ctx->pc = 0x1A8828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8824u;
    // 0x1a8828: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A8824u, 0x1A882Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A882Cu;
label_1a882c:
    // 0x1a882c: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1a882cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1a8830: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8834: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a8834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a8838: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A8838u;
    SET_GPR_U32(ctx, 31, 0x1A8840u);
    ctx->pc = 0x1A883Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8838u;
    // 0x1a883c: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A8838u, 0x1A8840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8840u;
label_1a8840:
    // 0x1a8840: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1a8840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a8844: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1a8844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1a8848: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a8848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a884c: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1a884cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1a8850: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a8850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a8854: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8858: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1a8858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1a885c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A885Cu;
    SET_GPR_U32(ctx, 31, 0x1A8864u);
    ctx->pc = 0x1A8860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A885Cu;
    // 0x1a8860: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A885Cu, 0x1A8864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8864u;
label_1a8864:
    // 0x1a8864: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8868: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a8868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a886c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A886Cu;
    SET_GPR_U32(ctx, 31, 0x1A8874u);
    ctx->pc = 0x1A8870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A886Cu;
    // 0x1a8870: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A886Cu, 0x1A8874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8874u;
label_1a8874:
    // 0x1a8874: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8878: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1a8878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a887c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A887Cu;
    SET_GPR_U32(ctx, 31, 0x1A8884u);
    ctx->pc = 0x1A8880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A887Cu;
    // 0x1a8880: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A887Cu, 0x1A8884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8884u;
label_1a8884:
    // 0x1a8884: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x1a8884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1a8888: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a8888u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a888c: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x1a888cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1a8890: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1a8890u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a8894: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x1A8894u;
    {
        const bool branch_taken_0x1a8894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8894u;
        // 0x1a8898: 0x26940040  addiu       $s4, $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8894) {
            ctx->pc = 0x1A8800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8800;
        }
    }
    ctx->pc = 0x1A889Cu;
    // 0x1a889c: 0x0  nop
    ctx->pc = 0x1a889cu;
    // NOP
label_1a88a0:
    // 0x1a88a0: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x1a88a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1a88a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a88a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a88a8: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x1a88a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
    // 0x1a88ac: 0x8fa201cc  lw          $v0, 0x1CC($sp)
    ctx->pc = 0x1a88acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
    // 0x1a88b0: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1a88b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1a88b4: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x1a88b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1a88b8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1a88b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1a88bc: 0x1440fe5c  bnez        $v0, . + 4 + (-0x1A4 << 2)
    ctx->pc = 0x1A88BCu;
    {
        const bool branch_taken_0x1a88bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A88C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A88BCu;
        // 0x1a88c0: 0x4614ad40  add.s       $f21, $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a88bc) {
            ctx->pc = 0x1A8230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8230;
        }
    }
    ctx->pc = 0x1A88C4u;
    // 0x1a88c4: 0x0  nop
    ctx->pc = 0x1a88c4u;
    // NOP
label_1a88c8:
    // 0x1a88c8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a88c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a88cc: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1a88ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1a88d0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A88D0u;
    SET_GPR_U32(ctx, 31, 0x1A88D8u);
    ctx->pc = 0x1A88D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A88D0u;
    // 0x1a88d4: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A88D0u, 0x1A88D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A88D8u;
label_1a88d8:
    // 0x1a88d8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1a88d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a88dc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a88dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a88e0: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x1a88e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1a88e4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A88E4u;
    SET_GPR_U32(ctx, 31, 0x1A88ECu);
    ctx->pc = 0x1A88E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A88E4u;
    // 0x1a88e8: 0x2303c  dsll32      $a2, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A88E4u, 0x1A88ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A88ECu;
label_1a88ec:
    // 0x1a88ec: 0x8fa501b0  lw          $a1, 0x1B0($sp)
    ctx->pc = 0x1a88ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1a88f0: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1A88F0u;
    SET_GPR_U32(ctx, 31, 0x1A88F8u);
    ctx->pc = 0x1A88F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A88F0u;
    // 0x1a88f4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1A88F0u, 0x1A88F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A88F8u;
label_1a88f8:
    // 0x1a88f8: 0xdfa300c0  ld          $v1, 0xC0($sp)
    ctx->pc = 0x1a88f8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1a88fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a88fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a8900: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1a8900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1a8904: 0x8fa501a0  lw          $a1, 0x1A0($sp)
    ctx->pc = 0x1a8904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1a8908: 0x226b8  dsll        $a0, $v0, 26
    ctx->pc = 0x1a8908u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 26);
    // 0x1a890c: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x1a890cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x1a8910: 0x34621000  ori         $v0, $v1, 0x1000
    ctx->pc = 0x1a8910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x1a8914: 0x448025  or          $s0, $v0, $a0
    ctx->pc = 0x1a8914u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1a8918: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1A8918u;
    SET_GPR_U32(ctx, 31, 0x1A8920u);
    ctx->pc = 0x1A891Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8918u;
    // 0x1a891c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1A8918u, 0x1A8920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8920u;
label_1a8920:
    // 0x1a8920: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a8920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a8924: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1a8924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a8928: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a8928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a892c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1a892cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1a8930: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1a8930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1a8934: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a8934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a8938: 0x2032025  or          $a0, $s0, $v1
    ctx->pc = 0x1a8938u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1a893c: 0x9ea378d0  lwu         $v1, 0x78D0($s5)
    ctx->pc = 0x1a893cu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 30928)));
    // 0x1a8940: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1a8940u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1a8944: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1a8944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1a8948: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a894c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a894cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a8950: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1a8950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1a8954: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1a8954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1a8958: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A8958u;
    SET_GPR_U32(ctx, 31, 0x1A8960u);
    ctx->pc = 0x1A895Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8958u;
    // 0x1a895c: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A8958u, 0x1A8960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8960u;
label_1a8960:
    // 0x1a8960: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1A8960u;
    SET_GPR_U32(ctx, 31, 0x1A8968u);
    ctx->pc = 0x1A8964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8960u;
    // 0x1a8964: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1A8960u, 0x1A8968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8968u;
label_1a8968:
    // 0x1a8968: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1a8968u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a896c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a896cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8970: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x1a8970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x1a8974: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1a8974u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1a8978: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a8978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a897c: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1a897cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1a8980: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a8980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a8984: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1a8984u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1a8988: 0xa23025  or          $a2, $a1, $v0
    ctx->pc = 0x1a8988u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1a898c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A898Cu;
    SET_GPR_U32(ctx, 31, 0x1A8994u);
    ctx->pc = 0x1A8990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A898Cu;
    // 0x1a8990: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A898Cu, 0x1A8994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8994u;
label_1a8994:
    // 0x1a8994: 0x8fa201cc  lw          $v0, 0x1CC($sp)
    ctx->pc = 0x1a8994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
    // 0x1a8998: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a899c: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1a899cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1a89a0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1a89a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1a89a4: 0x21602  srl         $v0, $v0, 24
    ctx->pc = 0x1a89a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x1a89a8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a89a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a89ac: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1a89acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1a89b0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a89b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a89b4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A89B4u;
    SET_GPR_U32(ctx, 31, 0x1A89BCu);
    ctx->pc = 0x1A89B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A89B4u;
    // 0x1a89b8: 0x34460068  ori         $a2, $v0, 0x68 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)104);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A89B4u, 0x1A89BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A89BCu;
label_1a89bc:
    // 0x1a89bc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a89bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a89c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a89c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a89c4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A89C4u;
    SET_GPR_U32(ctx, 31, 0x1A89CCu);
    ctx->pc = 0x1A89C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A89C4u;
    // 0x1a89c8: 0x24060356  addiu       $a2, $zero, 0x356 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A89C4u, 0x1A89CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A89CCu;
label_1a89cc:
    // 0x1a89cc: 0x8ea378c8  lw          $v1, 0x78C8($s5)
    ctx->pc = 0x1a89ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30920)));
    // 0x1a89d0: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x1a89d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x1a89d4: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x1a89d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1a89d8: 0x1020003d  beqz        $at, . + 4 + (0x3D << 2)
    ctx->pc = 0x1A89D8u;
    {
        const bool branch_taken_0x1a89d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A89DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A89D8u;
        // 0x1a89dc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a89d8) {
            ctx->pc = 0x1A8AD0u;
            goto label_1a8ad0;
        }
    }
    ctx->pc = 0x1A89E0u;
    // 0x1a89e0: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x1a89e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1a89e4: 0x2412001f  addiu       $s2, $zero, 0x1F
    ctx->pc = 0x1a89e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1a89e8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a89e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a89ec: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1a89ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a89f0: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1a89f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1a89f4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a89f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a89f8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a89f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a89fc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a89fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a8a00: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a8a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a8a04: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1a8a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1a8a08: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1a8a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1a8a0c: 0x628025  or          $s0, $v1, $v0
    ctx->pc = 0x1a8a0cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1a8a10:
    // 0x1a8a10: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x1a8a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1a8a14: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1a8a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1a8a18: 0x9ea678c0  lwu         $a2, 0x78C0($s5)
    ctx->pc = 0x1a8a18u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 30912)));
    // 0x1a8a1c: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1a8a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1a8a20: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x1a8a20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1a8a24: 0x8ea278c4  lw          $v0, 0x78C4($s5)
    ctx->pc = 0x1a8a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30916)));
    // 0x1a8a28: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1a8a28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1a8a2c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1a8a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1a8a30: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1a8a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1a8a34: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8a38: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1a8a38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1a8a3c: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1a8a3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1a8a40: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a8a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a8a44: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a8a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a8a48: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1a8a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1a8a4c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1a8a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1a8a50: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A8A50u;
    SET_GPR_U32(ctx, 31, 0x1A8A58u);
    ctx->pc = 0x1A8A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8A50u;
    // 0x1a8a54: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A8A50u, 0x1A8A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8A58u;
label_1a8a58:
    // 0x1a8a58: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8a5c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a8a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a8a60: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A8A60u;
    SET_GPR_U32(ctx, 31, 0x1A8A68u);
    ctx->pc = 0x1A8A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8A60u;
    // 0x1a8a64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A8A60u, 0x1A8A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8A68u;
label_1a8a68:
    // 0x1a8a68: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1a8a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a8a6c: 0x3c0278f0  lui         $v0, 0x78F0
    ctx->pc = 0x1a8a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30960 << 16));
    // 0x1a8a70: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a8a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a8a74: 0x34426ff0  ori         $v0, $v0, 0x6FF0
    ctx->pc = 0x1a8a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28656);
    // 0x1a8a78: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a8a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a8a7c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8a80: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1a8a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1a8a84: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A8A84u;
    SET_GPR_U32(ctx, 31, 0x1A8A8Cu);
    ctx->pc = 0x1A8A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8A84u;
    // 0x1a8a88: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A8A84u, 0x1A8A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8A8Cu;
label_1a8a8c:
    // 0x1a8a8c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8a90: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a8a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a8a94: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A8A94u;
    SET_GPR_U32(ctx, 31, 0x1A8A9Cu);
    ctx->pc = 0x1A8A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8A94u;
    // 0x1a8a98: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A8A94u, 0x1A8A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8A9Cu;
label_1a8a9c:
    // 0x1a8a9c: 0x3c0286f0  lui         $v0, 0x86F0
    ctx->pc = 0x1a8a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34544 << 16));
    // 0x1a8aa0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8aa4: 0x34428ff0  ori         $v0, $v0, 0x8FF0
    ctx->pc = 0x1a8aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36848);
    // 0x1a8aa8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1a8aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a8aac: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A8AACu;
    SET_GPR_U32(ctx, 31, 0x1A8AB4u);
    ctx->pc = 0x1A8AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8AACu;
    // 0x1a8ab0: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A8AACu, 0x1A8AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8AB4u;
label_1a8ab4:
    // 0x1a8ab4: 0x8ea378c8  lw          $v1, 0x78C8($s5)
    ctx->pc = 0x1a8ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30920)));
    // 0x1a8ab8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1a8ab8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1a8abc: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x1a8abcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1a8ac0: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x1a8ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x1a8ac4: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x1a8ac4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1a8ac8: 0x1460ffd1  bnez        $v1, . + 4 + (-0x2F << 2)
    ctx->pc = 0x1A8AC8u;
    {
        const bool branch_taken_0x1a8ac8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8AC8u;
        // 0x1a8acc: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8ac8) {
            ctx->pc = 0x1A8A10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8a10;
        }
    }
    ctx->pc = 0x1A8AD0u;
label_1a8ad0:
    // 0x1a8ad0: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1a8ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1a8ad4: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x1a8ad4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1a8ad8: 0xc7b50014  lwc1        $f21, 0x14($sp)
    ctx->pc = 0x1a8ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1a8adc: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x1a8adcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a8ae0: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x1a8ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a8ae4: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1a8ae4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a8ae8: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1a8ae8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a8aec: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1a8aecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a8af0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1a8af0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a8af4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1a8af4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a8af8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1a8af8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a8afc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a8afcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a8b00: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8B00u;
        // 0x1a8b04: 0x27bd05d0  addiu       $sp, $sp, 0x5D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1488));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8B08u;
}
