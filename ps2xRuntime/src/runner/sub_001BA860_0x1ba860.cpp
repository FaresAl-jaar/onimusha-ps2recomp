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

// Function: sub_001BA860
// Address: 0x1ba860 - 0x1bb8b0
void sub_001BA860_0x1ba860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BA860_0x1ba860");
#endif

    switch (ctx->pc) {
        case 0x1ba8acu: goto label_1ba8ac;
        case 0x1ba8b4u: goto label_1ba8b4;
        case 0x1ba8e0u: goto label_1ba8e0;
        case 0x1ba900u: goto label_1ba900;
        case 0x1ba920u: goto label_1ba920;
        case 0x1ba930u: goto label_1ba930;
        case 0x1ba940u: goto label_1ba940;
        case 0x1ba948u: goto label_1ba948;
        case 0x1ba954u: goto label_1ba954;
        case 0x1ba978u: goto label_1ba978;
        case 0x1ba9b8u: goto label_1ba9b8;
        case 0x1ba9ccu: goto label_1ba9cc;
        case 0x1ba9dcu: goto label_1ba9dc;
        case 0x1ba9e8u: goto label_1ba9e8;
        case 0x1baa20u: goto label_1baa20;
        case 0x1baa30u: goto label_1baa30;
        case 0x1baa54u: goto label_1baa54;
        case 0x1baa68u: goto label_1baa68;
        case 0x1baa80u: goto label_1baa80;
        case 0x1baa9cu: goto label_1baa9c;
        case 0x1baac0u: goto label_1baac0;
        case 0x1bab00u: goto label_1bab00;
        case 0x1bab14u: goto label_1bab14;
        case 0x1bab24u: goto label_1bab24;
        case 0x1bab30u: goto label_1bab30;
        case 0x1bab68u: goto label_1bab68;
        case 0x1bab7cu: goto label_1bab7c;
        case 0x1baba0u: goto label_1baba0;
        case 0x1babb4u: goto label_1babb4;
        case 0x1babccu: goto label_1babcc;
        case 0x1bac28u: goto label_1bac28;
        case 0x1bac58u: goto label_1bac58;
        case 0x1bac68u: goto label_1bac68;
        case 0x1bac80u: goto label_1bac80;
        case 0x1bac88u: goto label_1bac88;
        case 0x1bac94u: goto label_1bac94;
        case 0x1baca0u: goto label_1baca0;
        case 0x1bae34u: goto label_1bae34;
        case 0x1bae3cu: goto label_1bae3c;
        case 0x1bae54u: goto label_1bae54;
        case 0x1bae70u: goto label_1bae70;
        case 0x1bae8cu: goto label_1bae8c;
        case 0x1baeccu: goto label_1baecc;
        case 0x1baef0u: goto label_1baef0;
        case 0x1baf00u: goto label_1baf00;
        case 0x1baf10u: goto label_1baf10;
        case 0x1baf64u: goto label_1baf64;
        case 0x1baf70u: goto label_1baf70;
        case 0x1bafa8u: goto label_1bafa8;
        case 0x1bafb8u: goto label_1bafb8;
        case 0x1bafdcu: goto label_1bafdc;
        case 0x1baff0u: goto label_1baff0;
        case 0x1bb008u: goto label_1bb008;
        case 0x1bb038u: goto label_1bb038;
        case 0x1bb080u: goto label_1bb080;
        case 0x1bb09cu: goto label_1bb09c;
        case 0x1bb0f0u: goto label_1bb0f0;
        case 0x1bb124u: goto label_1bb124;
        case 0x1bb130u: goto label_1bb130;
        case 0x1bb154u: goto label_1bb154;
        case 0x1bb194u: goto label_1bb194;
        case 0x1bb1b8u: goto label_1bb1b8;
        case 0x1bb1c8u: goto label_1bb1c8;
        case 0x1bb1e4u: goto label_1bb1e4;
        case 0x1bb1f4u: goto label_1bb1f4;
        case 0x1bb214u: goto label_1bb214;
        case 0x1bb228u: goto label_1bb228;
        case 0x1bb24cu: goto label_1bb24c;
        case 0x1bb2c8u: goto label_1bb2c8;
        case 0x1bb328u: goto label_1bb328;
        case 0x1bb330u: goto label_1bb330;
        case 0x1bb344u: goto label_1bb344;
        case 0x1bb360u: goto label_1bb360;
        case 0x1bb380u: goto label_1bb380;
        case 0x1bb388u: goto label_1bb388;
        case 0x1bb3d0u: goto label_1bb3d0;
        case 0x1bb434u: goto label_1bb434;
        case 0x1bb458u: goto label_1bb458;
        case 0x1bb468u: goto label_1bb468;
        case 0x1bb4bcu: goto label_1bb4bc;
        case 0x1bb4c8u: goto label_1bb4c8;
        case 0x1bb4ecu: goto label_1bb4ec;
        case 0x1bb52cu: goto label_1bb52c;
        case 0x1bb550u: goto label_1bb550;
        case 0x1bb564u: goto label_1bb564;
        case 0x1bb574u: goto label_1bb574;
        case 0x1bb580u: goto label_1bb580;
        case 0x1bb5b8u: goto label_1bb5b8;
        case 0x1bb5ccu: goto label_1bb5cc;
        case 0x1bb5f0u: goto label_1bb5f0;
        case 0x1bb604u: goto label_1bb604;
        case 0x1bb61cu: goto label_1bb61c;
        case 0x1bb634u: goto label_1bb634;
        case 0x1bb658u: goto label_1bb658;
        case 0x1bb674u: goto label_1bb674;
        case 0x1bb680u: goto label_1bb680;
        case 0x1bb6a4u: goto label_1bb6a4;
        case 0x1bb6e4u: goto label_1bb6e4;
        case 0x1bb6ecu: goto label_1bb6ec;
        case 0x1bb718u: goto label_1bb718;
        case 0x1bb728u: goto label_1bb728;
        case 0x1bb778u: goto label_1bb778;
        case 0x1bb788u: goto label_1bb788;
        case 0x1bb790u: goto label_1bb790;
        case 0x1bb7e0u: goto label_1bb7e0;
        case 0x1bb7f4u: goto label_1bb7f4;
        case 0x1bb818u: goto label_1bb818;
        case 0x1bb82cu: goto label_1bb82c;
        case 0x1bb844u: goto label_1bb844;
        case 0x1bb864u: goto label_1bb864;
        case 0x1bb878u: goto label_1bb878;
        default: break;
    }

    ctx->pc = 0x1ba860u;

    // 0x1ba860: 0x27bdfb00  addiu       $sp, $sp, -0x500
    ctx->pc = 0x1ba860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966016));
    // 0x1ba864: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ba864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba868: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1ba868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1ba86c: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x1ba86cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1ba870: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1ba870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1ba874: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1ba874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1ba878: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1ba878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1ba87c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ba87cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba880: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1ba880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1ba884: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ba884u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba888: 0xe7ba0028  swc1        $f26, 0x28($sp)
    ctx->pc = 0x1ba888u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1ba88c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ba88cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba890: 0xe7b90024  swc1        $f25, 0x24($sp)
    ctx->pc = 0x1ba890u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1ba894: 0xe7b80020  swc1        $f24, 0x20($sp)
    ctx->pc = 0x1ba894u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1ba898: 0xe7b7001c  swc1        $f23, 0x1C($sp)
    ctx->pc = 0x1ba898u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1ba89c: 0xe7b60018  swc1        $f22, 0x18($sp)
    ctx->pc = 0x1ba89cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1ba8a0: 0xe7b50014  swc1        $f21, 0x14($sp)
    ctx->pc = 0x1ba8a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1ba8a4: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1BA8A4u;
    SET_GPR_U32(ctx, 31, 0x1BA8ACu);
    ctx->pc = 0x1BA8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA8A4u;
    // 0x1ba8a8: 0xe7b40010  swc1        $f20, 0x10($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1BA8A4u, 0x1BA8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA8ACu;
label_1ba8ac:
    // 0x1ba8ac: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1BA8ACu;
    SET_GPR_U32(ctx, 31, 0x1BA8B4u);
    ctx->pc = 0x1BA8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA8ACu;
    // 0x1ba8b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1BA8ACu, 0x1BA8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA8B4u;
label_1ba8b4:
    // 0x1ba8b4: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1ba8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1ba8b8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1ba8b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba8bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ba8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba8c0: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1ba8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1ba8c4: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x1ba8c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ba8c8: 0x24080070  addiu       $t0, $zero, 0x70
    ctx->pc = 0x1ba8c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1ba8cc: 0x24090200  addiu       $t1, $zero, 0x200
    ctx->pc = 0x1ba8ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1ba8d0: 0x240a00e0  addiu       $t2, $zero, 0xE0
    ctx->pc = 0x1ba8d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1ba8d4: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1ba8d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba8d8: 0xc06afc4  jal         func_1ABF10
    ctx->pc = 0x1BA8D8u;
    SET_GPR_U32(ctx, 31, 0x1BA8E0u);
    ctx->pc = 0x1BA8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA8D8u;
    // 0x1ba8dc: 0xffa00008  sd          $zero, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABF10u, 0x1BA8D8u, 0x1BA8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA8E0u;
label_1ba8e0:
    // 0x1ba8e0: 0x240301bc  addiu       $v1, $zero, 0x1BC
    ctx->pc = 0x1ba8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 444));
    // 0x1ba8e4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1ba8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1ba8e8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ba8e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ba8ec: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x1ba8ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x1ba8f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ba8f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba8f4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1ba8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1ba8f8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BA8F8u;
    SET_GPR_U32(ctx, 31, 0x1BA900u);
    ctx->pc = 0x1BA8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA8F8u;
    // 0x1ba8fc: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BA8F8u, 0x1BA900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA900u;
label_1ba900:
    // 0x1ba900: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ba900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba904: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x1ba904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x1ba908: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ba908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ba90c: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x1ba90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x1ba910: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ba910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba914: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x1ba914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1ba918: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BA918u;
    SET_GPR_U32(ctx, 31, 0x1BA920u);
    ctx->pc = 0x1BA91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA918u;
    // 0x1ba91c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BA918u, 0x1BA920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA920u;
label_1ba920:
    // 0x1ba920: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ba920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba924: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1ba924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1ba928: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BA928u;
    SET_GPR_U32(ctx, 31, 0x1BA930u);
    ctx->pc = 0x1BA92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA928u;
    // 0x1ba92c: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BA928u, 0x1BA930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA930u;
label_1ba930:
    // 0x1ba930: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ba930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba934: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1ba934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1ba938: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BA938u;
    SET_GPR_U32(ctx, 31, 0x1BA940u);
    ctx->pc = 0x1BA93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA938u;
    // 0x1ba93c: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BA938u, 0x1BA940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA940u;
