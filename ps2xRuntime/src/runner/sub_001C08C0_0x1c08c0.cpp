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

// Function: sub_001C08C0
// Address: 0x1c08c0 - 0x1c11a0
void sub_001C08C0_0x1c08c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C08C0_0x1c08c0");
#endif

    switch (ctx->pc) {
        case 0x1c0904u: goto label_1c0904;
        case 0x1c0918u: goto label_1c0918;
        case 0x1c0928u: goto label_1c0928;
        case 0x1c0948u: goto label_1c0948;
        case 0x1c0958u: goto label_1c0958;
        case 0x1c0978u: goto label_1c0978;
        case 0x1c0988u: goto label_1c0988;
        case 0x1c09b8u: goto label_1c09b8;
        case 0x1c09dcu: goto label_1c09dc;
        case 0x1c09f4u: goto label_1c09f4;
        case 0x1c0a14u: goto label_1c0a14;
        case 0x1c0a38u: goto label_1c0a38;
        case 0x1c0a78u: goto label_1c0a78;
        case 0x1c0a8cu: goto label_1c0a8c;
        case 0x1c0ac4u: goto label_1c0ac4;
        case 0x1c0ae4u: goto label_1c0ae4;
        case 0x1c0af4u: goto label_1c0af4;
        case 0x1c0b04u: goto label_1c0b04;
        case 0x1c0b24u: goto label_1c0b24;
        case 0x1c0b34u: goto label_1c0b34;
        case 0x1c0b70u: goto label_1c0b70;
        case 0x1c0bb8u: goto label_1c0bb8;
        case 0x1c0bccu: goto label_1c0bcc;
        case 0x1c0bdcu: goto label_1c0bdc;
        case 0x1c0bf0u: goto label_1c0bf0;
        case 0x1c0c00u: goto label_1c0c00;
        case 0x1c0c20u: goto label_1c0c20;
        case 0x1c0c34u: goto label_1c0c34;
        case 0x1c0c44u: goto label_1c0c44;
        case 0x1c0c54u: goto label_1c0c54;
        case 0x1c0c70u: goto label_1c0c70;
        case 0x1c0c80u: goto label_1c0c80;
        case 0x1c0c90u: goto label_1c0c90;
        case 0x1c0cc8u: goto label_1c0cc8;
        case 0x1c0d10u: goto label_1c0d10;
        case 0x1c0d20u: goto label_1c0d20;
        case 0x1c0d30u: goto label_1c0d30;
        case 0x1c0d50u: goto label_1c0d50;
        case 0x1c0d70u: goto label_1c0d70;
        case 0x1c0d80u: goto label_1c0d80;
        case 0x1c0d94u: goto label_1c0d94;
        case 0x1c0da0u: goto label_1c0da0;
        case 0x1c0dc4u: goto label_1c0dc4;
        case 0x1c0e04u: goto label_1c0e04;
        case 0x1c0e20u: goto label_1c0e20;
        case 0x1c0e40u: goto label_1c0e40;
        case 0x1c0e60u: goto label_1c0e60;
        case 0x1c0e70u: goto label_1c0e70;
        case 0x1c0e80u: goto label_1c0e80;
        case 0x1c0eb0u: goto label_1c0eb0;
        case 0x1c0ec4u: goto label_1c0ec4;
        case 0x1c0ee8u: goto label_1c0ee8;
        case 0x1c0efcu: goto label_1c0efc;
        case 0x1c0f14u: goto label_1c0f14;
        case 0x1c0f34u: goto label_1c0f34;
        case 0x1c0f40u: goto label_1c0f40;
        case 0x1c0fdcu: goto label_1c0fdc;
        case 0x1c0fe8u: goto label_1c0fe8;
        case 0x1c100cu: goto label_1c100c;
        case 0x1c104cu: goto label_1c104c;
        case 0x1c1054u: goto label_1c1054;
        case 0x1c1080u: goto label_1c1080;
        case 0x1c1090u: goto label_1c1090;
        case 0x1c10a0u: goto label_1c10a0;
        case 0x1c10b0u: goto label_1c10b0;
        case 0x1c10f8u: goto label_1c10f8;
        case 0x1c110cu: goto label_1c110c;
        case 0x1c1130u: goto label_1c1130;
        case 0x1c1144u: goto label_1c1144;
        case 0x1c115cu: goto label_1c115c;
        default: break;
    }

    ctx->pc = 0x1c08c0u;

    // 0x1c08c0: 0x27bdfb60  addiu       $sp, $sp, -0x4A0
    ctx->pc = 0x1c08c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966112));
    // 0x1c08c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c08c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c08c8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1c08c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1c08cc: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x1c08ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c08d0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1c08d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1c08d4: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1c08d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1c08d8: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x1c08d8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c08dc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1c08dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1c08e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c08e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c08e4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1c08e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1c08e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c08e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1c08ec: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1c08ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c08f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c08f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c08f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c08f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c08f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c08f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c08fc: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1C08FCu;
    SET_GPR_U32(ctx, 31, 0x1C0904u);
    ctx->pc = 0x1C0900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C08FCu;
    // 0x1c0900: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1C08FCu, 0x1C0904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0904u;
label_1c0904:
    // 0x1c0904: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1c0904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1c0908: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c090c: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1c090cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1c0910: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0910u;
    SET_GPR_U32(ctx, 31, 0x1C0918u);
    ctx->pc = 0x1C0914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0910u;
    // 0x1c0914: 0x34460080  ori         $a2, $v0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0910u, 0x1C0918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0918u;
label_1c0918:
    // 0x1c0918: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c091c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c091cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0920: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0920u;
    SET_GPR_U32(ctx, 31, 0x1C0928u);
    ctx->pc = 0x1C0924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0920u;
    // 0x1c0924: 0x24060306  addiu       $a2, $zero, 0x306 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 774));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0920u, 0x1C0928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0928u;