label_1ba940:
    // 0x1ba940: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x1BA940u;
    {
        const bool branch_taken_0x1ba940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA940u;
        // 0x1ba944: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba940) {
            ctx->pc = 0x1BABE0u;
            goto label_1babe0;
        }
    }
    ctx->pc = 0x1BA948u;
label_1ba948:
    // 0x1ba948: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ba948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba94c: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BA94Cu;
    SET_GPR_U32(ctx, 31, 0x1BA954u);
    ctx->pc = 0x1BA950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA94Cu;
    // 0x1ba950: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BA94Cu, 0x1BA954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA954u;
label_1ba954:
    // 0x1ba954: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ba954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ba958: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ba958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba95c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ba95cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ba960: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1ba960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1ba964: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x1ba964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x1ba968: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1ba968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1ba96c: 0x629825  or          $s3, $v1, $v0
    ctx->pc = 0x1ba96cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ba970: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BA970u;
    SET_GPR_U32(ctx, 31, 0x1BA978u);
    ctx->pc = 0x1BA974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA970u;
    // 0x1ba974: 0x24050070  addiu       $a1, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BA970u, 0x1BA978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA978u;
label_1ba978:
    // 0x1ba978: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ba978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ba97c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1ba97cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ba980: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ba980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ba984: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1ba984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1ba988: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1ba988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1ba98c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ba98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ba990: 0x2632025  or          $a0, $s3, $v1
    ctx->pc = 0x1ba990u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
    // 0x1ba994: 0x9e4378d0  lwu         $v1, 0x78D0($s2)
    ctx->pc = 0x1ba994u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 30928)));
    // 0x1ba998: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1ba998u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1ba99c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1ba99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1ba9a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ba9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba9a4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ba9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ba9a8: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1ba9a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1ba9ac: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1ba9acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1ba9b0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BA9B0u;
    SET_GPR_U32(ctx, 31, 0x1BA9B8u);
    ctx->pc = 0x1BA9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA9B0u;
    // 0x1ba9b4: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BA9B0u, 0x1BA9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA9B8u;
label_1ba9b8:
    // 0x1ba9b8: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1ba9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1ba9bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ba9bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba9c0: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1ba9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1ba9c4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BA9C4u;
    SET_GPR_U32(ctx, 31, 0x1BA9CCu);
    ctx->pc = 0x1BA9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA9C4u;
    // 0x1ba9c8: 0x34460090  ori         $a2, $v0, 0x90 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)144);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BA9C4u, 0x1BA9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA9CCu;
label_1ba9cc:
    // 0x1ba9cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ba9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba9d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ba9d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba9d4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BA9D4u;
    SET_GPR_U32(ctx, 31, 0x1BA9DCu);
    ctx->pc = 0x1BA9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA9D4u;
    // 0x1ba9d8: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BA9D4u, 0x1BA9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA9DCu;
label_1ba9dc:
    // 0x1ba9dc: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1BA9DCu;
    {
        const bool branch_taken_0x1ba9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA9DCu;
        // 0x1ba9e0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba9dc) {
            ctx->pc = 0x1BAA88u;
            goto label_1baa88;
        }
    }
    ctx->pc = 0x1BA9E4u;
    // 0x1ba9e4: 0x0  nop
    ctx->pc = 0x1ba9e4u;
    // NOP
label_1ba9e8:
    // 0x1ba9e8: 0x131940  sll         $v1, $s3, 5
    ctx->pc = 0x1ba9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x1ba9ec: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x1ba9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x1ba9f0: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1ba9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1ba9f4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1ba9f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ba9f8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ba9f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ba9fc: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1ba9fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1baa00: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1baa00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1baa04: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1baa04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1baa08: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x1baa08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x1baa0c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1baa0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1baa10: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1baa10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1baa14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1baa14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baa18: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BAA18u;
    SET_GPR_U32(ctx, 31, 0x1BAA20u);
    ctx->pc = 0x1BAA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAA18u;
    // 0x1baa1c: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BAA18u, 0x1BAA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAA20u;
label_1baa20:
    // 0x1baa20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1baa20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baa24: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1baa24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1baa28: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BAA28u;
    SET_GPR_U32(ctx, 31, 0x1BAA30u);
    ctx->pc = 0x1BAA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAA28u;
    // 0x1baa2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BAA28u, 0x1BAA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAA30u;
label_1baa30:
    // 0x1baa30: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1baa30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1baa34: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1baa34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1baa38: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1baa38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1baa3c: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1baa3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1baa40: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1baa40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1baa44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1baa44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baa48: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1baa48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1baa4c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BAA4Cu;
    SET_GPR_U32(ctx, 31, 0x1BAA54u);
    ctx->pc = 0x1BAA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAA4Cu;
    // 0x1baa50: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BAA4Cu, 0x1BAA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAA54u;
label_1baa54:
    // 0x1baa54: 0x3c020700  lui         $v0, 0x700
    ctx->pc = 0x1baa54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1792 << 16));
    // 0x1baa58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1baa58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baa5c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1baa5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1baa60: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BAA60u;
    SET_GPR_U32(ctx, 31, 0x1BAA68u);
    ctx->pc = 0x1BAA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAA60u;
    // 0x1baa64: 0x34461000  ori         $a2, $v0, 0x1000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BAA60u, 0x1BAA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAA68u;
label_1baa68:
    // 0x1baa68: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1baa68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1baa6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1baa6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baa70: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1baa70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1baa74: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1baa74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1baa78: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BAA78u;
    SET_GPR_U32(ctx, 31, 0x1BAA80u);
    ctx->pc = 0x1BAA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAA78u;
    // 0x1baa7c: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BAA78u, 0x1BAA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAA80u;
label_1baa80:
    // 0x1baa80: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1baa80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1baa84: 0x0  nop
    ctx->pc = 0x1baa84u;
    // NOP
label_1baa88:
    // 0x1baa88: 0x2e620008  sltiu       $v0, $s3, 0x8
    ctx->pc = 0x1baa88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1baa8c: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1BAA8Cu;
    {
        const bool branch_taken_0x1baa8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BAA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAA8Cu;
        // 0x1baa90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baa8c) {
            ctx->pc = 0x1BA9E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ba9e8;
        }
    }
    ctx->pc = 0x1BAA94u;
    // 0x1baa94: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BAA94u;
    SET_GPR_U32(ctx, 31, 0x1BAA9Cu);
    ctx->pc = 0x1BAA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAA94u;
    // 0x1baa98: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BAA94u, 0x1BAA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAA9Cu;
label_1baa9c:
    // 0x1baa9c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1baa9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1baaa0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1baaa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baaa4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1baaa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1baaa8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1baaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1baaac: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x1baaacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x1baab0: 0x34421200  ori         $v0, $v0, 0x1200
    ctx->pc = 0x1baab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4608);
    // 0x1baab4: 0x629825  or          $s3, $v1, $v0
    ctx->pc = 0x1baab4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1baab8: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BAAB8u;
    SET_GPR_U32(ctx, 31, 0x1BAAC0u);
    ctx->pc = 0x1BAABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAAB8u;
    // 0x1baabc: 0x24050070  addiu       $a1, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BAAB8u, 0x1BAAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAAC0u;
label_1baac0:
    // 0x1baac0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1baac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1baac4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1baac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1baac8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1baac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1baacc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1baaccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1baad0: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1baad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1baad4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1baad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1baad8: 0x2632025  or          $a0, $s3, $v1
    ctx->pc = 0x1baad8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
    // 0x1baadc: 0x9e4378d0  lwu         $v1, 0x78D0($s2)
    ctx->pc = 0x1baadcu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 30928)));
    // 0x1baae0: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1baae0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1baae4: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1baae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1baae8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1baae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baaec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1baaecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1baaf0: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1baaf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1baaf4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1baaf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1baaf8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BAAF8u;
    SET_GPR_U32(ctx, 31, 0x1BAB00u);
    ctx->pc = 0x1BAAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAAF8u;
    // 0x1baafc: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BAAF8u, 0x1BAB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAB00u;
label_1bab00:
    // 0x1bab00: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1bab00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1bab04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bab04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bab08: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1bab08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1bab0c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BAB0Cu;
    SET_GPR_U32(ctx, 31, 0x1BAB14u);
    ctx->pc = 0x1BAB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAB0Cu;
    // 0x1bab10: 0x34460080  ori         $a2, $v0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BAB0Cu, 0x1BAB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAB14u;
label_1bab14:
    // 0x1bab14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bab14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bab18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bab18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bab1c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BAB1Cu;
    SET_GPR_U32(ctx, 31, 0x1BAB24u);
    ctx->pc = 0x1BAB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAB1Cu;
    // 0x1bab20: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BAB1Cu, 0x1BAB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAB24u;
label_1bab24:
    // 0x1bab24: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1BAB24u;
    {
        const bool branch_taken_0x1bab24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAB24u;
        // 0x1bab28: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bab24) {
            ctx->pc = 0x1BABD0u;
            goto label_1babd0;
        }
    }
    ctx->pc = 0x1BAB2Cu;
    // 0x1bab2c: 0x0  nop
    ctx->pc = 0x1bab2cu;
    // NOP
label_1bab30:
    // 0x1bab30: 0x131940  sll         $v1, $s3, 5
    ctx->pc = 0x1bab30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x1bab34: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x1bab34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x1bab38: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1bab38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1bab3c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1bab3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bab40: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bab40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bab44: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1bab44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1bab48: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1bab48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1bab4c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bab4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bab50: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x1bab50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x1bab54: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1bab54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1bab58: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bab58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bab5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bab5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bab60: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BAB60u;
    SET_GPR_U32(ctx, 31, 0x1BAB68u);
    ctx->pc = 0x1BAB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAB60u;
    // 0x1bab64: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BAB60u, 0x1BAB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAB68u;
label_1bab68:
    // 0x1bab68: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1bab68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1bab6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bab6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bab70: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bab70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bab74: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BAB74u;
    SET_GPR_U32(ctx, 31, 0x1BAB7Cu);
    ctx->pc = 0x1BAB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAB74u;
    // 0x1bab78: 0x34460010  ori         $a2, $v0, 0x10 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BAB74u, 0x1BAB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAB7Cu;
label_1bab7c:
    // 0x1bab7c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1bab7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bab80: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1bab80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1bab84: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bab84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bab88: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1bab88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1bab8c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1bab8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1bab90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bab90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bab94: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1bab94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1bab98: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BAB98u;
    SET_GPR_U32(ctx, 31, 0x1BABA0u);
    ctx->pc = 0x1BAB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAB98u;
    // 0x1bab9c: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BAB98u, 0x1BABA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BABA0u;
label_1baba0:
    // 0x1baba0: 0x3c020710  lui         $v0, 0x710
    ctx->pc = 0x1baba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1808 << 16));
    // 0x1baba4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1baba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baba8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1baba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1babac: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BABACu;
    SET_GPR_U32(ctx, 31, 0x1BABB4u);
    ctx->pc = 0x1BABB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BABACu;
    // 0x1babb0: 0x34461010  ori         $a2, $v0, 0x1010 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4112);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BABACu, 0x1BABB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BABB4u;
label_1babb4:
    // 0x1babb4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1babb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1babb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1babb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1babbc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1babbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1babc0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1babc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1babc4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BABC4u;
    SET_GPR_U32(ctx, 31, 0x1BABCCu);
    ctx->pc = 0x1BABC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BABC4u;
    // 0x1babc8: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BABC4u, 0x1BABCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BABCCu;
label_1babcc:
    // 0x1babcc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1babccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1babd0:
    // 0x1babd0: 0x2e620008  sltiu       $v0, $s3, 0x8
    ctx->pc = 0x1babd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1babd4: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1BABD4u;
    {
        const bool branch_taken_0x1babd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1babd4) {
            ctx->pc = 0x1BAB30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bab30;
        }
    }
    ctx->pc = 0x1BABDCu;
    // 0x1babdc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1babdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1babe0:
    // 0x1babe0: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1babe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1babe4: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1babe4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1babe8: 0x1440ff57  bnez        $v0, . + 4 + (-0xA9 << 2)
    ctx->pc = 0x1BABE8u;
    {
        const bool branch_taken_0x1babe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1babe8) {
            ctx->pc = 0x1BA948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ba948;
        }
    }
    ctx->pc = 0x1BABF0u;
    // 0x1babf0: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x1babf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x1babf4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1BABF4u;
    {
        const bool branch_taken_0x1babf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BABF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BABF4u;
        // 0x1babf8: 0x27a304d0  addiu       $v1, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1babf4) {
            ctx->pc = 0x1BAC30u;
            goto label_1bac30;
        }
    }
    ctx->pc = 0x1BABFCu;
    // 0x1babfc: 0x26220040  addiu       $v0, $s1, 0x40
    ctx->pc = 0x1babfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1bac00: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x1bac00u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bac04: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1bac04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1bac08: 0x27a404e0  addiu       $a0, $sp, 0x4E0
    ctx->pc = 0x1bac08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
    // 0x1bac0c: 0x24a56aa0  addiu       $a1, $a1, 0x6AA0
    ctx->pc = 0x1bac0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27296));
    // 0x1bac10: 0x27a604d0  addiu       $a2, $sp, 0x4D0
    ctx->pc = 0x1bac10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
    // 0x1bac14: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1bac14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1bac18: 0x7c670000  sq          $a3, 0x0($v1)
    ctx->pc = 0x1bac18u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 7));
    // 0x1bac1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bac1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bac20: 0xc041442  jal         func_105108
    ctx->pc = 0x1BAC20u;
    SET_GPR_U32(ctx, 31, 0x1BAC28u);
    ctx->pc = 0x1BAC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAC20u;
    // 0x1bac24: 0xe7a004dc  swc1        $f0, 0x4DC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1244), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1BAC20u, 0x1BAC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAC28u;
label_1bac28:
    // 0x1bac28: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1BAC28u;
    {
        const bool branch_taken_0x1bac28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bac28) {
            ctx->pc = 0x1BAC68u;
            goto label_1bac68;
        }
    }
    ctx->pc = 0x1BAC30u;
label_1bac30:
    // 0x1bac30: 0xafa004e0  sw          $zero, 0x4E0($sp)
    ctx->pc = 0x1bac30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1248), GPR_U32(ctx, 0));
    // 0x1bac34: 0xafa004e4  sw          $zero, 0x4E4($sp)
    ctx->pc = 0x1bac34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1252), GPR_U32(ctx, 0));
    // 0x1bac38: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1bac38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1bac3c: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x1bac3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bac40: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1bac40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1bac44: 0x27a40480  addiu       $a0, $sp, 0x480
    ctx->pc = 0x1bac44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
    // 0x1bac48: 0x24a56aa0  addiu       $a1, $a1, 0x6AA0
    ctx->pc = 0x1bac48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27296));
    // 0x1bac4c: 0xe7a004e8  swc1        $f0, 0x4E8($sp)
    ctx->pc = 0x1bac4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1256), bits); }
    // 0x1bac50: 0xc041494  jal         func_105250
    ctx->pc = 0x1BAC50u;
    SET_GPR_U32(ctx, 31, 0x1BAC58u);
    ctx->pc = 0x1BAC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAC50u;
    // 0x1bac54: 0xafa204ec  sw          $v0, 0x4EC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1260), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105250u, 0x1BAC50u, 0x1BAC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAC58u;
label_1bac58:
    // 0x1bac58: 0x27a404d0  addiu       $a0, $sp, 0x4D0
    ctx->pc = 0x1bac58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
    // 0x1bac5c: 0x27a50480  addiu       $a1, $sp, 0x480
    ctx->pc = 0x1bac5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
    // 0x1bac60: 0xc041442  jal         func_105108
    ctx->pc = 0x1BAC60u;
    SET_GPR_U32(ctx, 31, 0x1BAC68u);
    ctx->pc = 0x1BAC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAC60u;
    // 0x1bac64: 0x27a604e0  addiu       $a2, $sp, 0x4E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1BAC60u, 0x1BAC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAC68u;
label_1bac68:
    // 0x1bac68: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x1bac68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1bac6c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BAC6Cu;
    {
        const bool branch_taken_0x1bac6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAC6Cu;
        // 0x1bac70: 0x27a404c0  addiu       $a0, $sp, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bac6c) {
            ctx->pc = 0x1BAC80u;
            goto label_1bac80;
        }
    }
    ctx->pc = 0x1BAC74u;
    // 0x1bac74: 0x27a504d0  addiu       $a1, $sp, 0x4D0
    ctx->pc = 0x1bac74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
    // 0x1bac78: 0xc04d748  jal         func_135D20
    ctx->pc = 0x1BAC78u;
    SET_GPR_U32(ctx, 31, 0x1BAC80u);
    ctx->pc = 0x1BAC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAC78u;
    // 0x1bac7c: 0x27a604fc  addiu       $a2, $sp, 0x4FC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1276));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135D20u, 0x1BAC78u, 0x1BAC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAC80u;
label_1bac80:
    // 0x1bac80: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x1BAC80u;
    {
        const bool branch_taken_0x1bac80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAC80u;
        // 0x1bac84: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bac80) {
            ctx->pc = 0x1BAE10u;
            goto label_1bae10;
        }
    }
    ctx->pc = 0x1BAC88u;
label_1bac88:
    // 0x1bac88: 0x320500ff  andi        $a1, $s0, 0xFF
    ctx->pc = 0x1bac88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1bac8c: 0xc07051c  jal         func_1C1470
    ctx->pc = 0x1BAC8Cu;
    SET_GPR_U32(ctx, 31, 0x1BAC94u);
    ctx->pc = 0x1BAC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAC8Cu;
    // 0x1bac90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1470u, 0x1BAC8Cu, 0x1BAC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAC94u;
label_1bac94:
    // 0x1bac94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1bac94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bac98: 0xc070550  jal         func_1C1540
    ctx->pc = 0x1BAC98u;
    SET_GPR_U32(ctx, 31, 0x1BACA0u);
    ctx->pc = 0x1BAC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAC98u;
    // 0x1bac9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1540u, 0x1BAC98u, 0x1BACA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BACA0u;
label_1baca0:
    // 0x1baca0: 0xc7a204e8  lwc1        $f2, 0x4E8($sp)
    ctx->pc = 0x1baca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1baca4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1baca4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1baca8: 0x0  nop
    ctx->pc = 0x1baca8u;
    // NOP
    // 0x1bacac: 0x46020081  sub.s       $f2, $f0, $f2
    ctx->pc = 0x1bacacu;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1bacb0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1bacb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bacb4: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1BACB4u;
    {
        const bool branch_taken_0x1bacb4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bacb4) {
            ctx->pc = 0x1BACE8u;
            goto label_1bace8;
        }
    }
    ctx->pc = 0x1BACBCu;
    // 0x1bacbc: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x1bacbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bacc0: 0xc620002c  lwc1        $f0, 0x2C($s1)
    ctx->pc = 0x1bacc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bacc4: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x1bacc4u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x1bacc8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1bacc8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1baccc: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1bacccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1bacd0: 0x46010083  div.s       $f2, $f0, $f1
    ctx->pc = 0x1bacd0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1bacd4: 0x0  nop
    ctx->pc = 0x1bacd4u;
    // NOP
    // 0x1bacd8: 0x0  nop
    ctx->pc = 0x1bacd8u;
    // NOP
    // 0x1bacdc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BACDCu;
    {
        const bool branch_taken_0x1bacdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bacdc) {
            ctx->pc = 0x1BAD00u;
            goto label_1bad00;
        }
    }
    ctx->pc = 0x1BACE4u;
    // 0x1bace4: 0x0  nop
    ctx->pc = 0x1bace4u;
    // NOP
label_1bace8:
    // 0x1bace8: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x1bace8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bacec: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1bacecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bacf0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1bacf0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1bacf4: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1bacf4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1bacf8: 0x46010083  div.s       $f2, $f0, $f1
    ctx->pc = 0x1bacf8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1bacfc: 0x0  nop
    ctx->pc = 0x1bacfcu;
    // NOP
label_1bad00:
    // 0x1bad00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1bad00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bad04: 0x0  nop
    ctx->pc = 0x1bad04u;
    // NOP
    // 0x1bad08: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1bad08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bad0c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1BAD0Cu;
    {
        const bool branch_taken_0x1bad0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bad0c) {
            ctx->pc = 0x1BAD18u;
            goto label_1bad18;
        }
    }
    ctx->pc = 0x1BAD14u;
    // 0x1bad14: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x1bad14u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_1bad18:
    // 0x1bad18: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1bad18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1bad1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bad1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bad20: 0x0  nop
    ctx->pc = 0x1bad20u;
    // NOP
    // 0x1bad24: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1bad24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bad28: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1BAD28u;
    {
        const bool branch_taken_0x1bad28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bad28) {
            ctx->pc = 0x1BAD38u;
            goto label_1bad38;
        }
    }
    ctx->pc = 0x1BAD30u;
    // 0x1bad30: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x1bad30u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x1bad34: 0x0  nop
    ctx->pc = 0x1bad34u;
    // NOP