label_1c0928:
    // 0x1c0928: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x1c0928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1c092c: 0x3c021f1f  lui         $v0, 0x1F1F
    ctx->pc = 0x1c092cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7967 << 16));
    // 0x1c0930: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c0930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c0934: 0x34421f1f  ori         $v0, $v0, 0x1F1F
    ctx->pc = 0x1c0934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7967);
    // 0x1c0938: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c093c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c093cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0940: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0940u;
    SET_GPR_U32(ctx, 31, 0x1C0948u);
    ctx->pc = 0x1C0944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0940u;
    // 0x1c0944: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0940u, 0x1C0948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0948u;
label_1c0948:
    // 0x1c0948: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c094c: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1c094cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c0950: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0950u;
    SET_GPR_U32(ctx, 31, 0x1C0958u);
    ctx->pc = 0x1C0954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0950u;
    // 0x1c0954: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0950u, 0x1C0958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0958u;
label_1c0958:
    // 0x1c0958: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c0958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c095c: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x1c095cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x1c0960: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c0960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c0964: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x1c0964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x1c0968: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c096c: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x1c096cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1c0970: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0970u;
    SET_GPR_U32(ctx, 31, 0x1C0978u);
    ctx->pc = 0x1C0974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0970u;
    // 0x1c0974: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0970u, 0x1C0978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0978u;
label_1c0978:
    // 0x1c0978: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c0978u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c097c: 0x2411003f  addiu       $s1, $zero, 0x3F
    ctx->pc = 0x1c097cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1c0980: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c0980u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0984: 0x0  nop
    ctx->pc = 0x1c0984u;
    // NOP
label_1c0988:
    // 0x1c0988: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x1c0988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1c098c: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x1c098cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1c0990: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1c0990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1c0994: 0x3c0200df  lui         $v0, 0xDF
    ctx->pc = 0x1c0994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)223 << 16));
    // 0x1c0998: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1c0998u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1c099c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1c099cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1c09a0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c09a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c09a4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1c09a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c09a8: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1c09a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1c09ac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c09acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c09b0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C09B0u;
    SET_GPR_U32(ctx, 31, 0x1C09B8u);
    ctx->pc = 0x1C09B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C09B0u;
    // 0x1c09b4: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C09B0u, 0x1C09B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C09B8u;
label_1c09b8:
    // 0x1c09b8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1c09b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c09bc: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1c09bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1c09c0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c09c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c09c4: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1c09c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1c09c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c09c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c09cc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c09ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c09d0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1c09d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c09d4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C09D4u;
    SET_GPR_U32(ctx, 31, 0x1C09DCu);
    ctx->pc = 0x1C09D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C09D4u;
    // 0x1c09d8: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C09D4u, 0x1C09DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C09DCu;
label_1c09dc:
    // 0x1c09dc: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x1c09dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
    // 0x1c09e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c09e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c09e4: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1c09e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1c09e8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1c09e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c09ec: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C09ECu;
    SET_GPR_U32(ctx, 31, 0x1C09F4u);
    ctx->pc = 0x1C09F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C09ECu;
    // 0x1c09f0: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C09ECu, 0x1C09F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C09F4u;
label_1c09f4:
    // 0x1c09f4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1c09f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1c09f8: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x1c09f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1c09fc: 0x2e420008  sltiu       $v0, $s2, 0x8
    ctx->pc = 0x1c09fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1c0a00: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1C0A00u;
    {
        const bool branch_taken_0x1c0a00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0A00u;
        // 0x1c0a04: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0a00) {
            ctx->pc = 0x1C0988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0988;
        }
    }
    ctx->pc = 0x1C0A08u;
    // 0x1c0a08: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0a0c: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1C0A0Cu;
    SET_GPR_U32(ctx, 31, 0x1C0A14u);
    ctx->pc = 0x1C0A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0A0Cu;
    // 0x1c0a10: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1C0A0Cu, 0x1C0A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0A14u;
label_1c0a14:
    // 0x1c0a14: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1c0a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c0a18: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0a1c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1c0a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1c0a20: 0x3c0203a2  lui         $v0, 0x3A2
    ctx->pc = 0x1c0a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)930 << 16));
    // 0x1c0a24: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x1c0a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x1c0a28: 0x34421800  ori         $v0, $v0, 0x1800
    ctx->pc = 0x1c0a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6144);
    // 0x1c0a2c: 0x628025  or          $s0, $v1, $v0
    ctx->pc = 0x1c0a2cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c0a30: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1C0A30u;
    SET_GPR_U32(ctx, 31, 0x1C0A38u);
    ctx->pc = 0x1C0A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0A30u;
    // 0x1c0a34: 0x240500e0  addiu       $a1, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1C0A30u, 0x1C0A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0A38u;
label_1c0a38:
    // 0x1c0a38: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1c0a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c0a3c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1c0a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c0a40: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1c0a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1c0a44: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c0a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c0a48: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1c0a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1c0a4c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c0a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c0a50: 0x2032025  or          $a0, $s0, $v1
    ctx->pc = 0x1c0a50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1c0a54: 0x9ea378d0  lwu         $v1, 0x78D0($s5)
    ctx->pc = 0x1c0a54u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 30928)));
    // 0x1c0a58: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1c0a58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1c0a5c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1c0a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1c0a60: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0a64: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c0a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c0a68: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1c0a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1c0a6c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1c0a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1c0a70: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0A70u;
    SET_GPR_U32(ctx, 31, 0x1C0A78u);
    ctx->pc = 0x1C0A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0A70u;
    // 0x1c0a74: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0A70u, 0x1C0A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0A78u;
label_1c0a78:
    // 0x1c0a78: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1c0a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1c0a7c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0a80: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1c0a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1c0a84: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0A84u;
    SET_GPR_U32(ctx, 31, 0x1C0A8Cu);
    ctx->pc = 0x1C0A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0A84u;
    // 0x1c0a88: 0x34460080  ori         $a2, $v0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0A84u, 0x1C0A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0A8Cu;
label_1c0a8c:
    // 0x1c0a8c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x1c0a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x1c0a90: 0x9ea678c0  lwu         $a2, 0x78C0($s5)
    ctx->pc = 0x1c0a90u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 30912)));
    // 0x1c0a94: 0x3443c00a  ori         $v1, $v0, 0xC00A
    ctx->pc = 0x1c0a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x1c0a98: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0a9c: 0x8ea278c4  lw          $v0, 0x78C4($s5)
    ctx->pc = 0x1c0a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30916)));
    // 0x1c0aa0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1c0aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1c0aa4: 0x63638  dsll        $a2, $a2, 24
    ctx->pc = 0x1c0aa4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 24);
    // 0x1c0aa8: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1c0aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1c0aac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c0aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c0ab0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c0ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c0ab4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c0ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c0ab8: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1c0ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x1c0abc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0ABCu;
    SET_GPR_U32(ctx, 31, 0x1C0AC4u);
    ctx->pc = 0x1C0AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0ABCu;
    // 0x1c0ac0: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0ABCu, 0x1C0AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0AC4u;
label_1c0ac4:
    // 0x1c0ac4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c0ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0ac8: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x1c0ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x1c0acc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c0accu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c0ad0: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x1c0ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x1c0ad4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0ad8: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x1c0ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1c0adc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0ADCu;
    SET_GPR_U32(ctx, 31, 0x1C0AE4u);
    ctx->pc = 0x1C0AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0ADCu;
    // 0x1c0ae0: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0ADCu, 0x1C0AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0AE4u;
label_1c0ae4:
    // 0x1c0ae4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0ae8: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1c0ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c0aec: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0AECu;
    SET_GPR_U32(ctx, 31, 0x1C0AF4u);
    ctx->pc = 0x1C0AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0AECu;
    // 0x1c0af0: 0x3c060005  lui         $a2, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0AECu, 0x1C0AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0AF4u;
label_1c0af4:
    // 0x1c0af4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0af8: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1c0af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1c0afc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0AFCu;
    SET_GPR_U32(ctx, 31, 0x1C0B04u);
    ctx->pc = 0x1C0B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0AFCu;
    // 0x1c0b00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0AFCu, 0x1C0B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0B04u;
label_1c0b04:
    // 0x1c0b04: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1c0b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c0b08: 0x3c021010  lui         $v0, 0x1010
    ctx->pc = 0x1c0b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4112 << 16));
    // 0x1c0b0c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c0b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c0b10: 0x34421010  ori         $v0, $v0, 0x1010
    ctx->pc = 0x1c0b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4112);
    // 0x1c0b14: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0b18: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c0b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0b1c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0B1Cu;
    SET_GPR_U32(ctx, 31, 0x1C0B24u);
    ctx->pc = 0x1C0B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0B1Cu;
    // 0x1c0b20: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0B1Cu, 0x1C0B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0B24u;
label_1c0b24:
    // 0x1c0b24: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0b28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c0b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0b2c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0B2Cu;
    SET_GPR_U32(ctx, 31, 0x1C0B34u);
    ctx->pc = 0x1C0B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0B2Cu;
    // 0x1c0b30: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0B2Cu, 0x1C0B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0B34u;
label_1c0b34:
    // 0x1c0b34: 0x1e1280  sll         $v0, $fp, 10
    ctx->pc = 0x1c0b34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 10));
    // 0x1c0b38: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c0b38u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0b3c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1c0b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c0b40: 0x2413003f  addiu       $s3, $zero, 0x3F
    ctx->pc = 0x1c0b40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1c0b44: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1c0b44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c0b48: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1c0b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1c0b4c: 0x34437000  ori         $v1, $v0, 0x7000
    ctx->pc = 0x1c0b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1c0b50: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1c0b50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1c0b54: 0x34028700  ori         $v0, $zero, 0x8700
    ctx->pc = 0x1c0b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34560);
    // 0x1c0b58: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1c0b58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1c0b5c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1c0b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1c0b60: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c0b60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0b64: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1c0b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1c0b68: 0x838825  or          $s1, $a0, $v1
    ctx->pc = 0x1c0b68u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c0b6c: 0x828025  or          $s0, $a0, $v0
    ctx->pc = 0x1c0b6cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_1c0b70:
    // 0x1c0b70: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x1c0b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1c0b74: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c0b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c0b78: 0x9ea678c0  lwu         $a2, 0x78C0($s5)
    ctx->pc = 0x1c0b78u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 30912)));
    // 0x1c0b7c: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1c0b7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1c0b80: 0x12203c  dsll32      $a0, $s2, 0
    ctx->pc = 0x1c0b80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1c0b84: 0x8ea278c4  lw          $v0, 0x78C4($s5)
    ctx->pc = 0x1c0b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30916)));
    // 0x1c0b88: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1c0b88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1c0b8c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1c0b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c0b90: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1c0b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1c0b94: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0b98: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1c0b98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1c0b9c: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1c0b9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1c0ba0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c0ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c0ba4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c0ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c0ba8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c0ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c0bac: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1c0bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1c0bb0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0BB0u;
    SET_GPR_U32(ctx, 31, 0x1C0BB8u);
    ctx->pc = 0x1C0BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0BB0u;
    // 0x1c0bb4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0BB0u, 0x1C0BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0BB8u;
label_1c0bb8:
    // 0x1c0bb8: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1c0bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1c0bbc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0bc0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c0bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c0bc4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0BC4u;
    SET_GPR_U32(ctx, 31, 0x1C0BCCu);
    ctx->pc = 0x1C0BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0BC4u;
    // 0x1c0bc8: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0BC4u, 0x1C0BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0BCCu;