label_1bad38:
    // 0x1bad38: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x1bad38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1bad3c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1BAD3Cu;
    {
        const bool branch_taken_0x1bad3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAD3Cu;
        // 0x1bad40: 0x3c0242fe  lui         $v0, 0x42FE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17150 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bad3c) {
            ctx->pc = 0x1BADA8u;
            goto label_1bada8;
        }
    }
    ctx->pc = 0x1BAD44u;
    // 0x1bad44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bad44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bad48: 0x0  nop
    ctx->pc = 0x1bad48u;
    // NOP
    // 0x1bad4c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1bad4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1bad50: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1bad50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1bad54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bad54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bad58: 0x0  nop
    ctx->pc = 0x1bad58u;
    // NOP
    // 0x1bad5c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1bad5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bad60: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1BAD60u;
    {
        const bool branch_taken_0x1bad60 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BAD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAD60u;
        // 0x1bad64: 0x240400ff  addiu       $a0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bad60) {
            ctx->pc = 0x1BAD78u;
            goto label_1bad78;
        }
    }
    ctx->pc = 0x1BAD68u;
    // 0x1bad68: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1bad68u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1bad6c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1bad6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1bad70: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BAD70u;
    {
        const bool branch_taken_0x1bad70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAD70u;
        // 0x1bad74: 0x831823  subu        $v1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bad70) {
            ctx->pc = 0x1BAD94u;
            goto label_1bad94;
        }
    }
    ctx->pc = 0x1BAD78u;
label_1bad78:
    // 0x1bad78: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1bad78u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1bad7c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1bad7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1bad80: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1bad80u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1bad84: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1bad84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1bad88: 0x0  nop
    ctx->pc = 0x1bad88u;
    // NOP
    // 0x1bad8c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1bad8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1bad90: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1bad90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1bad94:
    // 0x1bad94: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1bad94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1bad98: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1bad98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1bad9c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1bad9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1bada0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1BADA0u;
    {
        const bool branch_taken_0x1bada0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BADA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BADA0u;
        // 0x1bada4: 0xac430080  sw          $v1, 0x80($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bada0) {
            ctx->pc = 0x1BAE08u;
            goto label_1bae08;
        }
    }
    ctx->pc = 0x1BADA8u;
label_1bada8:
    // 0x1bada8: 0x3c0242fe  lui         $v0, 0x42FE
    ctx->pc = 0x1bada8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17150 << 16));
    // 0x1badac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1badacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1badb0: 0x0  nop
    ctx->pc = 0x1badb0u;
    // NOP
    // 0x1badb4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1badb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1badb8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1badb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1badbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1badbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1badc0: 0x0  nop
    ctx->pc = 0x1badc0u;
    // NOP
    // 0x1badc4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1badc4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1badc8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1BADC8u;
    {
        const bool branch_taken_0x1badc8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1badc8) {
            ctx->pc = 0x1BADE0u;
            goto label_1bade0;
        }
    }
    ctx->pc = 0x1BADD0u;
    // 0x1badd0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1badd0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1badd4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1badd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1badd8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BADD8u;
    {
        const bool branch_taken_0x1badd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BADDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BADD8u;
        // 0x1baddc: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1badd8) {
            ctx->pc = 0x1BADFCu;
            goto label_1badfc;
        }
    }
    ctx->pc = 0x1BADE0u;
label_1bade0:
    // 0x1bade0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1bade0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1bade4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1bade4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1bade8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1bade8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1badec: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1badecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1badf0: 0x0  nop
    ctx->pc = 0x1badf0u;
    // NOP
    // 0x1badf4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1badf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1badf8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1badf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1badfc:
    // 0x1badfc: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1badfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1bae00: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1bae00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1bae04: 0xac430080  sw          $v1, 0x80($v0)
    ctx->pc = 0x1bae04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 3));
label_1bae08:
    // 0x1bae08: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1bae08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1bae0c: 0x0  nop
    ctx->pc = 0x1bae0cu;
    // NOP
label_1bae10:
    // 0x1bae10: 0x8e4278b4  lw          $v0, 0x78B4($s2)
    ctx->pc = 0x1bae10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30900)));
    // 0x1bae14: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1bae14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1bae18: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1bae18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1bae1c: 0x1440ff9a  bnez        $v0, . + 4 + (-0x66 << 2)
    ctx->pc = 0x1BAE1Cu;
    {
        const bool branch_taken_0x1bae1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bae1c) {
            ctx->pc = 0x1BAC88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bac88;
        }
    }
    ctx->pc = 0x1BAE24u;
    // 0x1bae24: 0x8e4578d0  lw          $a1, 0x78D0($s2)
    ctx->pc = 0x1bae24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30928)));
    // 0x1bae28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bae28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bae2c: 0xc070468  jal         func_1C11A0
    ctx->pc = 0x1BAE2Cu;
    SET_GPR_U32(ctx, 31, 0x1BAE34u);
    ctx->pc = 0x1BAE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAE2Cu;
    // 0x1bae30: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C11A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C11A0u, 0x1BAE2Cu, 0x1BAE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAE34u;
label_1bae34:
    // 0x1bae34: 0xc0705f4  jal         func_1C17D0
    ctx->pc = 0x1BAE34u;
    SET_GPR_U32(ctx, 31, 0x1BAE3Cu);
    ctx->pc = 0x1BAE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAE34u;
    // 0x1bae38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C17D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C17D0u, 0x1BAE34u, 0x1BAE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAE3Cu;
label_1bae3c:
    // 0x1bae3c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1bae3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bae40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bae40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bae44: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bae44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bae48: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1bae48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1bae4c: 0xc070600  jal         func_1C1800
    ctx->pc = 0x1BAE4Cu;
    SET_GPR_U32(ctx, 31, 0x1BAE54u);
    ctx->pc = 0x1BAE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAE4Cu;
    // 0x1bae50: 0x628025  or          $s0, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1800u, 0x1BAE4Cu, 0x1BAE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAE54u;
label_1bae54:
    // 0x1bae54: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bae54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bae58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bae58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bae5c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bae5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bae60: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x1bae60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1bae64: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x1bae64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x1bae68: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BAE68u;
    SET_GPR_U32(ctx, 31, 0x1BAE70u);
    ctx->pc = 0x1BAE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAE68u;
    // 0x1bae6c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BAE68u, 0x1BAE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAE70u;
label_1bae70:
    // 0x1bae70: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bae70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bae74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bae74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bae78: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bae78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bae7c: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x1bae7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1bae80: 0x216b8  dsll        $v0, $v0, 26
    ctx->pc = 0x1bae80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 26);
    // 0x1bae84: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BAE84u;
    SET_GPR_U32(ctx, 31, 0x1BAE8Cu);
    ctx->pc = 0x1BAE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAE84u;
    // 0x1bae88: 0x508025  or          $s0, $v0, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BAE84u, 0x1BAE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAE8Cu;
label_1bae8c:
    // 0x1bae8c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1bae8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bae90: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1bae90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1bae94: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bae94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bae98: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1bae98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1bae9c: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1bae9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1baea0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1baea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1baea4: 0x702025  or          $a0, $v1, $s0
    ctx->pc = 0x1baea4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x1baea8: 0x9e4378d0  lwu         $v1, 0x78D0($s2)
    ctx->pc = 0x1baea8u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 30928)));
    // 0x1baeac: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1baeacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1baeb0: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1baeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1baeb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1baeb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baeb8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1baeb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1baebc: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1baebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1baec0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1baec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1baec4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BAEC4u;
    SET_GPR_U32(ctx, 31, 0x1BAECCu);
    ctx->pc = 0x1BAEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAEC4u;
    // 0x1baec8: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BAEC4u, 0x1BAECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAECCu;
label_1baecc:
    // 0x1baecc: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x1baeccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x1baed0: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1baed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1baed4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1baed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1baed8: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1baed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1baedc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1baedcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1baee0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1baee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baee4: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1baee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1baee8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BAEE8u;
    SET_GPR_U32(ctx, 31, 0x1BAEF0u);
    ctx->pc = 0x1BAEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAEE8u;
    // 0x1baeec: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BAEE8u, 0x1BAEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAEF0u;
label_1baef0:
    // 0x1baef0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1baef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baef4: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1baef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1baef8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BAEF8u;
    SET_GPR_U32(ctx, 31, 0x1BAF00u);
    ctx->pc = 0x1BAEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAEF8u;
    // 0x1baefc: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BAEF8u, 0x1BAF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAF00u;
label_1baf00:
    // 0x1baf00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1baf00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baf04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1baf04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baf08: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BAF08u;
    SET_GPR_U32(ctx, 31, 0x1BAF10u);
    ctx->pc = 0x1BAF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAF08u;
    // 0x1baf0c: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BAF08u, 0x1BAF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAF10u;
label_1baf10:
    // 0x1baf10: 0x8e4678c8  lw          $a2, 0x78C8($s2)
    ctx->pc = 0x1baf10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30920)));
    // 0x1baf14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1baf14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baf18: 0x9e4778cc  lwu         $a3, 0x78CC($s2)
    ctx->pc = 0x1baf18u;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 30924)));
    // 0x1baf1c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1baf1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1baf20: 0x8e4278c4  lw          $v0, 0x78C4($s2)
    ctx->pc = 0x1baf20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30916)));
    // 0x1baf24: 0x9e4378c0  lwu         $v1, 0x78C0($s2)
    ctx->pc = 0x1baf24u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 30912)));
    // 0x1baf28: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1baf28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1baf2c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1baf2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1baf30: 0x73938  dsll        $a3, $a3, 4
    ctx->pc = 0x1baf30u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 4);
    // 0x1baf34: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1baf34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1baf38: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1baf38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1baf3c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1baf3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1baf40: 0x34e7000a  ori         $a3, $a3, 0xA
    ctx->pc = 0x1baf40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)10);
    // 0x1baf44: 0x633b8  dsll        $a2, $a2, 14
    ctx->pc = 0x1baf44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 14);
    // 0x1baf48: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1baf48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1baf4c: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1baf4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1baf50: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x1baf50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x1baf54: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1baf54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1baf58: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1baf58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x1baf5c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BAF5Cu;
    SET_GPR_U32(ctx, 31, 0x1BAF64u);
    ctx->pc = 0x1BAF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAF5Cu;
    // 0x1baf60: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BAF5Cu, 0x1BAF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAF64u;
label_1baf64:
    // 0x1baf64: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1BAF64u;
    {
        const bool branch_taken_0x1baf64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAF64u;
        // 0x1baf68: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baf64) {
            ctx->pc = 0x1BB010u;
            goto label_1bb010;
        }
    }
    ctx->pc = 0x1BAF6Cu;
    // 0x1baf6c: 0x0  nop
    ctx->pc = 0x1baf6cu;
    // NOP
label_1baf70:
    // 0x1baf70: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x1baf70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1baf74: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x1baf74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x1baf78: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1baf78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1baf7c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1baf7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1baf80: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1baf80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1baf84: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1baf84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1baf88: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1baf88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1baf8c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1baf8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1baf90: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x1baf90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x1baf94: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1baf94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1baf98: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1baf98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1baf9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1baf9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bafa0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BAFA0u;
    SET_GPR_U32(ctx, 31, 0x1BAFA8u);
    ctx->pc = 0x1BAFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAFA0u;
    // 0x1bafa4: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BAFA0u, 0x1BAFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAFA8u;
label_1bafa8:
    // 0x1bafa8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bafa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bafac: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bafacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bafb0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BAFB0u;
    SET_GPR_U32(ctx, 31, 0x1BAFB8u);
    ctx->pc = 0x1BAFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAFB0u;
    // 0x1bafb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BAFB0u, 0x1BAFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAFB8u;