label_1c0bcc:
    // 0x1c0bcc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0bd0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1c0bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c0bd4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0BD4u;
    SET_GPR_U32(ctx, 31, 0x1C0BDCu);
    ctx->pc = 0x1C0BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0BD4u;
    // 0x1c0bd8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0BD4u, 0x1C0BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0BDCu;
label_1c0bdc:
    // 0x1c0bdc: 0x3c020e09  lui         $v0, 0xE09
    ctx->pc = 0x1c0bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3593 << 16));
    // 0x1c0be0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0be4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c0be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c0be8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0BE8u;
    SET_GPR_U32(ctx, 31, 0x1C0BF0u);
    ctx->pc = 0x1C0BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0BE8u;
    // 0x1c0bec: 0x34462009  ori         $a2, $v0, 0x2009 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8201);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0BE8u, 0x1C0BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0BF0u;
label_1c0bf0:
    // 0x1c0bf0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0bf4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1c0bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c0bf8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0BF8u;
    SET_GPR_U32(ctx, 31, 0x1C0C00u);
    ctx->pc = 0x1C0BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0BF8u;
    // 0x1c0bfc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0BF8u, 0x1C0C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0C00u;
label_1c0c00:
    // 0x1c0c00: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1c0c00u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1c0c04: 0x26730040  addiu       $s3, $s3, 0x40
    ctx->pc = 0x1c0c04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x1c0c08: 0x2e820008  sltiu       $v0, $s4, 0x8
    ctx->pc = 0x1c0c08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1c0c0c: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x1C0C0Cu;
    {
        const bool branch_taken_0x1c0c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0C0Cu;
        // 0x1c0c10: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0c0c) {
            ctx->pc = 0x1C0B70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0b70;
        }
    }
    ctx->pc = 0x1C0C14u;
    // 0x1c0c14: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0c18: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1C0C18u;
    SET_GPR_U32(ctx, 31, 0x1C0C20u);
    ctx->pc = 0x1C0C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0C18u;
    // 0x1c0c1c: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1C0C18u, 0x1C0C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0C20u;
label_1c0c20:
    // 0x1c0c20: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1c0c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1c0c24: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0c28: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1c0c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1c0c2c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0C2Cu;
    SET_GPR_U32(ctx, 31, 0x1C0C34u);
    ctx->pc = 0x1C0C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0C2Cu;
    // 0x1c0c30: 0x34460080  ori         $a2, $v0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0C2Cu, 0x1C0C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0C34u;
label_1c0c34:
    // 0x1c0c34: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0c38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c0c38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0c3c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0C3Cu;
    SET_GPR_U32(ctx, 31, 0x1C0C44u);
    ctx->pc = 0x1C0C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0C3Cu;
    // 0x1c0c40: 0x24060346  addiu       $a2, $zero, 0x346 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 838));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0C3Cu, 0x1C0C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0C44u;
label_1c0c44:
    // 0x1c0c44: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0c48: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c0c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0c4c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0C4Cu;
    SET_GPR_U32(ctx, 31, 0x1C0C54u);
    ctx->pc = 0x1C0C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0C4Cu;
    // 0x1c0c50: 0x24062000  addiu       $a2, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0C4Cu, 0x1C0C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0C54u;
label_1c0c54:
    // 0x1c0c54: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1c0c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c0c58: 0x24020068  addiu       $v0, $zero, 0x68
    ctx->pc = 0x1c0c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x1c0c5c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c0c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c0c60: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0c64: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1c0c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1c0c68: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0C68u;
    SET_GPR_U32(ctx, 31, 0x1C0C70u);
    ctx->pc = 0x1C0C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0C68u;
    // 0x1c0c6c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0C68u, 0x1C0C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0C70u;
label_1c0c70:
    // 0x1c0c70: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0c74: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1c0c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c0c78: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0C78u;
    SET_GPR_U32(ctx, 31, 0x1C0C80u);
    ctx->pc = 0x1C0C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0C78u;
    // 0x1c0c7c: 0x3c060005  lui         $a2, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0C78u, 0x1C0C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0C80u;
label_1c0c80:
    // 0x1c0c80: 0x2bc10002  slti        $at, $fp, 0x2
    ctx->pc = 0x1c0c80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c0c84: 0x14200036  bnez        $at, . + 4 + (0x36 << 2)
    ctx->pc = 0x1C0C84u;
    {
        const bool branch_taken_0x1c0c84 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0C84u;
        // 0x1c0c88: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0c84) {
            ctx->pc = 0x1C0D60u;
            goto label_1c0d60;
        }
    }
    ctx->pc = 0x1C0C8Cu;
    // 0x1c0c8c: 0x241703ff  addiu       $s7, $zero, 0x3FF
    ctx->pc = 0x1c0c8cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
label_1c0c90:
    // 0x1c0c90: 0x17183c  dsll32      $v1, $s7, 0
    ctx->pc = 0x1c0c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) << (32 + 0));
    // 0x1c0c94: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1c0c94u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1c0c98: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1c0c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1c0c9c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c0c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c0ca0: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1c0ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1c0ca4: 0x628825  or          $s1, $v1, $v0
    ctx->pc = 0x1c0ca4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c0ca8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c0ca8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0cac: 0x34028700  ori         $v0, $zero, 0x8700
    ctx->pc = 0x1c0cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34560);
    // 0x1c0cb0: 0x2413003f  addiu       $s3, $zero, 0x3F
    ctx->pc = 0x1c0cb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1c0cb4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1c0cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1c0cb8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c0cb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0cbc: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1c0cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1c0cc0: 0x628025  or          $s0, $v1, $v0
    ctx->pc = 0x1c0cc0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c0cc4: 0x0  nop
    ctx->pc = 0x1c0cc4u;
    // NOP