label_1bafb8:
    // 0x1bafb8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1bafb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bafbc: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1bafbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1bafc0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bafc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bafc4: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1bafc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1bafc8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1bafc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1bafcc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bafccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bafd0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1bafd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1bafd4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BAFD4u;
    SET_GPR_U32(ctx, 31, 0x1BAFDCu);
    ctx->pc = 0x1BAFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAFD4u;
    // 0x1bafd8: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BAFD4u, 0x1BAFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAFDCu;
label_1bafdc:
    // 0x1bafdc: 0x3c020e00  lui         $v0, 0xE00
    ctx->pc = 0x1bafdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3584 << 16));
    // 0x1bafe0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bafe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bafe4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bafe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bafe8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BAFE8u;
    SET_GPR_U32(ctx, 31, 0x1BAFF0u);
    ctx->pc = 0x1BAFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAFE8u;
    // 0x1bafec: 0x34462000  ori         $a2, $v0, 0x2000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BAFE8u, 0x1BAFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAFF0u;
label_1baff0:
    // 0x1baff0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1baff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1baff4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1baff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baff8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1baff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1baffc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1baffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bb000: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BB000u;
    SET_GPR_U32(ctx, 31, 0x1BB008u);
    ctx->pc = 0x1BB004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB000u;
    // 0x1bb004: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BB000u, 0x1BB008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB008u;
label_1bb008:
    // 0x1bb008: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1bb008u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1bb00c: 0x0  nop
    ctx->pc = 0x1bb00cu;
    // NOP
label_1bb010:
    // 0x1bb010: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x1bb010u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1bb014: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1BB014u;
    {
        const bool branch_taken_0x1bb014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB014u;
        // 0x1bb018: 0x240301bc  addiu       $v1, $zero, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb014) {
            ctx->pc = 0x1BAF70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1baf70;
        }
    }
    ctx->pc = 0x1BB01Cu;
    // 0x1bb01c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1bb01cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1bb020: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bb020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bb024: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x1bb024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x1bb028: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb02c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1bb02cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1bb030: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BB030u;
    SET_GPR_U32(ctx, 31, 0x1BB038u);
    ctx->pc = 0x1BB034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB030u;
    // 0x1bb034: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BB030u, 0x1BB038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB038u;
label_1bb038:
    // 0x1bb038: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x1bb038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1bb03c: 0x1040017e  beqz        $v0, . + 4 + (0x17E << 2)
    ctx->pc = 0x1BB03Cu;
    {
        const bool branch_taken_0x1bb03c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb03c) {
            ctx->pc = 0x1BB638u;
            goto label_1bb638;
        }
    }
    ctx->pc = 0x1BB044u;
    // 0x1bb044: 0x8fa204c0  lw          $v0, 0x4C0($sp)
    ctx->pc = 0x1bb044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1216)));
    // 0x1bb048: 0x24429000  addiu       $v0, $v0, -0x7000
    ctx->pc = 0x1bb048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938624));
    // 0x1bb04c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB04Cu;
    {
        const bool branch_taken_0x1bb04c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1BB050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB04Cu;
        // 0x1bb050: 0x29843  sra         $s3, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb04c) {
            ctx->pc = 0x1BB05Cu;
            goto label_1bb05c;
        }
    }
    ctx->pc = 0x1BB054u;
    // 0x1bb054: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bb054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bb058: 0x29843  sra         $s3, $v0, 1
    ctx->pc = 0x1bb058u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 1));
label_1bb05c:
    // 0x1bb05c: 0x8fa204c4  lw          $v0, 0x4C4($sp)
    ctx->pc = 0x1bb05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1220)));
    // 0x1bb060: 0x24428700  addiu       $v0, $v0, -0x7900
    ctx->pc = 0x1bb060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936320));
    // 0x1bb064: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB064u;
    {
        const bool branch_taken_0x1bb064 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1BB068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB064u;
        // 0x1bb068: 0x28043  sra         $s0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb064) {
            ctx->pc = 0x1BB074u;
            goto label_1bb074;
        }
    }
    ctx->pc = 0x1BB06Cu;
    // 0x1bb06c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bb06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bb070: 0x28043  sra         $s0, $v0, 1
    ctx->pc = 0x1bb070u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 1));
label_1bb074:
    // 0x1bb074: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb078: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BB078u;
    SET_GPR_U32(ctx, 31, 0x1BB080u);
    ctx->pc = 0x1BB07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB078u;
    // 0x1bb07c: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BB078u, 0x1BB080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB080u;
label_1bb080:
    // 0x1bb080: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bb080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb084: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb088: 0x431004  sllv        $v0, $v1, $v0
    ctx->pc = 0x1bb088u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1bb08c: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x1bb08cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1bb090: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bb090u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb094: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BB094u;
    SET_GPR_U32(ctx, 31, 0x1BB09Cu);
    ctx->pc = 0x1BB098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB094u;
    // 0x1bb098: 0x46800660  cvt.s.w     $f25, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BB094u, 0x1BB09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB09Cu;
label_1bb09c:
    // 0x1bb09c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bb09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb0a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1bb0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb0a4: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x1bb0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1bb0a8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1bb0a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bb0ac: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1bb0acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1bb0b0: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x1bb0b0u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb0b4: 0x0  nop
    ctx->pc = 0x1bb0b4u;
    // NOP
    // 0x1bb0b8: 0x46800e20  cvt.s.w     $f24, $f1
    ctx->pc = 0x1bb0b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
    // 0x1bb0bc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1bb0bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bb0c0: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x1bb0c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1bb0c4: 0x46191042  mul.s       $f1, $f2, $f25
    ctx->pc = 0x1bb0c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[25]);
    // 0x1bb0c8: 0x46011dc3  div.s       $f23, $f3, $f1
    ctx->pc = 0x1bb0c8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[23] = FPU_DIV_S(ctx->f[3], ctx->f[1]); }
    // 0x1bb0cc: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1bb0ccu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb0d0: 0x0  nop
    ctx->pc = 0x1bb0d0u;
    // NOP
    // 0x1bb0d4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1bb0d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1bb0d8: 0x46181002  mul.s       $f0, $f2, $f24
    ctx->pc = 0x1bb0d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[24]);
    // 0x1bb0dc: 0x46000d83  div.s       $f22, $f1, $f0
    ctx->pc = 0x1bb0dcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1bb0e0: 0x0  nop
    ctx->pc = 0x1bb0e0u;
    // NOP
    // 0x1bb0e4: 0x0  nop
    ctx->pc = 0x1bb0e4u;
    // NOP
    // 0x1bb0e8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BB0E8u;
    {
        const bool branch_taken_0x1bb0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb0e8) {
            ctx->pc = 0x1BB108u;
            goto label_1bb108;
        }
    }
    ctx->pc = 0x1BB0F0u;
label_1bb0f0:
    // 0x1bb0f0: 0x2482ff80  addiu       $v0, $a0, -0x80
    ctx->pc = 0x1bb0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967168));
    // 0x1bb0f4: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1bb0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1bb0f8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1bb0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1bb0fc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1bb0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1bb100: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1bb100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1bb104: 0xac430080  sw          $v1, 0x80($v0)
    ctx->pc = 0x1bb104u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 3));
label_1bb108:
    // 0x1bb108: 0x2c820100  sltiu       $v0, $a0, 0x100
    ctx->pc = 0x1bb108u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1bb10c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1BB10Cu;
    {
        const bool branch_taken_0x1bb10c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb10c) {
            ctx->pc = 0x1BB0F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bb0f0;
        }
    }
    ctx->pc = 0x1BB114u;
    // 0x1bb114: 0x8e4578d0  lw          $a1, 0x78D0($s2)
    ctx->pc = 0x1bb114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30928)));
    // 0x1bb118: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb11c: 0xc070468  jal         func_1C11A0
    ctx->pc = 0x1BB11Cu;
    SET_GPR_U32(ctx, 31, 0x1BB124u);
    ctx->pc = 0x1BB120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB11Cu;
    // 0x1bb120: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C11A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C11A0u, 0x1BB11Cu, 0x1BB124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB124u;
label_1bb124:
    // 0x1bb124: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb128: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BB128u;
    SET_GPR_U32(ctx, 31, 0x1BB130u);
    ctx->pc = 0x1BB12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB128u;
    // 0x1bb12c: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BB128u, 0x1BB130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB130u;
label_1bb130:
    // 0x1bb130: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1bb130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bb134: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb138: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bb138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bb13c: 0x3c0201b1  lui         $v0, 0x1B1
    ctx->pc = 0x1bb13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)433 << 16));
    // 0x1bb140: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x1bb140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x1bb144: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1bb144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1bb148: 0x628025  or          $s0, $v1, $v0
    ctx->pc = 0x1bb148u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1bb14c: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BB14Cu;
    SET_GPR_U32(ctx, 31, 0x1BB154u);
    ctx->pc = 0x1BB150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB14Cu;
    // 0x1bb150: 0x24050070  addiu       $a1, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BB14Cu, 0x1BB154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB154u;
label_1bb154:
    // 0x1bb154: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1bb154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bb158: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1bb158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1bb15c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bb15cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bb160: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1bb160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1bb164: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1bb164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1bb168: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bb168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bb16c: 0x2032025  or          $a0, $s0, $v1
    ctx->pc = 0x1bb16cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1bb170: 0x9e4378d0  lwu         $v1, 0x78D0($s2)
    ctx->pc = 0x1bb170u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 30928)));
    // 0x1bb174: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1bb174u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1bb178: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1bb178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1bb17c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb17cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb180: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bb180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bb184: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1bb184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1bb188: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1bb188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1bb18c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BB18Cu;
    SET_GPR_U32(ctx, 31, 0x1BB194u);
    ctx->pc = 0x1BB190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB18Cu;
    // 0x1bb190: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BB18Cu, 0x1BB194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB194u;
label_1bb194:
    // 0x1bb194: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x1bb194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x1bb198: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1bb198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1bb19c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1bb19cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1bb1a0: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1bb1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1bb1a4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bb1a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bb1a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb1a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb1ac: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1bb1acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1bb1b0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BB1B0u;
    SET_GPR_U32(ctx, 31, 0x1BB1B8u);
    ctx->pc = 0x1BB1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB1B0u;
    // 0x1bb1b4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BB1B0u, 0x1BB1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB1B8u;
label_1bb1b8:
    // 0x1bb1b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb1b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb1bc: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1bb1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1bb1c0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BB1C0u;
    SET_GPR_U32(ctx, 31, 0x1BB1C8u);
    ctx->pc = 0x1BB1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB1C0u;
    // 0x1bb1c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BB1C0u, 0x1BB1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB1C8u;
label_1bb1c8:
    // 0x1bb1c8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1bb1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x1bb1cc: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1bb1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x1bb1d0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bb1d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bb1d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb1d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb1d8: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1bb1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1bb1dc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BB1DCu;
    SET_GPR_U32(ctx, 31, 0x1BB1E4u);
    ctx->pc = 0x1BB1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB1DCu;
    // 0x1bb1e0: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BB1DCu, 0x1BB1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB1E4u;
label_1bb1e4:
    // 0x1bb1e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb1e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb1e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bb1e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb1ec: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BB1ECu;
    SET_GPR_U32(ctx, 31, 0x1BB1F4u);
    ctx->pc = 0x1BB1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB1ECu;
    // 0x1bb1f0: 0x2406021d  addiu       $a2, $zero, 0x21D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 541));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BB1ECu, 0x1BB1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB1F4u;
label_1bb1f4:
    // 0x1bb1f4: 0x240301bc  addiu       $v1, $zero, 0x1BC
    ctx->pc = 0x1bb1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 444));
    // 0x1bb1f8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1bb1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1bb1fc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bb1fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bb200: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x1bb200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x1bb204: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb208: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1bb208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1bb20c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BB20Cu;
    SET_GPR_U32(ctx, 31, 0x1BB214u);
    ctx->pc = 0x1BB210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB20Cu;
    // 0x1bb210: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BB20Cu, 0x1BB214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB214u;
label_1bb214:
    // 0x1bb214: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb218: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1bb218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bb21c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x1bb21cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x1bb220: 0xc070870  jal         func_1C21C0
    ctx->pc = 0x1BB220u;
    SET_GPR_U32(ctx, 31, 0x1BB228u);
    ctx->pc = 0x1BB224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB220u;
    // 0x1bb224: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C21C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C21C0u, 0x1BB220u, 0x1BB228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB228u;
label_1bb228:
    // 0x1bb228: 0x34028080  ori         $v0, $zero, 0x8080
    ctx->pc = 0x1bb228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x1bb22c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1bb22cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1bb230: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1bb230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1bb234: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bb234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bb238: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x1bb238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x1bb23c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb240: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bb240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb244: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BB244u;
    SET_GPR_U32(ctx, 31, 0x1BB24Cu);
    ctx->pc = 0x1BB248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB244u;
    // 0x1bb248: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BB244u, 0x1BB24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB24Cu;
label_1bb24c:
    // 0x1bb24c: 0x4619b842  mul.s       $f1, $f23, $f25
    ctx->pc = 0x1bb24cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[23], ctx->f[25]);
    // 0x1bb250: 0x3c0744e0  lui         $a3, 0x44E0
    ctx->pc = 0x1bb250u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17632 << 16));
    // 0x1bb254: 0x3c064180  lui         $a2, 0x4180
    ctx->pc = 0x1bb254u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16768 << 16));
    // 0x1bb258: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1bb258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bb25c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bb25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bb260: 0x3c0344f2  lui         $v1, 0x44F2
    ctx->pc = 0x1bb260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17650 << 16));
    // 0x1bb264: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1bb264u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1bb268: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb26c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1bb26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1bb270: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x1bb270u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb274: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x1bb274u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bb278: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1bb278u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1bb27c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1bb27cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1bb280: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1bb280u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1bb284: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1bb284u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1bb288: 0x4618b042  mul.s       $f1, $f22, $f24
    ctx->pc = 0x1bb288u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[24]);
    // 0x1bb28c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1bb28cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1bb290: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x1bb290u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x1bb294: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bb294u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb298: 0x0  nop
    ctx->pc = 0x1bb298u;
    // NOP
    // 0x1bb29c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1bb29cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1bb2a0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1bb2a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1bb2a4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1bb2a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1bb2a8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1bb2a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1bb2ac: 0x0  nop
    ctx->pc = 0x1bb2acu;
    // NOP
    // 0x1bb2b0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bb2b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bb2b4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1bb2b4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1bb2b8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1bb2b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1bb2bc: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1bb2bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1bb2c0: 0xc070854  jal         func_1C2150
    ctx->pc = 0x1BB2C0u;
    SET_GPR_U32(ctx, 31, 0x1BB2C8u);
    ctx->pc = 0x1BB2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB2C0u;
    // 0x1bb2c4: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2150u, 0x1BB2C0u, 0x1BB2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB2C8u;
label_1bb2c8:
    // 0x1bb2c8: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1bb2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1bb2cc: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1bb2ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1bb2d0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BB2D0u;
    {
        const bool branch_taken_0x1bb2d0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1BB2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB2D0u;
        // 0x1bb2d4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb2d0) {
            ctx->pc = 0x1BB2E4u;
            goto label_1bb2e4;
        }
    }
    ctx->pc = 0x1BB2D8u;
    // 0x1bb2d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bb2d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb2dc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BB2DCu;
    {
        const bool branch_taken_0x1bb2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB2DCu;
        // 0x1bb2e0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb2dc) {
            ctx->pc = 0x1BB2FCu;
            goto label_1bb2fc;
        }
    }
    ctx->pc = 0x1BB2E4u;
label_1bb2e4:
    // 0x1bb2e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bb2e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bb2e8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1bb2e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1bb2ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bb2ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb2f0: 0x0  nop
    ctx->pc = 0x1bb2f0u;
    // NOP
    // 0x1bb2f4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1bb2f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1bb2f8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1bb2f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1bb2fc:
    // 0x1bb2fc: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1bb2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1bb300: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1bb300u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb304: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1bb304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1bb308: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bb308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb30c: 0x0  nop
    ctx->pc = 0x1bb30cu;
    // NOP
    // 0x1bb310: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x1bb310u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1bb314: 0x0  nop
    ctx->pc = 0x1bb314u;
    // NOP
    // 0x1bb318: 0x0  nop
    ctx->pc = 0x1bb318u;
    // NOP
    // 0x1bb31c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x1BB31Cu;
    {
        const bool branch_taken_0x1bb31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb31c) {
            ctx->pc = 0x1BB440u;
            goto label_1bb440;
        }
    }
    ctx->pc = 0x1BB324u;
    // 0x1bb324: 0x0  nop
    ctx->pc = 0x1bb324u;
    // NOP
label_1bb328:
    // 0x1bb328: 0xc047a98  jal         func_11EA60
    ctx->pc = 0x1BB328u;
    SET_GPR_U32(ctx, 31, 0x1BB330u);
    ctx->pc = 0x1BB32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB328u;
    // 0x1bb32c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EA60u, 0x1BB328u, 0x1BB330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB330u;
label_1bb330:
    // 0x1bb330: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x1bb330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bb334: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1bb334u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1bb338: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1bb338u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1bb33c: 0xc047b2c  jal         func_11ECB0
    ctx->pc = 0x1BB33Cu;
    SET_GPR_U32(ctx, 31, 0x1BB344u);
    ctx->pc = 0x1BB340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB33Cu;
    // 0x1bb340: 0x4600be80  add.s       $f26, $f23, $f0 (Delay Slot)
    ctx->f[26] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ECB0u, 0x1BB33Cu, 0x1BB344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB344u;
label_1bb344:
    // 0x1bb344: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x1bb344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bb348: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb34c: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x1bb34cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    // 0x1bb350: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1bb350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bb354: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1bb354u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1bb358: 0xc070870  jal         func_1C21C0
    ctx->pc = 0x1BB358u;
    SET_GPR_U32(ctx, 31, 0x1BB360u);
    ctx->pc = 0x1BB35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB358u;
    // 0x1bb35c: 0x4600b340  add.s       $f13, $f22, $f0 (Delay Slot)
    ctx->f[13] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C21C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C21C0u, 0x1BB358u, 0x1BB360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB360u;
label_1bb360:
    // 0x1bb360: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1bb360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1bb364: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x1bb364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x1bb368: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bb368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bb36c: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x1bb36cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x1bb370: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb374: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bb374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb378: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BB378u;
    SET_GPR_U32(ctx, 31, 0x1BB380u);
    ctx->pc = 0x1BB37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB378u;
    // 0x1bb37c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BB378u, 0x1BB380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB380u;
label_1bb380:
    // 0x1bb380: 0xc047a98  jal         func_11EA60
    ctx->pc = 0x1BB380u;
    SET_GPR_U32(ctx, 31, 0x1BB388u);
    ctx->pc = 0x1BB384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB380u;
    // 0x1bb384: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EA60u, 0x1BB380u, 0x1BB388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB388u;
label_1bb388:
    // 0x1bb388: 0xc623001c  lwc1        $f3, 0x1C($s1)
    ctx->pc = 0x1bb388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1bb38c: 0x3c0244e0  lui         $v0, 0x44E0
    ctx->pc = 0x1bb38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17632 << 16));
    // 0x1bb390: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1bb390u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bb394: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1bb394u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1bb398: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1bb398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1bb39c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bb39cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bb3a0: 0x0  nop
    ctx->pc = 0x1bb3a0u;
    // NOP
    // 0x1bb3a4: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x1bb3a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1bb3a8: 0x4600b800  add.s       $f0, $f23, $f0
    ctx->pc = 0x1bb3a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
    // 0x1bb3ac: 0x4600c802  mul.s       $f0, $f25, $f0
    ctx->pc = 0x1bb3acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
    // 0x1bb3b0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1bb3b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1bb3b4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1bb3b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1bb3b8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1bb3b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1bb3bc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1bb3bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1bb3c0: 0x0  nop
    ctx->pc = 0x1bb3c0u;
    // NOP
    // 0x1bb3c4: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x1bb3c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bb3c8: 0xc047b2c  jal         func_11ECB0
    ctx->pc = 0x1BB3C8u;
    SET_GPR_U32(ctx, 31, 0x1BB3D0u);
    ctx->pc = 0x1BB3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB3C8u;
    // 0x1bb3cc: 0x10803f  dsra32      $s0, $s0, 0 (Delay Slot)
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ECB0u, 0x1BB3C8u, 0x1BB3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB3D0u;
label_1bb3d0:
    // 0x1bb3d0: 0xc623001c  lwc1        $f3, 0x1C($s1)
    ctx->pc = 0x1bb3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1bb3d4: 0x3c0244f2  lui         $v0, 0x44F2
    ctx->pc = 0x1bb3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17650 << 16));
    // 0x1bb3d8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1bb3d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bb3dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb3e0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1bb3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bb3e4: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1bb3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1bb3e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bb3e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bb3ec: 0x0  nop
    ctx->pc = 0x1bb3ecu;
    // NOP
    // 0x1bb3f0: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x1bb3f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1bb3f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1bb3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bb3f8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bb3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bb3fc: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1bb3fcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1bb400: 0x4600b000  add.s       $f0, $f22, $f0
    ctx->pc = 0x1bb400u;
    ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    // 0x1bb404: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x1bb404u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x1bb408: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1bb408u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1bb40c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1bb40cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1bb410: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1bb410u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1bb414: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1bb414u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1bb418: 0x0  nop
    ctx->pc = 0x1bb418u;
    // NOP
    // 0x1bb41c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bb41cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bb420: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1bb420u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1bb424: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1bb424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1bb428: 0x2031825  or          $v1, $s0, $v1
    ctx->pc = 0x1bb428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1bb42c: 0xc070854  jal         func_1C2150
    ctx->pc = 0x1BB42Cu;
    SET_GPR_U32(ctx, 31, 0x1BB434u);
    ctx->pc = 0x1BB430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB42Cu;
    // 0x1bb430: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2150u, 0x1BB42Cu, 0x1BB434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB434u;