label_1c0cc8:
    // 0x1c0cc8: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x1c0cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1c0ccc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c0cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c0cd0: 0x9ea678c0  lwu         $a2, 0x78C0($s5)
    ctx->pc = 0x1c0cd0u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 30912)));
    // 0x1c0cd4: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1c0cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1c0cd8: 0x12203c  dsll32      $a0, $s2, 0
    ctx->pc = 0x1c0cd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1c0cdc: 0x8ea278c4  lw          $v0, 0x78C4($s5)
    ctx->pc = 0x1c0cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30916)));
    // 0x1c0ce0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1c0ce0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1c0ce4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1c0ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c0ce8: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1c0ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1c0cec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0cf0: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1c0cf0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1c0cf4: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1c0cf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1c0cf8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c0cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c0cfc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c0cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c0d00: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c0d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c0d04: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1c0d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1c0d08: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0D08u;
    SET_GPR_U32(ctx, 31, 0x1C0D10u);
    ctx->pc = 0x1C0D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0D08u;
    // 0x1c0d0c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0D08u, 0x1C0D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0D10u;
label_1c0d10:
    // 0x1c0d10: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0d14: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1c0d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c0d18: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0D18u;
    SET_GPR_U32(ctx, 31, 0x1C0D20u);
    ctx->pc = 0x1C0D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0D18u;
    // 0x1c0d1c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0D18u, 0x1C0D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0D20u;
label_1c0d20:
    // 0x1c0d20: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0d24: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1c0d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c0d28: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0D28u;
    SET_GPR_U32(ctx, 31, 0x1C0D30u);
    ctx->pc = 0x1C0D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0D28u;
    // 0x1c0d2c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0D28u, 0x1C0D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0D30u;
label_1c0d30:
    // 0x1c0d30: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1c0d30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1c0d34: 0x26730040  addiu       $s3, $s3, 0x40
    ctx->pc = 0x1c0d34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x1c0d38: 0x2e820008  sltiu       $v0, $s4, 0x8
    ctx->pc = 0x1c0d38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1c0d3c: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1C0D3Cu;
    {
        const bool branch_taken_0x1c0d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0D3Cu;
        // 0x1c0d40: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0d3c) {
            ctx->pc = 0x1C0CC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0cc8;
        }
    }
    ctx->pc = 0x1C0D44u;
    // 0x1c0d44: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0d48: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1C0D48u;
    SET_GPR_U32(ctx, 31, 0x1C0D50u);
    ctx->pc = 0x1C0D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0D48u;
    // 0x1c0d4c: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1C0D48u, 0x1C0D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0D50u;
label_1c0d50:
    // 0x1c0d50: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1c0d50u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1c0d54: 0x2de102a  slt         $v0, $s6, $fp
    ctx->pc = 0x1c0d54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x1c0d58: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x1C0D58u;
    {
        const bool branch_taken_0x1c0d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0D58u;
        // 0x1c0d5c: 0x26f70400  addiu       $s7, $s7, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0d58) {
            ctx->pc = 0x1C0C90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0c90;
        }
    }
    ctx->pc = 0x1C0D60u;
label_1c0d60:
    // 0x1c0d60: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0d64: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1c0d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1c0d68: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0D68u;
    SET_GPR_U32(ctx, 31, 0x1C0D70u);
    ctx->pc = 0x1C0D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0D68u;
    // 0x1c0d6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0D68u, 0x1C0D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0D70u;
label_1c0d70:
    // 0x1c0d70: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0d74: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1c0d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c0d78: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0D78u;
    SET_GPR_U32(ctx, 31, 0x1C0D80u);
    ctx->pc = 0x1C0D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0D78u;
    // 0x1c0d7c: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0D78u, 0x1C0D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0D80u;
label_1c0d80:
    // 0x1c0d80: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1c0d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1c0d84: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0d88: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x1c0d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1c0d8c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0D8Cu;
    SET_GPR_U32(ctx, 31, 0x1C0D94u);
    ctx->pc = 0x1C0D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0D8Cu;
    // 0x1c0d90: 0x2303c  dsll32      $a2, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0D8Cu, 0x1C0D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0D94u;
label_1c0d94:
    // 0x1c0d94: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0d98: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1C0D98u;
    SET_GPR_U32(ctx, 31, 0x1C0DA0u);
    ctx->pc = 0x1C0D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0D98u;
    // 0x1c0d9c: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1C0D98u, 0x1C0DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0DA0u;
label_1c0da0:
    // 0x1c0da0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1c0da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c0da4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0da8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1c0da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1c0dac: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1c0dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1c0db0: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x1c0db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x1c0db4: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1c0db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1c0db8: 0x628025  or          $s0, $v1, $v0
    ctx->pc = 0x1c0db8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c0dbc: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1C0DBCu;
    SET_GPR_U32(ctx, 31, 0x1C0DC4u);
    ctx->pc = 0x1C0DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0DBCu;
    // 0x1c0dc0: 0x240501c0  addiu       $a1, $zero, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1C0DBCu, 0x1C0DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0DC4u;
label_1c0dc4:
    // 0x1c0dc4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1c0dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c0dc8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1c0dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c0dcc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1c0dccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1c0dd0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1c0dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c0dd4: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1c0dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1c0dd8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c0dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c0ddc: 0x2032025  or          $a0, $s0, $v1
    ctx->pc = 0x1c0ddcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1c0de0: 0x9ea378d0  lwu         $v1, 0x78D0($s5)
    ctx->pc = 0x1c0de0u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 30928)));
    // 0x1c0de4: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1c0de4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1c0de8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1c0de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1c0dec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0df0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c0df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c0df4: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1c0df4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1c0df8: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1c0df8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1c0dfc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0DFCu;
    SET_GPR_U32(ctx, 31, 0x1C0E04u);
    ctx->pc = 0x1C0E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0DFCu;
    // 0x1c0e00: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0DFCu, 0x1C0E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0E04u;