label_1bb434:
    // 0x1bb434: 0x4614ad40  add.s       $f21, $f21, $f20
    ctx->pc = 0x1bb434u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
    // 0x1bb438: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1bb438u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1bb43c: 0x0  nop
    ctx->pc = 0x1bb43cu;
    // NOP
label_1bb440:
    // 0x1bb440: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1bb440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1bb444: 0x53082b  sltu        $at, $v0, $s3
    ctx->pc = 0x1bb444u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1bb448: 0x1020ffb7  beqz        $at, . + 4 + (-0x49 << 2)
    ctx->pc = 0x1BB448u;
    {
        const bool branch_taken_0x1bb448 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB448u;
        // 0x1bb44c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb448) {
            ctx->pc = 0x1BB328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bb328;
        }
    }
    ctx->pc = 0x1BB450u;
    // 0x1bb450: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1BB450u;
    SET_GPR_U32(ctx, 31, 0x1BB458u);
    ctx->pc = 0x1BB454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB450u;
    // 0x1bb454: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1BB450u, 0x1BB458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB458u;
label_1bb458:
    // 0x1bb458: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bb458u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb45c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1bb45cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1bb460: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1BB460u;
    {
        const bool branch_taken_0x1bb460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB460u;
        // 0x1bb464: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb460) {
            ctx->pc = 0x1BB4A0u;
            goto label_1bb4a0;
        }
    }
    ctx->pc = 0x1BB468u;
label_1bb468:
    // 0x1bb468: 0x2cc10080  sltiu       $at, $a2, 0x80
    ctx->pc = 0x1bb468u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x1bb46c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BB46Cu;
    {
        const bool branch_taken_0x1bb46c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB46Cu;
        // 0x1bb470: 0xa62023  subu        $a0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb46c) {
            ctx->pc = 0x1BB488u;
            goto label_1bb488;
        }
    }
    ctx->pc = 0x1BB474u;
    // 0x1bb474: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1bb474u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1bb478: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x1bb478u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x1bb47c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1bb47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1bb480: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1BB480u;
    {
        const bool branch_taken_0x1bb480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB480u;
        // 0x1bb484: 0xac440080  sw          $a0, 0x80($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb480) {
            ctx->pc = 0x1BB498u;
            goto label_1bb498;
        }
    }
    ctx->pc = 0x1BB488u;
label_1bb488:
    // 0x1bb488: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1bb488u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1bb48c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1bb48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1bb490: 0xac430080  sw          $v1, 0x80($v0)
    ctx->pc = 0x1bb490u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 3));
    // 0x1bb494: 0x0  nop
    ctx->pc = 0x1bb494u;
    // NOP
label_1bb498:
    // 0x1bb498: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1bb498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1bb49c: 0x0  nop
    ctx->pc = 0x1bb49cu;
    // NOP
label_1bb4a0:
    // 0x1bb4a0: 0x2cc20100  sltiu       $v0, $a2, 0x100
    ctx->pc = 0x1bb4a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1bb4a4: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1BB4A4u;
    {
        const bool branch_taken_0x1bb4a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb4a4) {
            ctx->pc = 0x1BB468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bb468;
        }
    }
    ctx->pc = 0x1BB4ACu;
    // 0x1bb4ac: 0x8e4578d0  lw          $a1, 0x78D0($s2)
    ctx->pc = 0x1bb4acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30928)));
    // 0x1bb4b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb4b4: 0xc070468  jal         func_1C11A0
    ctx->pc = 0x1BB4B4u;
    SET_GPR_U32(ctx, 31, 0x1BB4BCu);
    ctx->pc = 0x1BB4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB4B4u;
    // 0x1bb4b8: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C11A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C11A0u, 0x1BB4B4u, 0x1BB4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB4BCu;
label_1bb4bc:
    // 0x1bb4bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb4bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb4c0: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BB4C0u;
    SET_GPR_U32(ctx, 31, 0x1BB4C8u);
    ctx->pc = 0x1BB4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB4C0u;
    // 0x1bb4c4: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BB4C0u, 0x1BB4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB4C8u;
label_1bb4c8:
    // 0x1bb4c8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1bb4c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bb4cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb4ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb4d0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bb4d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bb4d4: 0x3c0201b1  lui         $v0, 0x1B1
    ctx->pc = 0x1bb4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)433 << 16));
    // 0x1bb4d8: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x1bb4d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x1bb4dc: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1bb4dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1bb4e0: 0x628025  or          $s0, $v1, $v0
    ctx->pc = 0x1bb4e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1bb4e4: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BB4E4u;
    SET_GPR_U32(ctx, 31, 0x1BB4ECu);
    ctx->pc = 0x1BB4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB4E4u;
    // 0x1bb4e8: 0x24050070  addiu       $a1, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BB4E4u, 0x1BB4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB4ECu;
label_1bb4ec:
    // 0x1bb4ec: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1bb4ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bb4f0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1bb4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1bb4f4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bb4f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bb4f8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1bb4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1bb4fc: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1bb4fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1bb500: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bb500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bb504: 0x2032025  or          $a0, $s0, $v1
    ctx->pc = 0x1bb504u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1bb508: 0x9e4378d0  lwu         $v1, 0x78D0($s2)
    ctx->pc = 0x1bb508u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 30928)));
    // 0x1bb50c: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1bb50cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1bb510: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1bb510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1bb514: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb518: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bb518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bb51c: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1bb51cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1bb520: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1bb520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1bb524: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BB524u;
    SET_GPR_U32(ctx, 31, 0x1BB52Cu);
    ctx->pc = 0x1BB528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB524u;
    // 0x1bb528: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BB524u, 0x1BB52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB52Cu;
label_1bb52c:
    // 0x1bb52c: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x1bb52cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x1bb530: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1bb530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1bb534: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1bb534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1bb538: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1bb538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1bb53c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bb53cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bb540: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb544: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1bb544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1bb548: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BB548u;
    SET_GPR_U32(ctx, 31, 0x1BB550u);
    ctx->pc = 0x1BB54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB548u;
    // 0x1bb54c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BB548u, 0x1BB550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB550u;
label_1bb550:
    // 0x1bb550: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1bb550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1bb554: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb558: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x1bb558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1bb55c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BB55Cu;
    SET_GPR_U32(ctx, 31, 0x1BB564u);
    ctx->pc = 0x1BB560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB55Cu;
    // 0x1bb560: 0x2303c  dsll32      $a2, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BB55Cu, 0x1BB564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB564u;
label_1bb564:
    // 0x1bb564: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb568: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bb568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb56c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BB56Cu;
    SET_GPR_U32(ctx, 31, 0x1BB574u);
    ctx->pc = 0x1BB570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB56Cu;
    // 0x1bb570: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BB56Cu, 0x1BB574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB574u;
label_1bb574:
    // 0x1bb574: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1BB574u;
    {
        const bool branch_taken_0x1bb574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB574u;
        // 0x1bb578: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb574) {
            ctx->pc = 0x1BB620u;
            goto label_1bb620;
        }
    }
    ctx->pc = 0x1BB57Cu;
    // 0x1bb57c: 0x0  nop
    ctx->pc = 0x1bb57cu;
    // NOP
label_1bb580:
    // 0x1bb580: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x1bb580u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1bb584: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x1bb584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x1bb588: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1bb588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1bb58c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1bb58cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bb590: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bb590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bb594: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1bb594u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1bb598: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1bb598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1bb59c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bb59cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bb5a0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x1bb5a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x1bb5a4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1bb5a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1bb5a8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bb5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bb5ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb5b0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BB5B0u;
    SET_GPR_U32(ctx, 31, 0x1BB5B8u);
    ctx->pc = 0x1BB5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB5B0u;
    // 0x1bb5b4: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BB5B0u, 0x1BB5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB5B8u;
label_1bb5b8:
    // 0x1bb5b8: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1bb5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1bb5bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb5c0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bb5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bb5c4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BB5C4u;
    SET_GPR_U32(ctx, 31, 0x1BB5CCu);
    ctx->pc = 0x1BB5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB5C4u;
    // 0x1bb5c8: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BB5C4u, 0x1BB5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB5CCu;
label_1bb5cc:
    // 0x1bb5cc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1bb5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bb5d0: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1bb5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1bb5d4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bb5d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bb5d8: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1bb5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1bb5dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1bb5dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1bb5e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb5e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb5e4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1bb5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1bb5e8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BB5E8u;
    SET_GPR_U32(ctx, 31, 0x1BB5F0u);
    ctx->pc = 0x1BB5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB5E8u;
    // 0x1bb5ec: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BB5E8u, 0x1BB5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB5F0u;
label_1bb5f0:
    // 0x1bb5f0: 0x3c020709  lui         $v0, 0x709
    ctx->pc = 0x1bb5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1801 << 16));
    // 0x1bb5f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb5f8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bb5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bb5fc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BB5FCu;
    SET_GPR_U32(ctx, 31, 0x1BB604u);
    ctx->pc = 0x1BB600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB5FCu;
    // 0x1bb600: 0x34461009  ori         $a2, $v0, 0x1009 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BB5FCu, 0x1BB604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB604u;
label_1bb604:
    // 0x1bb604: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1bb604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1bb608: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb60c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1bb60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1bb610: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1bb610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bb614: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BB614u;
    SET_GPR_U32(ctx, 31, 0x1BB61Cu);
    ctx->pc = 0x1BB618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB614u;
    // 0x1bb618: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BB614u, 0x1BB61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB61Cu;
label_1bb61c:
    // 0x1bb61c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1bb61cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1bb620:
    // 0x1bb620: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x1bb620u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1bb624: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1BB624u;
    {
        const bool branch_taken_0x1bb624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB624u;
        // 0x1bb628: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb624) {
            ctx->pc = 0x1BB580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bb580;
        }
    }
    ctx->pc = 0x1BB62Cu;
    // 0x1bb62c: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1BB62Cu;
    SET_GPR_U32(ctx, 31, 0x1BB634u);
    ctx->pc = 0x1BB630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB62Cu;
    // 0x1bb630: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1BB62Cu, 0x1BB634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB634u;
label_1bb634:
    // 0x1bb634: 0x0  nop
    ctx->pc = 0x1bb634u;
    // NOP
label_1bb638:
    // 0x1bb638: 0x240201bc  addiu       $v0, $zero, 0x1BC
    ctx->pc = 0x1bb638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 444));
    // 0x1bb63c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1bb63cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bb640: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb644: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1bb644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1bb648: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1bb648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1bb64c: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x1bb64cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x1bb650: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BB650u;
    SET_GPR_U32(ctx, 31, 0x1BB658u);
    ctx->pc = 0x1BB654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB650u;
    // 0x1bb654: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BB650u, 0x1BB658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB658u;