label_1c0e04:
    // 0x1c0e04: 0x3c0301c0  lui         $v1, 0x1C0
    ctx->pc = 0x1c0e04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)448 << 16));
    // 0x1c0e08: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x1c0e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x1c0e0c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c0e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c0e10: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0e14: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1c0e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1c0e18: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0E18u;
    SET_GPR_U32(ctx, 31, 0x1C0E20u);
    ctx->pc = 0x1C0E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0E18u;
    // 0x1c0e1c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0E18u, 0x1C0E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0E20u;
label_1c0e20:
    // 0x1c0e20: 0x24033fff  addiu       $v1, $zero, 0x3FFF
    ctx->pc = 0x1c0e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    // 0x1c0e24: 0x3c020208  lui         $v0, 0x208
    ctx->pc = 0x1c0e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)520 << 16));
    // 0x1c0e28: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c0e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c0e2c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1c0e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1c0e30: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0e34: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1c0e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1c0e38: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0E38u;
    SET_GPR_U32(ctx, 31, 0x1C0E40u);
    ctx->pc = 0x1C0E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0E38u;
    // 0x1c0e3c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0E38u, 0x1C0E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0E40u;
label_1c0e40:
    // 0x1c0e40: 0x24030700  addiu       $v1, $zero, 0x700
    ctx->pc = 0x1c0e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1792));
    // 0x1c0e44: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x1c0e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x1c0e48: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c0e48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c0e4c: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x1c0e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x1c0e50: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0e54: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1c0e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1c0e58: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0E58u;
    SET_GPR_U32(ctx, 31, 0x1C0E60u);
    ctx->pc = 0x1C0E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0E58u;
    // 0x1c0e5c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0E58u, 0x1C0E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0E60u;
label_1c0e60:
    // 0x1c0e60: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0e64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c0e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0e68: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0E68u;
    SET_GPR_U32(ctx, 31, 0x1C0E70u);
    ctx->pc = 0x1C0E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0E68u;
    // 0x1c0e6c: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0E68u, 0x1C0E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0E70u;
label_1c0e70:
    // 0x1c0e70: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c0e70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0e74: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x1c0e74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1c0e78: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c0e78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0e7c: 0x0  nop
    ctx->pc = 0x1c0e7cu;
    // NOP
label_1c0e80:
    // 0x1c0e80: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x1c0e80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1c0e84: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x1c0e84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1c0e88: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1c0e88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1c0e8c: 0x3c0201c0  lui         $v0, 0x1C0
    ctx->pc = 0x1c0e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)448 << 16));
    // 0x1c0e90: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1c0e90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1c0e94: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1c0e94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1c0e98: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c0e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c0e9c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1c0e9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c0ea0: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1c0ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1c0ea4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0ea8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0EA8u;
    SET_GPR_U32(ctx, 31, 0x1C0EB0u);
    ctx->pc = 0x1C0EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0EA8u;
    // 0x1c0eac: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0EA8u, 0x1C0EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0EB0u;
label_1c0eb0:
    // 0x1c0eb0: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1c0eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1c0eb4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0eb8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c0eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c0ebc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0EBCu;
    SET_GPR_U32(ctx, 31, 0x1C0EC4u);
    ctx->pc = 0x1C0EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0EBCu;
    // 0x1c0ec0: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0EBCu, 0x1C0EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0EC4u;
label_1c0ec4:
    // 0x1c0ec4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1c0ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c0ec8: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1c0ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1c0ecc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c0eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c0ed0: 0x34427080  ori         $v0, $v0, 0x7080
    ctx->pc = 0x1c0ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28800);
    // 0x1c0ed4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c0ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c0ed8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0edc: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1c0edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c0ee0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0EE0u;
    SET_GPR_U32(ctx, 31, 0x1C0EE8u);
    ctx->pc = 0x1C0EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0EE0u;
    // 0x1c0ee4: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0EE0u, 0x1C0EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0EE8u;
label_1c0ee8:
    // 0x1c0ee8: 0x3c021c09  lui         $v0, 0x1C09
    ctx->pc = 0x1c0ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7177 << 16));
    // 0x1c0eec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0ef0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c0ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c0ef4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0EF4u;
    SET_GPR_U32(ctx, 31, 0x1C0EFCu);
    ctx->pc = 0x1C0EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0EF4u;
    // 0x1c0ef8: 0x34462009  ori         $a2, $v0, 0x2009 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8201);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0EF4u, 0x1C0EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0EFCu;
label_1c0efc:
    // 0x1c0efc: 0x3c029500  lui         $v0, 0x9500
    ctx->pc = 0x1c0efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38144 << 16));
    // 0x1c0f00: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0f04: 0x34429080  ori         $v0, $v0, 0x9080
    ctx->pc = 0x1c0f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36992);
    // 0x1c0f08: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1c0f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c0f0c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0F0Cu;
    SET_GPR_U32(ctx, 31, 0x1C0F14u);
    ctx->pc = 0x1C0F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0F0Cu;
    // 0x1c0f10: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0F0Cu, 0x1C0F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0F14u;
label_1c0f14:
    // 0x1c0f14: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1c0f14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1c0f18: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x1c0f18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1c0f1c: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x1c0f1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1c0f20: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1C0F20u;
    {
        const bool branch_taken_0x1c0f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0F20u;
        // 0x1c0f24: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0f20) {
            ctx->pc = 0x1C0E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0e80;
        }
    }
    ctx->pc = 0x1C0F28u;
    // 0x1c0f28: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0f2c: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1C0F2Cu;
    SET_GPR_U32(ctx, 31, 0x1C0F34u);
    ctx->pc = 0x1C0F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0F2Cu;
    // 0x1c0f30: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1C0F2Cu, 0x1C0F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0F34u;
label_1c0f34:
    // 0x1c0f34: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1c0f34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0f38: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x1c0f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c0f3c: 0x0  nop
    ctx->pc = 0x1c0f3cu;
    // NOP
label_1c0f40:
    // 0x1c0f40: 0x3864001f  xori        $a0, $v1, 0x1F
    ctx->pc = 0x1c0f40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)31);
    // 0x1c0f44: 0x42e00  sll         $a1, $a0, 24
    ctx->pc = 0x1c0f44u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x1c0f48: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1c0f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c0f4c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1c0f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x1c0f50: 0x3884001f  xori        $a0, $a0, 0x1F
    ctx->pc = 0x1c0f50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)31);
    // 0x1c0f54: 0x42e00  sll         $a1, $a0, 24
    ctx->pc = 0x1c0f54u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x1c0f58: 0x24640002  addiu       $a0, $v1, 0x2
    ctx->pc = 0x1c0f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1c0f5c: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x1c0f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x1c0f60: 0x3884001f  xori        $a0, $a0, 0x1F
    ctx->pc = 0x1c0f60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)31);
    // 0x1c0f64: 0x42e00  sll         $a1, $a0, 24
    ctx->pc = 0x1c0f64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x1c0f68: 0x24640003  addiu       $a0, $v1, 0x3
    ctx->pc = 0x1c0f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1c0f6c: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x1c0f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x1c0f70: 0x3884001f  xori        $a0, $a0, 0x1F
    ctx->pc = 0x1c0f70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)31);
    // 0x1c0f74: 0x42e00  sll         $a1, $a0, 24
    ctx->pc = 0x1c0f74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x1c0f78: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x1c0f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1c0f7c: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x1c0f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x1c0f80: 0x3884001f  xori        $a0, $a0, 0x1F
    ctx->pc = 0x1c0f80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)31);
    // 0x1c0f84: 0x42e00  sll         $a1, $a0, 24
    ctx->pc = 0x1c0f84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x1c0f88: 0x24640005  addiu       $a0, $v1, 0x5
    ctx->pc = 0x1c0f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x1c0f8c: 0xac450010  sw          $a1, 0x10($v0)
    ctx->pc = 0x1c0f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 5));
    // 0x1c0f90: 0x3884001f  xori        $a0, $a0, 0x1F
    ctx->pc = 0x1c0f90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)31);
    // 0x1c0f94: 0x42e00  sll         $a1, $a0, 24
    ctx->pc = 0x1c0f94u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x1c0f98: 0x24640006  addiu       $a0, $v1, 0x6
    ctx->pc = 0x1c0f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x1c0f9c: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x1c0f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
    // 0x1c0fa0: 0x3884001f  xori        $a0, $a0, 0x1F
    ctx->pc = 0x1c0fa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)31);
    // 0x1c0fa4: 0x42e00  sll         $a1, $a0, 24
    ctx->pc = 0x1c0fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x1c0fa8: 0x24640007  addiu       $a0, $v1, 0x7
    ctx->pc = 0x1c0fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x1c0fac: 0xac450018  sw          $a1, 0x18($v0)
    ctx->pc = 0x1c0facu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 5));
    // 0x1c0fb0: 0x3884001f  xori        $a0, $a0, 0x1F
    ctx->pc = 0x1c0fb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)31);
    // 0x1c0fb4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1c0fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1c0fb8: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x1c0fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x1c0fbc: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x1c0fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
    // 0x1c0fc0: 0x2c640100  sltiu       $a0, $v1, 0x100
    ctx->pc = 0x1c0fc0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1c0fc4: 0x1480ffde  bnez        $a0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1C0FC4u;
    {
        const bool branch_taken_0x1c0fc4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0FC4u;
        // 0x1c0fc8: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0fc4) {
            ctx->pc = 0x1C0F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0f40;
        }
    }
    ctx->pc = 0x1C0FCCu;
    // 0x1c0fcc: 0x8ea578d0  lw          $a1, 0x78D0($s5)
    ctx->pc = 0x1c0fccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30928)));
    // 0x1c0fd0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0fd4: 0xc070468  jal         func_1C11A0
    ctx->pc = 0x1C0FD4u;
    SET_GPR_U32(ctx, 31, 0x1C0FDCu);
    ctx->pc = 0x1C0FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0FD4u;
    // 0x1c0fd8: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C11A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C11A0u, 0x1C0FD4u, 0x1C0FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0FDCu;
label_1c0fdc:
    // 0x1c0fdc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0fe0: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1C0FE0u;
    SET_GPR_U32(ctx, 31, 0x1C0FE8u);
    ctx->pc = 0x1C0FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0FE0u;
    // 0x1c0fe4: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1C0FE0u, 0x1C0FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0FE8u;
label_1c0fe8:
    // 0x1c0fe8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1c0fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c0fec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0ff0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1c0ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1c0ff4: 0x3c0201b2  lui         $v0, 0x1B2
    ctx->pc = 0x1c0ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)434 << 16));
    // 0x1c0ff8: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x1c0ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x1c0ffc: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1c0ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1c1000: 0x628025  or          $s0, $v1, $v0
    ctx->pc = 0x1c1000u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c1004: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1C1004u;
    SET_GPR_U32(ctx, 31, 0x1C100Cu);
    ctx->pc = 0x1C1008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1004u;
    // 0x1c1008: 0x240500e0  addiu       $a1, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1C1004u, 0x1C100Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C100Cu;