label_1bb658:
    // 0x1bb658: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1bb658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1bb65c: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x1bb65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1bb660: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bb660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bb664: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb668: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1bb668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1bb66c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BB66Cu;
    SET_GPR_U32(ctx, 31, 0x1BB674u);
    ctx->pc = 0x1BB670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB66Cu;
    // 0x1bb670: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BB66Cu, 0x1BB674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB674u;
label_1bb674:
    // 0x1bb674: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb678: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BB678u;
    SET_GPR_U32(ctx, 31, 0x1BB680u);
    ctx->pc = 0x1BB67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB678u;
    // 0x1bb67c: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BB678u, 0x1BB680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB680u;
label_1bb680:
    // 0x1bb680: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1bb680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bb684: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb688: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bb688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bb68c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1bb68cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1bb690: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x1bb690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x1bb694: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1bb694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1bb698: 0x628025  or          $s0, $v1, $v0
    ctx->pc = 0x1bb698u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1bb69c: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BB69Cu;
    SET_GPR_U32(ctx, 31, 0x1BB6A4u);
    ctx->pc = 0x1BB6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB69Cu;
    // 0x1bb6a0: 0x24050070  addiu       $a1, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BB69Cu, 0x1BB6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB6A4u;
label_1bb6a4:
    // 0x1bb6a4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1bb6a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bb6a8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1bb6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1bb6ac: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bb6acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bb6b0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1bb6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1bb6b4: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1bb6b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1bb6b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bb6b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bb6bc: 0x2032025  or          $a0, $s0, $v1
    ctx->pc = 0x1bb6bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1bb6c0: 0x9e4378d0  lwu         $v1, 0x78D0($s2)
    ctx->pc = 0x1bb6c0u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 30928)));
    // 0x1bb6c4: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1bb6c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1bb6c8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1bb6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1bb6cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb6d0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bb6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bb6d4: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1bb6d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1bb6d8: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1bb6d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1bb6dc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BB6DCu;
    SET_GPR_U32(ctx, 31, 0x1BB6E4u);
    ctx->pc = 0x1BB6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB6DCu;
    // 0x1bb6e0: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BB6DCu, 0x1BB6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB6E4u;
label_1bb6e4:
    // 0x1bb6e4: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1BB6E4u;
    SET_GPR_U32(ctx, 31, 0x1BB6ECu);
    ctx->pc = 0x1BB6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB6E4u;
    // 0x1bb6e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1BB6E4u, 0x1BB6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB6ECu;
label_1bb6ec:
    // 0x1bb6ec: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1bb6ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bb6f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb6f4: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x1bb6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x1bb6f8: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1bb6f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1bb6fc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1bb6fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bb700: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1bb700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1bb704: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1bb704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1bb708: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1bb708u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1bb70c: 0xa23025  or          $a2, $a1, $v0
    ctx->pc = 0x1bb70cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1bb710: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BB710u;
    SET_GPR_U32(ctx, 31, 0x1BB718u);
    ctx->pc = 0x1BB714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB710u;
    // 0x1bb714: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BB710u, 0x1BB718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB718u;
label_1bb718:
    // 0x1bb718: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb71c: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1bb71cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1bb720: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BB720u;
    SET_GPR_U32(ctx, 31, 0x1BB728u);
    ctx->pc = 0x1BB724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB720u;
    // 0x1bb724: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BB720u, 0x1BB728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB728u;
label_1bb728:
    // 0x1bb728: 0x8e280028  lw          $t0, 0x28($s1)
    ctx->pc = 0x1bb728u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1bb72c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bb72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb730: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x1bb730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1bb734: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb738: 0x81a02  srl         $v1, $t0, 8
    ctx->pc = 0x1bb738u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 8));
    // 0x1bb73c: 0x310600ff  andi        $a2, $t0, 0xFF
    ctx->pc = 0x1bb73cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x1bb740: 0x306700ff  andi        $a3, $v1, 0xFF
    ctx->pc = 0x1bb740u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bb744: 0x81c02  srl         $v1, $t0, 16
    ctx->pc = 0x1bb744u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x1bb748: 0x73a38  dsll        $a3, $a3, 8
    ctx->pc = 0x1bb748u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 8);
    // 0x1bb74c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1bb74cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bb750: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1bb750u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1bb754: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1bb754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1bb758: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x1bb758u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1bb75c: 0x81e02  srl         $v1, $t0, 24
    ctx->pc = 0x1bb75cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 24));
    // 0x1bb760: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bb760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bb764: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bb764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bb768: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1bb768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1bb76c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1bb76cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1bb770: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BB770u;
    SET_GPR_U32(ctx, 31, 0x1BB778u);
    ctx->pc = 0x1BB774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB770u;
    // 0x1bb774: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BB770u, 0x1BB778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB778u;
label_1bb778:
    // 0x1bb778: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb77c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bb77cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb780: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BB780u;
    SET_GPR_U32(ctx, 31, 0x1BB788u);
    ctx->pc = 0x1BB784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB780u;
    // 0x1bb784: 0x24060356  addiu       $a2, $zero, 0x356 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BB780u, 0x1BB788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB788u;
label_1bb788:
    // 0x1bb788: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1BB788u;
    {
        const bool branch_taken_0x1bb788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB788u;
        // 0x1bb78c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb788) {
            ctx->pc = 0x1BB848u;
            goto label_1bb848;
        }
    }
    ctx->pc = 0x1BB790u;
label_1bb790:
    // 0x1bb790: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x1bb790u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x1bb794: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x1bb794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x1bb798: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1bb798u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bb79c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bb79cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bb7a0: 0x9e4378c0  lwu         $v1, 0x78C0($s2)
    ctx->pc = 0x1bb7a0u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 30912)));
    // 0x1bb7a4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bb7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bb7a8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1bb7a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1bb7ac: 0x22c38  dsll        $a1, $v0, 16
    ctx->pc = 0x1bb7acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << 16);
    // 0x1bb7b0: 0x8e4278c4  lw          $v0, 0x78C4($s2)
    ctx->pc = 0x1bb7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30916)));
    // 0x1bb7b4: 0x853025  or          $a2, $a0, $a1
    ctx->pc = 0x1bb7b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1bb7b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb7b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb7bc: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1bb7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1bb7c0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bb7c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bb7c4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1bb7c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1bb7c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bb7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bb7cc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bb7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bb7d0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bb7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bb7d4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1bb7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1bb7d8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BB7D8u;
    SET_GPR_U32(ctx, 31, 0x1BB7E0u);
    ctx->pc = 0x1BB7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB7D8u;
    // 0x1bb7dc: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BB7D8u, 0x1BB7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB7E0u;
label_1bb7e0:
    // 0x1bb7e0: 0x3c02000c  lui         $v0, 0xC
    ctx->pc = 0x1bb7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12 << 16));
    // 0x1bb7e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb7e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb7e8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bb7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bb7ec: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BB7ECu;
    SET_GPR_U32(ctx, 31, 0x1BB7F4u);
    ctx->pc = 0x1BB7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB7ECu;
    // 0x1bb7f0: 0x3446000c  ori         $a2, $v0, 0xC (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BB7ECu, 0x1BB7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB7F4u;
label_1bb7f4:
    // 0x1bb7f4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1bb7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bb7f8: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1bb7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1bb7fc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bb7fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bb800: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1bb800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1bb804: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1bb804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1bb808: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb80c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1bb80cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1bb810: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BB810u;
    SET_GPR_U32(ctx, 31, 0x1BB818u);
    ctx->pc = 0x1BB814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB810u;
    // 0x1bb814: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BB810u, 0x1BB818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB818u;
label_1bb818:
    // 0x1bb818: 0x3c02070c  lui         $v0, 0x70C
    ctx->pc = 0x1bb818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1804 << 16));
    // 0x1bb81c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb81cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb820: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bb820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bb824: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BB824u;
    SET_GPR_U32(ctx, 31, 0x1BB82Cu);
    ctx->pc = 0x1BB828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB824u;
    // 0x1bb828: 0x3446100c  ori         $a2, $v0, 0x100C (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4108);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BB824u, 0x1BB82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB82Cu;
label_1bb82c:
    // 0x1bb82c: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x1bb82cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
    // 0x1bb830: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb834: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1bb834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1bb838: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1bb838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bb83c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BB83Cu;
    SET_GPR_U32(ctx, 31, 0x1BB844u);
    ctx->pc = 0x1BB840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB83Cu;
    // 0x1bb840: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BB83Cu, 0x1BB844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB844u;
label_1bb844:
    // 0x1bb844: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1bb844u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1bb848:
    // 0x1bb848: 0x8e4278c8  lw          $v0, 0x78C8($s2)
    ctx->pc = 0x1bb848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30920)));
    // 0x1bb84c: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x1bb84cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x1bb850: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1bb850u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1bb854: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x1BB854u;
    {
        const bool branch_taken_0x1bb854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB854u;
        // 0x1bb858: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb854) {
            ctx->pc = 0x1BB790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bb790;
        }
    }
    ctx->pc = 0x1BB85Cu;
    // 0x1bb85c: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1BB85Cu;
    SET_GPR_U32(ctx, 31, 0x1BB864u);
    ctx->pc = 0x1BB860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB85Cu;
    // 0x1bb860: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1BB85Cu, 0x1BB864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB864u;
label_1bb864:
    // 0x1bb864: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1bb864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1bb868: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb86c: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x1bb86cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1bb870: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BB870u;
    SET_GPR_U32(ctx, 31, 0x1BB878u);
    ctx->pc = 0x1BB874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB870u;
    // 0x1bb874: 0x2303c  dsll32      $a2, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BB870u, 0x1BB878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB878u;
label_1bb878:
    // 0x1bb878: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1bb878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bb87c: 0xc7ba0028  lwc1        $f26, 0x28($sp)
    ctx->pc = 0x1bb87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1bb880: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1bb880u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bb884: 0xc7b90024  lwc1        $f25, 0x24($sp)
    ctx->pc = 0x1bb884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1bb888: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1bb888u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bb88c: 0xc7b80020  lwc1        $f24, 0x20($sp)
    ctx->pc = 0x1bb88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1bb890: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1bb890u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bb894: 0xc7b7001c  lwc1        $f23, 0x1C($sp)
    ctx->pc = 0x1bb894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1bb898: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1bb898u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bb89c: 0xc7b60018  lwc1        $f22, 0x18($sp)
    ctx->pc = 0x1bb89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1bb8a0: 0xc7b50014  lwc1        $f21, 0x14($sp)
    ctx->pc = 0x1bb8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1bb8a4: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x1bb8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1bb8a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB8A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB8A8u;
        // 0x1bb8ac: 0x27bd0500  addiu       $sp, $sp, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1280));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB8A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB8B0u;
}