label_1c100c:
    // 0x1c100c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1c100cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c1010: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1c1010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c1014: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1c1014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1c1018: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1c1018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c101c: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1c101cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1c1020: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c1020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c1024: 0x2032025  or          $a0, $s0, $v1
    ctx->pc = 0x1c1024u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1c1028: 0x9ea378d0  lwu         $v1, 0x78D0($s5)
    ctx->pc = 0x1c1028u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 30928)));
    // 0x1c102c: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1c102cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1c1030: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1c1030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1c1034: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c1034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1038: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c1038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c103c: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1c103cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1c1040: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1c1040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1c1044: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C1044u;
    SET_GPR_U32(ctx, 31, 0x1C104Cu);
    ctx->pc = 0x1C1048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1044u;
    // 0x1c1048: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C1044u, 0x1C104Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C104Cu;
label_1c104c:
    // 0x1c104c: 0xc0705e8  jal         func_1C17A0
    ctx->pc = 0x1C104Cu;
    SET_GPR_U32(ctx, 31, 0x1C1054u);
    ctx->pc = 0x1C1050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C104Cu;
    // 0x1c1050: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C17A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C17A0u, 0x1C104Cu, 0x1C1054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1054u;
label_1c1054:
    // 0x1c1054: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x1c1054u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c1058: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c1058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c105c: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1c105cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x1c1060: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1c1060u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1c1064: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x1c1064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c1068: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1c1068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1c106c: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1c106cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1c1070: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c1070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c1074: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c1074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c1078: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C1078u;
    SET_GPR_U32(ctx, 31, 0x1C1080u);
    ctx->pc = 0x1C107Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1078u;
    // 0x1c107c: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C1078u, 0x1C1080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1080u;
label_1c1080:
    // 0x1c1080: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c1080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1084: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1c1084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c1088: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C1088u;
    SET_GPR_U32(ctx, 31, 0x1C1090u);
    ctx->pc = 0x1C108Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1088u;
    // 0x1c108c: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C1088u, 0x1C1090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1090u;
label_1c1090:
    // 0x1c1090: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c1090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1094: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1098: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C1098u;
    SET_GPR_U32(ctx, 31, 0x1C10A0u);
    ctx->pc = 0x1C109Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1098u;
    // 0x1c109c: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C1098u, 0x1C10A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C10A0u;
label_1c10a0:
    // 0x1c10a0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c10a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c10a4: 0x2411003f  addiu       $s1, $zero, 0x3F
    ctx->pc = 0x1c10a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1c10a8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c10a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c10ac: 0x0  nop
    ctx->pc = 0x1c10acu;
    // NOP
label_1c10b0:
    // 0x1c10b0: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x1c10b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1c10b4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c10b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c10b8: 0x9ea678c0  lwu         $a2, 0x78C0($s5)
    ctx->pc = 0x1c10b8u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 30912)));
    // 0x1c10bc: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1c10bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1c10c0: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x1c10c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1c10c4: 0x8ea278c4  lw          $v0, 0x78C4($s5)
    ctx->pc = 0x1c10c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30916)));
    // 0x1c10c8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1c10c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1c10cc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1c10ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c10d0: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1c10d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1c10d4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c10d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c10d8: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1c10d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1c10dc: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1c10dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1c10e0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c10e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c10e4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c10e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c10e8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c10e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c10ec: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1c10ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1c10f0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C10F0u;
    SET_GPR_U32(ctx, 31, 0x1C10F8u);
    ctx->pc = 0x1C10F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C10F0u;
    // 0x1c10f4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C10F0u, 0x1C10F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C10F8u;
label_1c10f8:
    // 0x1c10f8: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1c10f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1c10fc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c10fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1100: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c1100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c1104: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C1104u;
    SET_GPR_U32(ctx, 31, 0x1C110Cu);
    ctx->pc = 0x1C1108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1104u;
    // 0x1c1108: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C1104u, 0x1C110Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C110Cu;
label_1c110c:
    // 0x1c110c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1c110cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c1110: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1c1110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1c1114: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c1114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c1118: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1c1118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1c111c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c111cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c1120: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c1120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1124: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1c1124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c1128: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C1128u;
    SET_GPR_U32(ctx, 31, 0x1C1130u);
    ctx->pc = 0x1C112Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1128u;
    // 0x1c112c: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C1128u, 0x1C1130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1130u;
label_1c1130:
    // 0x1c1130: 0x3c020e09  lui         $v0, 0xE09
    ctx->pc = 0x1c1130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3593 << 16));
    // 0x1c1134: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c1134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1138: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c1138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c113c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C113Cu;
    SET_GPR_U32(ctx, 31, 0x1C1144u);
    ctx->pc = 0x1C1140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C113Cu;
    // 0x1c1140: 0x34462009  ori         $a2, $v0, 0x2009 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8201);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C113Cu, 0x1C1144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1144u;
label_1c1144:
    // 0x1c1144: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x1c1144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
    // 0x1c1148: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c1148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c114c: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1c114cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1c1150: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1c1150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c1154: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C1154u;
    SET_GPR_U32(ctx, 31, 0x1C115Cu);
    ctx->pc = 0x1C1158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1154u;
    // 0x1c1158: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C1154u, 0x1C115Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C115Cu;
label_1c115c:
    // 0x1c115c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1c115cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1c1160: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x1c1160u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1c1164: 0x2e430008  sltiu       $v1, $s2, 0x8
    ctx->pc = 0x1c1164u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1c1168: 0x1460ffd1  bnez        $v1, . + 4 + (-0x2F << 2)
    ctx->pc = 0x1C1168u;
    {
        const bool branch_taken_0x1c1168 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C116Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1168u;
        // 0x1c116c: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1168) {
            ctx->pc = 0x1C10B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c10b0;
        }
    }
    ctx->pc = 0x1C1170u;
    // 0x1c1170: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1c1170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c1174: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1c1174u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c1178: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1c1178u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c117c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1c117cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c1180: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1c1180u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c1184: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1c1184u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c1188: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c1188u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c118c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c118cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c1190: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c1190u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1194: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c1194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1198: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C119Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1198u;
        // 0x1c119c: 0x27bd04a0  addiu       $sp, $sp, 0x4A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C11A0u;
}
