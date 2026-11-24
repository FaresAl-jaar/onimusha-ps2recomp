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

// Function: sub_001B5190
// Address: 0x1b5190 - 0x1b6c78
void sub_001B5190_0x1b5190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5190_0x1b5190");
#endif

    switch (ctx->pc) {
        case 0x1b51c4u: goto label_1b51c4;
        case 0x1b51d8u: goto label_1b51d8;
        case 0x1b51fcu: goto label_1b51fc;
        case 0x1b520cu: goto label_1b520c;
        case 0x1b5230u: goto label_1b5230;
        case 0x1b523cu: goto label_1b523c;
        case 0x1b526cu: goto label_1b526c;
        case 0x1b52acu: goto label_1b52ac;
        case 0x1b52bcu: goto label_1b52bc;
        case 0x1b52ccu: goto label_1b52cc;
        case 0x1b52e4u: goto label_1b52e4;
        case 0x1b5338u: goto label_1b5338;
        case 0x1b5358u: goto label_1b5358;
        case 0x1b53a0u: goto label_1b53a0;
        case 0x1b53b4u: goto label_1b53b4;
        case 0x1b53c8u: goto label_1b53c8;
        case 0x1b53dcu: goto label_1b53dc;
        case 0x1b53f4u: goto label_1b53f4;
        case 0x1b541cu: goto label_1b541c;
        case 0x1b5428u: goto label_1b5428;
        case 0x1b543cu: goto label_1b543c;
        case 0x1b5460u: goto label_1b5460;
        case 0x1b54a0u: goto label_1b54a0;
        case 0x1b54c4u: goto label_1b54c4;
        case 0x1b54e4u: goto label_1b54e4;
        case 0x1b54f4u: goto label_1b54f4;
        case 0x1b5504u: goto label_1b5504;
        case 0x1b5514u: goto label_1b5514;
        case 0x1b5530u: goto label_1b5530;
        case 0x1b5540u: goto label_1b5540;
        case 0x1b5558u: goto label_1b5558;
        case 0x1b55acu: goto label_1b55ac;
        case 0x1b55c8u: goto label_1b55c8;
        case 0x1b5610u: goto label_1b5610;
        case 0x1b5624u: goto label_1b5624;
        case 0x1b5648u: goto label_1b5648;
        case 0x1b565cu: goto label_1b565c;
        case 0x1b5674u: goto label_1b5674;
        case 0x1b56a0u: goto label_1b56a0;
        case 0x1b56b4u: goto label_1b56b4;
        case 0x1b56c0u: goto label_1b56c0;
        case 0x1b56e4u: goto label_1b56e4;
        case 0x1b5724u: goto label_1b5724;
        case 0x1b5740u: goto label_1b5740;
        case 0x1b5760u: goto label_1b5760;
        case 0x1b5780u: goto label_1b5780;
        case 0x1b5790u: goto label_1b5790;
        case 0x1b57a0u: goto label_1b57a0;
        case 0x1b57c0u: goto label_1b57c0;
        case 0x1b57f0u: goto label_1b57f0;
        case 0x1b5804u: goto label_1b5804;
        case 0x1b5828u: goto label_1b5828;
        case 0x1b583cu: goto label_1b583c;
        case 0x1b5854u: goto label_1b5854;
        case 0x1b587cu: goto label_1b587c;
        case 0x1b5894u: goto label_1b5894;
        case 0x1b58a0u: goto label_1b58a0;
        case 0x1b58e8u: goto label_1b58e8;
        case 0x1b58f4u: goto label_1b58f4;
        case 0x1b5918u: goto label_1b5918;
        case 0x1b5958u: goto label_1b5958;
        case 0x1b5978u: goto label_1b5978;
        case 0x1b599cu: goto label_1b599c;
        case 0x1b59acu: goto label_1b59ac;
        case 0x1b59bcu: goto label_1b59bc;
        case 0x1b59ccu: goto label_1b59cc;
        case 0x1b59e8u: goto label_1b59e8;
        case 0x1b5a30u: goto label_1b5a30;
        case 0x1b5a44u: goto label_1b5a44;
        case 0x1b5a68u: goto label_1b5a68;
        case 0x1b5a7cu: goto label_1b5a7c;
        case 0x1b5a94u: goto label_1b5a94;
        case 0x1b5abcu: goto label_1b5abc;
        case 0x1b5adcu: goto label_1b5adc;
        case 0x1b5b04u: goto label_1b5b04;
        case 0x1b5b14u: goto label_1b5b14;
        case 0x1b5b20u: goto label_1b5b20;
        case 0x1b5b34u: goto label_1b5b34;
        case 0x1b5b58u: goto label_1b5b58;
        case 0x1b5b98u: goto label_1b5b98;
        case 0x1b5bbcu: goto label_1b5bbc;
        case 0x1b5bccu: goto label_1b5bcc;
        case 0x1b5bdcu: goto label_1b5bdc;
        case 0x1b5c30u: goto label_1b5c30;
        case 0x1b5c50u: goto label_1b5c50;
        case 0x1b5c98u: goto label_1b5c98;
        case 0x1b5cacu: goto label_1b5cac;
        case 0x1b5cd0u: goto label_1b5cd0;
        case 0x1b5ce4u: goto label_1b5ce4;
        case 0x1b5cfcu: goto label_1b5cfc;
        case 0x1b5d24u: goto label_1b5d24;
        case 0x1b5d48u: goto label_1b5d48;
        case 0x1b5d88u: goto label_1b5d88;
        case 0x1b5d90u: goto label_1b5d90;
        case 0x1b5dbcu: goto label_1b5dbc;
        case 0x1b5dccu: goto label_1b5dcc;
        case 0x1b5de8u: goto label_1b5de8;
        case 0x1b5df8u: goto label_1b5df8;
        case 0x1b5e28u: goto label_1b5e28;
        case 0x1b5e5cu: goto label_1b5e5c;
        case 0x1b5e80u: goto label_1b5e80;
        case 0x1b5ec8u: goto label_1b5ec8;
        case 0x1b5ed8u: goto label_1b5ed8;
        case 0x1b5efcu: goto label_1b5efc;
        case 0x1b5f10u: goto label_1b5f10;
        case 0x1b5f28u: goto label_1b5f28;
        case 0x1b5f64u: goto label_1b5f64;
        case 0x1b5f70u: goto label_1b5f70;
        case 0x1b5fb8u: goto label_1b5fb8;
        case 0x1b5fc0u: goto label_1b5fc0;
        case 0x1b5fe4u: goto label_1b5fe4;
        case 0x1b5ff4u: goto label_1b5ff4;
        case 0x1b6018u: goto label_1b6018;
        case 0x1b6024u: goto label_1b6024;
        case 0x1b6054u: goto label_1b6054;
        case 0x1b6094u: goto label_1b6094;
        case 0x1b60a4u: goto label_1b60a4;
        case 0x1b60b4u: goto label_1b60b4;
        case 0x1b6108u: goto label_1b6108;
        case 0x1b6128u: goto label_1b6128;
        case 0x1b6170u: goto label_1b6170;
        case 0x1b6184u: goto label_1b6184;
        case 0x1b6198u: goto label_1b6198;
        case 0x1b61acu: goto label_1b61ac;
        case 0x1b61c4u: goto label_1b61c4;
        case 0x1b61ecu: goto label_1b61ec;
        case 0x1b61f8u: goto label_1b61f8;
        case 0x1b620cu: goto label_1b620c;
        case 0x1b6230u: goto label_1b6230;
        case 0x1b6270u: goto label_1b6270;
        case 0x1b6294u: goto label_1b6294;
        case 0x1b62b4u: goto label_1b62b4;
        case 0x1b62c4u: goto label_1b62c4;
        case 0x1b62d4u: goto label_1b62d4;
        case 0x1b62e4u: goto label_1b62e4;
        case 0x1b6300u: goto label_1b6300;
        case 0x1b6310u: goto label_1b6310;
        case 0x1b6364u: goto label_1b6364;
        case 0x1b6380u: goto label_1b6380;
        case 0x1b63c8u: goto label_1b63c8;
        case 0x1b63dcu: goto label_1b63dc;
        case 0x1b6400u: goto label_1b6400;
        case 0x1b6414u: goto label_1b6414;
        case 0x1b642cu: goto label_1b642c;
        case 0x1b6458u: goto label_1b6458;
        case 0x1b6464u: goto label_1b6464;
        case 0x1b6488u: goto label_1b6488;
        case 0x1b64c8u: goto label_1b64c8;
        case 0x1b64ecu: goto label_1b64ec;
        case 0x1b6508u: goto label_1b6508;
        case 0x1b6528u: goto label_1b6528;
        case 0x1b6538u: goto label_1b6538;
        case 0x1b6548u: goto label_1b6548;
        case 0x1b655cu: goto label_1b655c;
        case 0x1b6578u: goto label_1b6578;
        case 0x1b6588u: goto label_1b6588;
        case 0x1b65a8u: goto label_1b65a8;
        case 0x1b65c8u: goto label_1b65c8;
        case 0x1b6610u: goto label_1b6610;
        case 0x1b6624u: goto label_1b6624;
        case 0x1b6648u: goto label_1b6648;
        case 0x1b665cu: goto label_1b665c;
        case 0x1b6674u: goto label_1b6674;
        case 0x1b66b4u: goto label_1b66b4;
        case 0x1b66d4u: goto label_1b66d4;
        case 0x1b66e8u: goto label_1b66e8;
        case 0x1b66f8u: goto label_1b66f8;
        case 0x1b6708u: goto label_1b6708;
        case 0x1b675cu: goto label_1b675c;
        case 0x1b676cu: goto label_1b676c;
        case 0x1b6788u: goto label_1b6788;
        case 0x1b67d0u: goto label_1b67d0;
        case 0x1b67f4u: goto label_1b67f4;
        case 0x1b680cu: goto label_1b680c;
        case 0x1b6848u: goto label_1b6848;
        case 0x1b686cu: goto label_1b686c;
        case 0x1b687cu: goto label_1b687c;
        case 0x1b6888u: goto label_1b6888;
        case 0x1b689cu: goto label_1b689c;
        case 0x1b68c0u: goto label_1b68c0;
        case 0x1b6900u: goto label_1b6900;
        case 0x1b6924u: goto label_1b6924;
        case 0x1b6934u: goto label_1b6934;
        case 0x1b6944u: goto label_1b6944;
        case 0x1b6960u: goto label_1b6960;
        case 0x1b69a8u: goto label_1b69a8;
        case 0x1b69bcu: goto label_1b69bc;
        case 0x1b69e0u: goto label_1b69e0;
        case 0x1b69f4u: goto label_1b69f4;
        case 0x1b6a0cu: goto label_1b6a0c;
        case 0x1b6a34u: goto label_1b6a34;
        case 0x1b6a58u: goto label_1b6a58;
        case 0x1b6a98u: goto label_1b6a98;
        case 0x1b6aa0u: goto label_1b6aa0;
        case 0x1b6accu: goto label_1b6acc;
        case 0x1b6adcu: goto label_1b6adc;
        case 0x1b6af8u: goto label_1b6af8;
        case 0x1b6b08u: goto label_1b6b08;
        case 0x1b6b38u: goto label_1b6b38;
        case 0x1b6b6cu: goto label_1b6b6c;
        case 0x1b6b90u: goto label_1b6b90;
        case 0x1b6bd8u: goto label_1b6bd8;
        case 0x1b6be8u: goto label_1b6be8;
        case 0x1b6c0cu: goto label_1b6c0c;
        case 0x1b6c20u: goto label_1b6c20;
        case 0x1b6c38u: goto label_1b6c38;
        default: break;
    }

    ctx->pc = 0x1b5190u;

    // 0x1b5190: 0x27bdf3a0  addiu       $sp, $sp, -0xC60
    ctx->pc = 0x1b5190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964128));
    // 0x1b5194: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b5194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b5198: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1b5198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1b519c: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x1b519cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1b51a0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b51a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b51a4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b51a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b51a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b51a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b51ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b51acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b51b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b51b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b51b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b51b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b51b8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b51b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b51bc: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1B51BCu;
    SET_GPR_U32(ctx, 31, 0x1B51C4u);
    ctx->pc = 0x1B51C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B51BCu;
    // 0x1b51c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1B51BCu, 0x1B51C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B51C4u;
label_1b51c4:
    // 0x1b51c4: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1b51c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1b51c8: 0x10400361  beqz        $v0, . + 4 + (0x361 << 2)
    ctx->pc = 0x1B51C8u;
    {
        const bool branch_taken_0x1b51c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B51CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B51C8u;
        // 0x1b51cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b51c8) {
            ctx->pc = 0x1B5F50u;
            goto label_1b5f50;
        }
    }
    ctx->pc = 0x1B51D0u;
    // 0x1b51d0: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1B51D0u;
    SET_GPR_U32(ctx, 31, 0x1B51D8u);
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1B51D0u, 0x1B51D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B51D8u;
label_1b51d8:
    // 0x1b51d8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1b51d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b51dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b51dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b51e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b51e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b51e4: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x1b51e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1b51e8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b51e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b51ec: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x1b51ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x1b51f0: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1b51f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1b51f4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B51F4u;
    SET_GPR_U32(ctx, 31, 0x1B51FCu);
    ctx->pc = 0x1B51F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B51F4u;
    // 0x1b51f8: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B51F4u, 0x1B51FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B51FCu;
label_1b51fc:
    // 0x1b51fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b51fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5200: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1b5200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1b5204: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B5204u;
    SET_GPR_U32(ctx, 31, 0x1B520Cu);
    ctx->pc = 0x1B5208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5204u;
    // 0x1b5208: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B5204u, 0x1B520Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B520Cu;
label_1b520c:
    // 0x1b520c: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x1b520cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x1b5210: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1b5210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1b5214: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b5214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b5218: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1b5218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1b521c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b521cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b5220: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5224: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1b5224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1b5228: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B5228u;
    SET_GPR_U32(ctx, 31, 0x1B5230u);
    ctx->pc = 0x1B522Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5228u;
    // 0x1b522c: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B5228u, 0x1B5230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5230u;
label_1b5230:
    // 0x1b5230: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5234: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B5234u;
    SET_GPR_U32(ctx, 31, 0x1B523Cu);
    ctx->pc = 0x1B5238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5234u;
    // 0x1b5238: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B5234u, 0x1B523Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B523Cu;
label_1b523c:
    // 0x1b523c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b523cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b5240: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x1b5240u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x1b5244: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b5244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b5248: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b5248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b524c: 0x236b8  dsll        $a2, $v0, 26
    ctx->pc = 0x1b524cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << 26);
    // 0x1b5250: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b5250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b5254: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1b5254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1b5258: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b525c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1b525cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b5260: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x1b5260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1b5264: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B5264u;
    SET_GPR_U32(ctx, 31, 0x1B526Cu);
    ctx->pc = 0x1B5268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5264u;
    // 0x1b5268: 0x469025  or          $s2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B5264u, 0x1B526Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B526Cu;
label_1b526c:
    // 0x1b526c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b526cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b5270: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b5270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b5274: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b5274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b5278: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b5278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b527c: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1b527cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1b5280: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b5280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b5284: 0x2432025  or          $a0, $s2, $v1
    ctx->pc = 0x1b5284u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x1b5288: 0x9e2378d0  lwu         $v1, 0x78D0($s1)
    ctx->pc = 0x1b5288u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 30928)));
    // 0x1b528c: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1b528cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1b5290: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b5290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1b5294: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5298: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b5298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b529c: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1b529cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1b52a0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b52a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b52a4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B52A4u;
    SET_GPR_U32(ctx, 31, 0x1B52ACu);
    ctx->pc = 0x1B52A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B52A4u;
    // 0x1b52a8: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B52A4u, 0x1B52ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B52ACu;
label_1b52ac:
    // 0x1b52ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b52acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b52b0: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1b52b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1b52b4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B52B4u;
    SET_GPR_U32(ctx, 31, 0x1B52BCu);
    ctx->pc = 0x1B52B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B52B4u;
    // 0x1b52b8: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B52B4u, 0x1B52BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B52BCu;
label_1b52bc:
    // 0x1b52bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b52bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b52c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b52c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b52c4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B52C4u;
    SET_GPR_U32(ctx, 31, 0x1B52CCu);
    ctx->pc = 0x1B52C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B52C4u;
    // 0x1b52c8: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B52C4u, 0x1B52CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B52CCu;
label_1b52cc:
    // 0x1b52cc: 0x34028080  ori         $v0, $zero, 0x8080
    ctx->pc = 0x1b52ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x1b52d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b52d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b52d4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1b52d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1b52d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b52d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b52dc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B52DCu;
    SET_GPR_U32(ctx, 31, 0x1B52E4u);
    ctx->pc = 0x1B52E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B52DCu;
    // 0x1b52e0: 0x34468080  ori         $a2, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B52DCu, 0x1B52E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B52E4u;
label_1b52e4:
    // 0x1b52e4: 0x8e2678c8  lw          $a2, 0x78C8($s1)
    ctx->pc = 0x1b52e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30920)));
    // 0x1b52e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b52e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b52ec: 0x9e2778cc  lwu         $a3, 0x78CC($s1)
    ctx->pc = 0x1b52ecu;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 30924)));
    // 0x1b52f0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1b52f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1b52f4: 0x8e2278c4  lw          $v0, 0x78C4($s1)
    ctx->pc = 0x1b52f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30916)));
    // 0x1b52f8: 0x9e2378c0  lwu         $v1, 0x78C0($s1)
    ctx->pc = 0x1b52f8u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 30912)));
    // 0x1b52fc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1b52fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1b5300: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1b5300u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1b5304: 0x73938  dsll        $a3, $a3, 4
    ctx->pc = 0x1b5304u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 4);
    // 0x1b5308: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1b5308u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1b530c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b530cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b5310: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b5310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b5314: 0x34e7000a  ori         $a3, $a3, 0xA
    ctx->pc = 0x1b5314u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)10);
    // 0x1b5318: 0x633b8  dsll        $a2, $a2, 14
    ctx->pc = 0x1b5318u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 14);
    // 0x1b531c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b531cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b5320: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1b5320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1b5324: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x1b5324u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x1b5328: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b5328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b532c: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1b532cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x1b5330: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B5330u;
    SET_GPR_U32(ctx, 31, 0x1B5338u);
    ctx->pc = 0x1B5334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5330u;
    // 0x1b5334: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B5330u, 0x1B5338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5338u;
label_1b5338:
    // 0x1b5338: 0x8e2278c8  lw          $v0, 0x78C8($s1)
    ctx->pc = 0x1b5338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30920)));
    // 0x1b533c: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x1b533cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x1b5340: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x1b5340u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b5344: 0x10200032  beqz        $at, . + 4 + (0x32 << 2)
    ctx->pc = 0x1B5344u;
    {
        const bool branch_taken_0x1b5344 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5344u;
        // 0x1b5348: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5344) {
            ctx->pc = 0x1B5410u;
            goto label_1b5410;
        }
    }
    ctx->pc = 0x1B534Cu;
    // 0x1b534c: 0x2413001f  addiu       $s3, $zero, 0x1F
    ctx->pc = 0x1b534cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1b5350: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b5350u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5354: 0x0  nop
    ctx->pc = 0x1b5354u;
    // NOP
label_1b5358:
    // 0x1b5358: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x1b5358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1b535c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b535cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b5360: 0x9e2678c0  lwu         $a2, 0x78C0($s1)
    ctx->pc = 0x1b5360u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 30912)));
    // 0x1b5364: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1b5364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1b5368: 0x12203c  dsll32      $a0, $s2, 0
    ctx->pc = 0x1b5368u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1b536c: 0x8e2278c4  lw          $v0, 0x78C4($s1)
    ctx->pc = 0x1b536cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30916)));
    // 0x1b5370: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1b5370u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1b5374: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1b5374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b5378: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1b5378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1b537c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b537cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5380: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1b5380u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1b5384: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1b5384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1b5388: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b5388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b538c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b538cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b5390: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b5390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b5394: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b5394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b5398: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B5398u;
    SET_GPR_U32(ctx, 31, 0x1B53A0u);
    ctx->pc = 0x1B539Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5398u;
    // 0x1b539c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B5398u, 0x1B53A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B53A0u;
label_1b53a0:
    // 0x1b53a0: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1b53a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1b53a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b53a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b53a8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b53a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b53ac: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B53ACu;
    SET_GPR_U32(ctx, 31, 0x1B53B4u);
    ctx->pc = 0x1B53B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B53ACu;
    // 0x1b53b0: 0x34460010  ori         $a2, $v0, 0x10 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B53ACu, 0x1B53B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B53B4u;
label_1b53b4:
    // 0x1b53b4: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1b53b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1b53b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b53b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b53bc: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1b53bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b53c0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B53C0u;
    SET_GPR_U32(ctx, 31, 0x1B53C8u);
    ctx->pc = 0x1B53C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B53C0u;
    // 0x1b53c4: 0x34467000  ori         $a2, $v0, 0x7000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B53C0u, 0x1B53C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B53C8u;
label_1b53c8:
    // 0x1b53c8: 0x3c020e10  lui         $v0, 0xE10
    ctx->pc = 0x1b53c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3600 << 16));
    // 0x1b53cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b53ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b53d0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b53d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b53d4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B53D4u;
    SET_GPR_U32(ctx, 31, 0x1B53DCu);
    ctx->pc = 0x1B53D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B53D4u;
    // 0x1b53d8: 0x34462010  ori         $a2, $v0, 0x2010 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B53D4u, 0x1B53DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B53DCu;
label_1b53dc:
    // 0x1b53dc: 0x34028700  ori         $v0, $zero, 0x8700
    ctx->pc = 0x1b53dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34560);
    // 0x1b53e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b53e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b53e4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1b53e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1b53e8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b53e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b53ec: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B53ECu;
    SET_GPR_U32(ctx, 31, 0x1B53F4u);
    ctx->pc = 0x1B53F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B53ECu;
    // 0x1b53f0: 0x34469000  ori         $a2, $v0, 0x9000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B53ECu, 0x1B53F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B53F4u;
label_1b53f4:
    // 0x1b53f4: 0x8e2278c8  lw          $v0, 0x78C8($s1)
    ctx->pc = 0x1b53f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30920)));
    // 0x1b53f8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1b53f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1b53fc: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x1b53fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x1b5400: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x1b5400u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x1b5404: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x1b5404u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b5408: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x1B5408u;
    {
        const bool branch_taken_0x1b5408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B540Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5408u;
        // 0x1b540c: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5408) {
            ctx->pc = 0x1B5358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b5358;
        }
    }
    ctx->pc = 0x1B5410u;
label_1b5410:
    // 0x1b5410: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5414: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1B5414u;
    SET_GPR_U32(ctx, 31, 0x1B541Cu);
    ctx->pc = 0x1B5418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5414u;
    // 0x1b5418: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1B5414u, 0x1B541Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B541Cu;
label_1b541c:
    // 0x1b541c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b541cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5420: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B5420u;
    SET_GPR_U32(ctx, 31, 0x1B5428u);
    ctx->pc = 0x1B5424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5420u;
    // 0x1b5424: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B5420u, 0x1B5428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5428u;
label_1b5428:
    // 0x1b5428: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b5428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b542c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b542cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5430: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b5430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b5434: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1B5434u;
    SET_GPR_U32(ctx, 31, 0x1B543Cu);
    ctx->pc = 0x1B5438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5434u;
    // 0x1b5438: 0x296b8  dsll        $s2, $v0, 26 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << 26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1B5434u, 0x1B543Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B543Cu;
label_1b543c:
    // 0x1b543c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1b543cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1b5440: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5444: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b5444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b5448: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1b5448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1b544c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b544cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b5450: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x1b5450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1b5454: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1b5454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b5458: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B5458u;
    SET_GPR_U32(ctx, 31, 0x1B5460u);
    ctx->pc = 0x1B545Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5458u;
    // 0x1b545c: 0x2429025  or          $s2, $s2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B5458u, 0x1B5460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5460u;
label_1b5460:
    // 0x1b5460: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b5460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b5464: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b5464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b5468: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b5468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b546c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b546cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b5470: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1b5470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1b5474: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b5474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b5478: 0x722025  or          $a0, $v1, $s2
    ctx->pc = 0x1b5478u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x1b547c: 0x9e2378d0  lwu         $v1, 0x78D0($s1)
    ctx->pc = 0x1b547cu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 30928)));
    // 0x1b5480: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1b5480u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1b5484: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b5484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1b5488: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b548c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b548cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b5490: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1b5490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1b5494: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b5494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b5498: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B5498u;
    SET_GPR_U32(ctx, 31, 0x1B54A0u);
    ctx->pc = 0x1B549Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5498u;
    // 0x1b549c: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B5498u, 0x1B54A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B54A0u;
label_1b54a0:
    // 0x1b54a0: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x1b54a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x1b54a4: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1b54a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1b54a8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b54a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b54ac: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1b54acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1b54b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b54b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b54b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b54b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b54b8: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1b54b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1b54bc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B54BCu;
    SET_GPR_U32(ctx, 31, 0x1B54C4u);
    ctx->pc = 0x1B54C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B54BCu;
    // 0x1b54c0: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B54BCu, 0x1B54C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B54C4u;
label_1b54c4:
    // 0x1b54c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b54c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b54c8: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x1b54c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x1b54cc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b54ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b54d0: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x1b54d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x1b54d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b54d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b54d8: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x1b54d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1b54dc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B54DCu;
    SET_GPR_U32(ctx, 31, 0x1B54E4u);
    ctx->pc = 0x1B54E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B54DCu;
    // 0x1b54e0: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B54DCu, 0x1B54E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B54E4u;
label_1b54e4:
    // 0x1b54e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b54e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b54e8: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1b54e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1b54ec: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B54ECu;
    SET_GPR_U32(ctx, 31, 0x1B54F4u);
    ctx->pc = 0x1B54F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B54ECu;
    // 0x1b54f0: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B54ECu, 0x1B54F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B54F4u;
label_1b54f4:
    // 0x1b54f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b54f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b54f8: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1b54f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1b54fc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B54FCu;
    SET_GPR_U32(ctx, 31, 0x1B5504u);
    ctx->pc = 0x1B5500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B54FCu;
    // 0x1b5500: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B54FCu, 0x1B5504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5504u;
label_1b5504:
    // 0x1b5504: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5508: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x1b5508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1b550c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B550Cu;
    SET_GPR_U32(ctx, 31, 0x1B5514u);
    ctx->pc = 0x1B5510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B550Cu;
    // 0x1b5510: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B550Cu, 0x1B5514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5514u;
label_1b5514:
    // 0x1b5514: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1b5514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b5518: 0x240200a1  addiu       $v0, $zero, 0xA1
    ctx->pc = 0x1b5518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x1b551c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b551cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b5520: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5524: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1b5524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1b5528: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B5528u;
    SET_GPR_U32(ctx, 31, 0x1B5530u);
    ctx->pc = 0x1B552Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5528u;
    // 0x1b552c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B5528u, 0x1B5530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5530u;
label_1b5530:
    // 0x1b5530: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5534: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b5534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5538: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B5538u;
    SET_GPR_U32(ctx, 31, 0x1B5540u);
    ctx->pc = 0x1B553Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5538u;
    // 0x1b553c: 0x24060356  addiu       $a2, $zero, 0x356 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B5538u, 0x1B5540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5540u;
label_1b5540:
    // 0x1b5540: 0x34028080  ori         $v0, $zero, 0x8080
    ctx->pc = 0x1b5540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x1b5544: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5548: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1b5548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1b554c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b554cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b5550: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B5550u;
    SET_GPR_U32(ctx, 31, 0x1B5558u);
    ctx->pc = 0x1B5554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5550u;
    // 0x1b5554: 0x34468080  ori         $a2, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B5550u, 0x1B5558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5558u;
label_1b5558:
    // 0x1b5558: 0x8e2678c8  lw          $a2, 0x78C8($s1)
    ctx->pc = 0x1b5558u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30920)));
    // 0x1b555c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b555cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5560: 0x9e2778cc  lwu         $a3, 0x78CC($s1)
    ctx->pc = 0x1b5560u;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 30924)));
    // 0x1b5564: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1b5564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1b5568: 0x8e2278c4  lw          $v0, 0x78C4($s1)
    ctx->pc = 0x1b5568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30916)));
    // 0x1b556c: 0x9e2378c0  lwu         $v1, 0x78C0($s1)
    ctx->pc = 0x1b556cu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 30912)));
    // 0x1b5570: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1b5570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1b5574: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1b5574u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1b5578: 0x73938  dsll        $a3, $a3, 4
    ctx->pc = 0x1b5578u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 4);
    // 0x1b557c: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1b557cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1b5580: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b5580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b5584: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b5584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b5588: 0x34e7000a  ori         $a3, $a3, 0xA
    ctx->pc = 0x1b5588u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)10);
    // 0x1b558c: 0x633b8  dsll        $a2, $a2, 14
    ctx->pc = 0x1b558cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 14);
    // 0x1b5590: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b5590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b5594: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1b5594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1b5598: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x1b5598u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x1b559c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b559cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b55a0: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1b55a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x1b55a4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B55A4u;
    SET_GPR_U32(ctx, 31, 0x1B55ACu);
    ctx->pc = 0x1B55A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B55A4u;
    // 0x1b55a8: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B55A4u, 0x1B55ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B55ACu;
label_1b55ac:
    // 0x1b55ac: 0x8e2278c8  lw          $v0, 0x78C8($s1)
    ctx->pc = 0x1b55acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30920)));
    // 0x1b55b0: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x1b55b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x1b55b4: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x1b55b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b55b8: 0x10200035  beqz        $at, . + 4 + (0x35 << 2)
    ctx->pc = 0x1B55B8u;
    {
        const bool branch_taken_0x1b55b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B55BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B55B8u;
        // 0x1b55bc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b55b8) {
            ctx->pc = 0x1B5690u;
            goto label_1b5690;
        }
    }
    ctx->pc = 0x1B55C0u;
    // 0x1b55c0: 0x2413001f  addiu       $s3, $zero, 0x1F
    ctx->pc = 0x1b55c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1b55c4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b55c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b55c8:
    // 0x1b55c8: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x1b55c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1b55cc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b55ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b55d0: 0x9e2678c0  lwu         $a2, 0x78C0($s1)
    ctx->pc = 0x1b55d0u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 30912)));
    // 0x1b55d4: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1b55d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1b55d8: 0x12203c  dsll32      $a0, $s2, 0
    ctx->pc = 0x1b55d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1b55dc: 0x8e2278c4  lw          $v0, 0x78C4($s1)
    ctx->pc = 0x1b55dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30916)));
    // 0x1b55e0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1b55e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1b55e4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1b55e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b55e8: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1b55e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1b55ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b55ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b55f0: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1b55f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1b55f4: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1b55f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1b55f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b55f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b55fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b55fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b5600: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b5600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b5604: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b5604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b5608: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B5608u;
    SET_GPR_U32(ctx, 31, 0x1B5610u);
    ctx->pc = 0x1B560Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5608u;
    // 0x1b560c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B5608u, 0x1B5610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5610u;
label_1b5610:
    // 0x1b5610: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1b5610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1b5614: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5618: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b5618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b561c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B561Cu;
    SET_GPR_U32(ctx, 31, 0x1B5624u);
    ctx->pc = 0x1B5620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B561Cu;
    // 0x1b5620: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B561Cu, 0x1B5624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5624u;
label_1b5624:
    // 0x1b5624: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b5624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b5628: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1b5628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1b562c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b562cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b5630: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1b5630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1b5634: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b5634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b5638: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b563c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1b563cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b5640: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B5640u;
    SET_GPR_U32(ctx, 31, 0x1B5648u);
    ctx->pc = 0x1B5644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5640u;
    // 0x1b5644: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B5640u, 0x1B5648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5648u;
label_1b5648:
    // 0x1b5648: 0x3c020e09  lui         $v0, 0xE09
    ctx->pc = 0x1b5648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3593 << 16));
    // 0x1b564c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b564cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5650: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b5650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b5654: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B5654u;
    SET_GPR_U32(ctx, 31, 0x1B565Cu);
    ctx->pc = 0x1B5658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5654u;
    // 0x1b5658: 0x34462009  ori         $a2, $v0, 0x2009 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8201);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B5654u, 0x1B565Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B565Cu;
label_1b565c:
    // 0x1b565c: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x1b565cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
    // 0x1b5660: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5664: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1b5664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1b5668: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b5668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b566c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B566Cu;
    SET_GPR_U32(ctx, 31, 0x1B5674u);
    ctx->pc = 0x1B5670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B566Cu;
    // 0x1b5670: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B566Cu, 0x1B5674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5674u;
label_1b5674:
    // 0x1b5674: 0x8e2278c8  lw          $v0, 0x78C8($s1)
    ctx->pc = 0x1b5674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30920)));
    // 0x1b5678: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1b5678u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1b567c: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x1b567cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x1b5680: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x1b5680u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x1b5684: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x1b5684u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b5688: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x1B5688u;
    {
        const bool branch_taken_0x1b5688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B568Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5688u;
        // 0x1b568c: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5688) {
            ctx->pc = 0x1B55C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b55c8;
        }
    }
    ctx->pc = 0x1B5690u;
label_1b5690:
    // 0x1b5690: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5694: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x1b5694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1b5698: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B5698u;
    SET_GPR_U32(ctx, 31, 0x1B56A0u);
    ctx->pc = 0x1B569Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5698u;
    // 0x1b569c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B5698u, 0x1B56A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B56A0u;
label_1b56a0:
    // 0x1b56a0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1b56a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1b56a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b56a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b56a8: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x1b56a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1b56ac: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B56ACu;
    SET_GPR_U32(ctx, 31, 0x1B56B4u);
    ctx->pc = 0x1B56B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B56ACu;
    // 0x1b56b0: 0x2303c  dsll32      $a2, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B56ACu, 0x1B56B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B56B4u;
label_1b56b4:
    // 0x1b56b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b56b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b56b8: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B56B8u;
    SET_GPR_U32(ctx, 31, 0x1B56C0u);
    ctx->pc = 0x1B56BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B56B8u;
    // 0x1b56bc: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B56B8u, 0x1B56C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B56C0u;
label_1b56c0:
    // 0x1b56c0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b56c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b56c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b56c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b56c8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b56c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b56cc: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1b56ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1b56d0: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x1b56d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x1b56d4: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1b56d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1b56d8: 0x629025  or          $s2, $v1, $v0
    ctx->pc = 0x1b56d8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b56dc: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B56DCu;
    SET_GPR_U32(ctx, 31, 0x1B56E4u);
    ctx->pc = 0x1B56E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B56DCu;
    // 0x1b56e0: 0x240501c0  addiu       $a1, $zero, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B56DCu, 0x1B56E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B56E4u;
label_1b56e4:
    // 0x1b56e4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b56e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b56e8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b56e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b56ec: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b56ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b56f0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1b56f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b56f4: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1b56f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1b56f8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b56f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b56fc: 0x2432025  or          $a0, $s2, $v1
    ctx->pc = 0x1b56fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x1b5700: 0x9e2378d0  lwu         $v1, 0x78D0($s1)
    ctx->pc = 0x1b5700u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 30928)));
    // 0x1b5704: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1b5704u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1b5708: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b5708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1b570c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b570cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5710: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b5710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b5714: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1b5714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1b5718: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b5718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b571c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B571Cu;
    SET_GPR_U32(ctx, 31, 0x1B5724u);
    ctx->pc = 0x1B5720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B571Cu;
    // 0x1b5720: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B571Cu, 0x1B5724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5724u;
label_1b5724:
    // 0x1b5724: 0x3c0301bf  lui         $v1, 0x1BF
    ctx->pc = 0x1b5724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)447 << 16));
    // 0x1b5728: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x1b5728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x1b572c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b572cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b5730: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5734: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1b5734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1b5738: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B5738u;
    SET_GPR_U32(ctx, 31, 0x1B5740u);
    ctx->pc = 0x1B573Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5738u;
    // 0x1b573c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B5738u, 0x1B5740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5740u;
label_1b5740:
    // 0x1b5740: 0x24033fff  addiu       $v1, $zero, 0x3FFF
    ctx->pc = 0x1b5740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    // 0x1b5744: 0x3c020208  lui         $v0, 0x208
    ctx->pc = 0x1b5744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)520 << 16));
    // 0x1b5748: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b5748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b574c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1b574cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1b5750: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5754: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1b5754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1b5758: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B5758u;
    SET_GPR_U32(ctx, 31, 0x1B5760u);
    ctx->pc = 0x1B575Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5758u;
    // 0x1b575c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B5758u, 0x1B5760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5760u;
label_1b5760:
    // 0x1b5760: 0x240306fc  addiu       $v1, $zero, 0x6FC
    ctx->pc = 0x1b5760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1788));
    // 0x1b5764: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x1b5764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x1b5768: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b5768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b576c: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x1b576cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x1b5770: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5774: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1b5774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1b5778: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B5778u;
    SET_GPR_U32(ctx, 31, 0x1B5780u);
    ctx->pc = 0x1B577Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5778u;
    // 0x1b577c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B5778u, 0x1B5780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5780u;
label_1b5780:
    // 0x1b5780: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5784: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b5784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5788: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B5788u;
    SET_GPR_U32(ctx, 31, 0x1B5790u);
    ctx->pc = 0x1B578Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5788u;
    // 0x1b578c: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B5788u, 0x1B5790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5790u;
label_1b5790:
    // 0x1b5790: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5794: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1b5794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1b5798: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B5798u;
    SET_GPR_U32(ctx, 31, 0x1B57A0u);
    ctx->pc = 0x1B579Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5798u;
    // 0x1b579c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B5798u, 0x1B57A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B57A0u;
label_1b57a0:
    // 0x1b57a0: 0x8e2278c8  lw          $v0, 0x78C8($s1)
    ctx->pc = 0x1b57a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30920)));
    // 0x1b57a4: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x1b57a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x1b57a8: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x1b57a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b57ac: 0x10200030  beqz        $at, . + 4 + (0x30 << 2)
    ctx->pc = 0x1B57ACu;
    {
        const bool branch_taken_0x1b57ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B57B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B57ACu;
        // 0x1b57b0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b57ac) {
            ctx->pc = 0x1B5870u;
            goto label_1b5870;
        }
    }
    ctx->pc = 0x1B57B4u;
    // 0x1b57b4: 0x2413001f  addiu       $s3, $zero, 0x1F
    ctx->pc = 0x1b57b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1b57b8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b57b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b57bc: 0x0  nop
    ctx->pc = 0x1b57bcu;
    // NOP
label_1b57c0:
    // 0x1b57c0: 0x13183c  dsll32      $v1, $s3, 0
    ctx->pc = 0x1b57c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1b57c4: 0x12203c  dsll32      $a0, $s2, 0
    ctx->pc = 0x1b57c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1b57c8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b57c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b57cc: 0x3c0201c0  lui         $v0, 0x1C0
    ctx->pc = 0x1b57ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)448 << 16));
    // 0x1b57d0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1b57d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1b57d4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1b57d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1b57d8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b57d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b57dc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1b57dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b57e0: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1b57e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1b57e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b57e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b57e8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B57E8u;
    SET_GPR_U32(ctx, 31, 0x1B57F0u);
    ctx->pc = 0x1B57ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B57E8u;
    // 0x1b57ec: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B57E8u, 0x1B57F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B57F0u;
label_1b57f0:
    // 0x1b57f0: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1b57f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1b57f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b57f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b57f8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b57f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b57fc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B57FCu;
    SET_GPR_U32(ctx, 31, 0x1B5804u);
    ctx->pc = 0x1B5800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B57FCu;
    // 0x1b5800: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B57FCu, 0x1B5804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5804u;
label_1b5804:
    // 0x1b5804: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b5804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b5808: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1b5808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1b580c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b580cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b5810: 0x34427080  ori         $v0, $v0, 0x7080
    ctx->pc = 0x1b5810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28800);
    // 0x1b5814: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b5814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b5818: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b581c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1b581cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b5820: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B5820u;
    SET_GPR_U32(ctx, 31, 0x1B5828u);
    ctx->pc = 0x1B5824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5820u;
    // 0x1b5824: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B5820u, 0x1B5828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5828u;
label_1b5828:
    // 0x1b5828: 0x3c021c09  lui         $v0, 0x1C09
    ctx->pc = 0x1b5828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7177 << 16));
    // 0x1b582c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b582cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5830: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b5830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b5834: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B5834u;
    SET_GPR_U32(ctx, 31, 0x1B583Cu);
    ctx->pc = 0x1B5838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5834u;
    // 0x1b5838: 0x34462009  ori         $a2, $v0, 0x2009 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8201);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B5834u, 0x1B583Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B583Cu;
label_1b583c:
    // 0x1b583c: 0x3c029500  lui         $v0, 0x9500
    ctx->pc = 0x1b583cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38144 << 16));
    // 0x1b5840: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5844: 0x34429080  ori         $v0, $v0, 0x9080
    ctx->pc = 0x1b5844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36992);
    // 0x1b5848: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b5848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b584c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B584Cu;
    SET_GPR_U32(ctx, 31, 0x1B5854u);
    ctx->pc = 0x1B5850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B584Cu;
    // 0x1b5850: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B584Cu, 0x1B5854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5854u;
label_1b5854:
    // 0x1b5854: 0x8e2278c8  lw          $v0, 0x78C8($s1)
    ctx->pc = 0x1b5854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30920)));
    // 0x1b5858: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1b5858u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1b585c: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x1b585cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x1b5860: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x1b5860u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x1b5864: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x1b5864u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b5868: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1B5868u;
    {
        const bool branch_taken_0x1b5868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B586Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5868u;
        // 0x1b586c: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5868) {
            ctx->pc = 0x1B57C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b57c0;
        }
    }
    ctx->pc = 0x1B5870u;
label_1b5870:
    // 0x1b5870: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5874: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1B5874u;
    SET_GPR_U32(ctx, 31, 0x1B587Cu);
    ctx->pc = 0x1B5878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5874u;
    // 0x1b5878: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1B5874u, 0x1B587Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B587Cu;
label_1b587c:
    // 0x1b587c: 0x8e080040  lw          $t0, 0x40($s0)
    ctx->pc = 0x1b587cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1b5880: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5884: 0x27a50460  addiu       $a1, $sp, 0x460
    ctx->pc = 0x1b5884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
    // 0x1b5888: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x1b5888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1b588c: 0xc0706f0  jal         func_1C1BC0
    ctx->pc = 0x1B588Cu;
    SET_GPR_U32(ctx, 31, 0x1B5894u);
    ctx->pc = 0x1B5890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B588Cu;
    // 0x1b5890: 0x26070030  addiu       $a3, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1BC0u, 0x1B588Cu, 0x1B5894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5894u;
label_1b5894:
    // 0x1b5894: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b5894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5898: 0x27a40860  addiu       $a0, $sp, 0x860
    ctx->pc = 0x1b5898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2144));
    // 0x1b589c: 0x0  nop
    ctx->pc = 0x1b589cu;
    // NOP
label_1b58a0:
    // 0x1b58a0: 0x30a20080  andi        $v0, $a1, 0x80
    ctx->pc = 0x1b58a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x1b58a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B58A4u;
    {
        const bool branch_taken_0x1b58a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B58A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B58A4u;
        // 0x1b58a8: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b58a4) {
            ctx->pc = 0x1B58B8u;
            goto label_1b58b8;
        }
    }
    ctx->pc = 0x1B58ACu;
    // 0x1b58ac: 0x38a200ff  xori        $v0, $a1, 0xFF
    ctx->pc = 0x1b58acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)255);
    // 0x1b58b0: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1b58b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b58b4: 0x0  nop
    ctx->pc = 0x1b58b4u;
    // NOP
label_1b58b8:
    // 0x1b58b8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1b58b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1b58bc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1b58bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1b58c0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b58c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1b58c4: 0x8c430460  lw          $v1, 0x460($v0)
    ctx->pc = 0x1b58c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1120)));
    // 0x1b58c8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1b58c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1b58cc: 0x2ca20100  sltiu       $v0, $a1, 0x100
    ctx->pc = 0x1b58ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1b58d0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1B58D0u;
    {
        const bool branch_taken_0x1b58d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B58D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B58D0u;
        // 0x1b58d4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b58d0) {
            ctx->pc = 0x1B58A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b58a0;
        }
    }
    ctx->pc = 0x1B58D8u;
    // 0x1b58d8: 0x8e2578d0  lw          $a1, 0x78D0($s1)
    ctx->pc = 0x1b58d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30928)));
    // 0x1b58dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b58dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b58e0: 0xc070468  jal         func_1C11A0
    ctx->pc = 0x1B58E0u;
    SET_GPR_U32(ctx, 31, 0x1B58E8u);
    ctx->pc = 0x1B58E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B58E0u;
    // 0x1b58e4: 0x27a60860  addiu       $a2, $sp, 0x860 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C11A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C11A0u, 0x1B58E0u, 0x1B58E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B58E8u;
label_1b58e8:
    // 0x1b58e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b58e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b58ec: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B58ECu;
    SET_GPR_U32(ctx, 31, 0x1B58F4u);
    ctx->pc = 0x1B58F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B58ECu;
    // 0x1b58f0: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B58ECu, 0x1B58F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B58F4u;
label_1b58f4:
    // 0x1b58f4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b58f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b58f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b58f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b58fc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b58fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b5900: 0x3c0201b2  lui         $v0, 0x1B2
    ctx->pc = 0x1b5900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)434 << 16));
    // 0x1b5904: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x1b5904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x1b5908: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1b5908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1b590c: 0x629025  or          $s2, $v1, $v0
    ctx->pc = 0x1b590cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b5910: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B5910u;
    SET_GPR_U32(ctx, 31, 0x1B5918u);
    ctx->pc = 0x1B5914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5910u;
    // 0x1b5914: 0x240500e0  addiu       $a1, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B5910u, 0x1B5918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5918u;
label_1b5918:
    // 0x1b5918: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b5918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b591c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b591cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b5920: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b5920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b5924: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1b5924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b5928: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1b5928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1b592c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b592cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b5930: 0x2432025  or          $a0, $s2, $v1
    ctx->pc = 0x1b5930u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x1b5934: 0x9e2378d0  lwu         $v1, 0x78D0($s1)
    ctx->pc = 0x1b5934u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 30928)));
    // 0x1b5938: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1b5938u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1b593c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b593cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1b5940: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5944: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b5944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b5948: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1b5948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1b594c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b594cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b5950: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B5950u;
    SET_GPR_U32(ctx, 31, 0x1B5958u);
    ctx->pc = 0x1B5954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5950u;
    // 0x1b5954: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B5950u, 0x1B5958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5958u;
label_1b5958:
    // 0x1b5958: 0x2403037c  addiu       $v1, $zero, 0x37C
    ctx->pc = 0x1b5958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 892));
    // 0x1b595c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x1b595cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x1b5960: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b5960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b5964: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x1b5964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x1b5968: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b596c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1b596cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1b5970: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B5970u;
    SET_GPR_U32(ctx, 31, 0x1B5978u);
    ctx->pc = 0x1B5974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5970u;
    // 0x1b5974: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B5970u, 0x1B5978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5978u;
label_1b5978:
    // 0x1b5978: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x1b5978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x1b597c: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1b597cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1b5980: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b5980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1b5984: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1b5984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1b5988: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b5988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b598c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b598cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5990: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1b5990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1b5994: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B5994u;
    SET_GPR_U32(ctx, 31, 0x1B599Cu);
    ctx->pc = 0x1B5998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5994u;
    // 0x1b5998: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B5994u, 0x1B599Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B599Cu;
label_1b599c:
    // 0x1b599c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b599cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b59a0: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1b59a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1b59a4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B59A4u;
    SET_GPR_U32(ctx, 31, 0x1B59ACu);
    ctx->pc = 0x1B59A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B59A4u;
    // 0x1b59a8: 0x3c060005  lui         $a2, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B59A4u, 0x1B59ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B59ACu;
label_1b59ac:
    // 0x1b59ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b59acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b59b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b59b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b59b4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B59B4u;
    SET_GPR_U32(ctx, 31, 0x1B59BCu);
    ctx->pc = 0x1B59B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B59B4u;
    // 0x1b59b8: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B59B4u, 0x1B59BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B59BCu;
label_1b59bc:
    // 0x1b59bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b59bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b59c0: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1b59c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1b59c4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B59C4u;
    SET_GPR_U32(ctx, 31, 0x1B59CCu);
    ctx->pc = 0x1B59C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B59C4u;
    // 0x1b59c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B59C4u, 0x1B59CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B59CCu;
label_1b59cc:
    // 0x1b59cc: 0x8e2278c8  lw          $v0, 0x78C8($s1)
    ctx->pc = 0x1b59ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30920)));
    // 0x1b59d0: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x1b59d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x1b59d4: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x1b59d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b59d8: 0x10200035  beqz        $at, . + 4 + (0x35 << 2)
    ctx->pc = 0x1B59D8u;
    {
        const bool branch_taken_0x1b59d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B59DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B59D8u;
        // 0x1b59dc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b59d8) {
            ctx->pc = 0x1B5AB0u;
            goto label_1b5ab0;
        }
    }
    ctx->pc = 0x1B59E0u;
    // 0x1b59e0: 0x2413003f  addiu       $s3, $zero, 0x3F
    ctx->pc = 0x1b59e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1b59e4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b59e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b59e8:
    // 0x1b59e8: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x1b59e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1b59ec: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b59ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b59f0: 0x9e2678c0  lwu         $a2, 0x78C0($s1)
    ctx->pc = 0x1b59f0u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 30912)));
    // 0x1b59f4: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1b59f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1b59f8: 0x12203c  dsll32      $a0, $s2, 0
    ctx->pc = 0x1b59f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1b59fc: 0x8e2278c4  lw          $v0, 0x78C4($s1)
    ctx->pc = 0x1b59fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30916)));
    // 0x1b5a00: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1b5a00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1b5a04: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1b5a04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b5a08: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1b5a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1b5a0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5a10: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1b5a10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1b5a14: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1b5a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1b5a18: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b5a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b5a1c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b5a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b5a20: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b5a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b5a24: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b5a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b5a28: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B5A28u;
    SET_GPR_U32(ctx, 31, 0x1B5A30u);
    ctx->pc = 0x1B5A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5A28u;
    // 0x1b5a2c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B5A28u, 0x1B5A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5A30u;
label_1b5a30:
    // 0x1b5a30: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1b5a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1b5a34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5a38: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b5a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b5a3c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B5A3Cu;
    SET_GPR_U32(ctx, 31, 0x1B5A44u);
    ctx->pc = 0x1B5A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5A3Cu;
    // 0x1b5a40: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B5A3Cu, 0x1B5A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5A44u;
label_1b5a44:
    // 0x1b5a44: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b5a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b5a48: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1b5a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1b5a4c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b5a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b5a50: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1b5a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1b5a54: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b5a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b5a58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5a5c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1b5a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b5a60: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B5A60u;
    SET_GPR_U32(ctx, 31, 0x1B5A68u);
    ctx->pc = 0x1B5A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5A60u;
    // 0x1b5a64: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B5A60u, 0x1B5A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5A68u;
label_1b5a68:
    // 0x1b5a68: 0x3c020e09  lui         $v0, 0xE09
    ctx->pc = 0x1b5a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3593 << 16));
    // 0x1b5a6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5a70: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b5a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b5a74: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B5A74u;
    SET_GPR_U32(ctx, 31, 0x1B5A7Cu);
    ctx->pc = 0x1B5A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5A74u;
    // 0x1b5a78: 0x34462009  ori         $a2, $v0, 0x2009 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8201);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B5A74u, 0x1B5A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5A7Cu;
label_1b5a7c:
    // 0x1b5a7c: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x1b5a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
    // 0x1b5a80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5a84: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1b5a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1b5a88: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b5a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b5a8c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B5A8Cu;
    SET_GPR_U32(ctx, 31, 0x1B5A94u);
    ctx->pc = 0x1B5A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5A8Cu;
    // 0x1b5a90: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B5A8Cu, 0x1B5A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5A94u;
label_1b5a94:
    // 0x1b5a94: 0x8e2278c8  lw          $v0, 0x78C8($s1)
    ctx->pc = 0x1b5a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30920)));
    // 0x1b5a98: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1b5a98u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1b5a9c: 0x26730040  addiu       $s3, $s3, 0x40
    ctx->pc = 0x1b5a9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x1b5aa0: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x1b5aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x1b5aa4: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x1b5aa4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b5aa8: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x1B5AA8u;
    {
        const bool branch_taken_0x1b5aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5AA8u;
        // 0x1b5aac: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5aa8) {
            ctx->pc = 0x1B59E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b59e8;
        }
    }
    ctx->pc = 0x1B5AB0u;
label_1b5ab0:
    // 0x1b5ab0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5ab4: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1B5AB4u;
    SET_GPR_U32(ctx, 31, 0x1B5ABCu);
    ctx->pc = 0x1B5AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5AB4u;
    // 0x1b5ab8: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1B5AB4u, 0x1B5ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5ABCu;
label_1b5abc:
    // 0x1b5abc: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1b5abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1b5ac0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b5ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b5ac4: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B5AC4u;
    {
        const bool branch_taken_0x1b5ac4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B5AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5AC4u;
        // 0x1b5ac8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5ac4) {
            ctx->pc = 0x1B5AE8u;
            goto label_1b5ae8;
        }
    }
    ctx->pc = 0x1B5ACCu;
    // 0x1b5acc: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1b5accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b5ad0: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x1b5ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1b5ad4: 0xc070974  jal         func_1C25D0
    ctx->pc = 0x1B5AD4u;
    SET_GPR_U32(ctx, 31, 0x1B5ADCu);
    ctx->pc = 0x1B5AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5AD4u;
    // 0x1b5ad8: 0x240700e0  addiu       $a3, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C25D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C25D0u, 0x1B5AD4u, 0x1B5ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5ADCu;
label_1b5adc:
    // 0x1b5adc: 0x1000045e  b           . + 4 + (0x45E << 2)
    ctx->pc = 0x1B5ADCu;
    {
        const bool branch_taken_0x1b5adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5adc) {
            ctx->pc = 0x1B6C58u;
            goto label_1b6c58;
        }
    }
    ctx->pc = 0x1B5AE4u;
    // 0x1b5ae4: 0x0  nop
    ctx->pc = 0x1b5ae4u;
    // NOP
label_1b5ae8:
    // 0x1b5ae8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1b5ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b5aec: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b5aecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b5af0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5af4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1b5af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1b5af8: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x1b5af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1b5afc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B5AFCu;
    SET_GPR_U32(ctx, 31, 0x1B5B04u);
    ctx->pc = 0x1B5B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5AFCu;
    // 0x1b5b00: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B5AFCu, 0x1B5B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5B04u;
label_1b5b04:
    // 0x1b5b04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5b08: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1b5b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1b5b0c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B5B0Cu;
    SET_GPR_U32(ctx, 31, 0x1B5B14u);
    ctx->pc = 0x1B5B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5B0Cu;
    // 0x1b5b10: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B5B0Cu, 0x1B5B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5B14u;
label_1b5b14:
    // 0x1b5b14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5b18: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B5B18u;
    SET_GPR_U32(ctx, 31, 0x1B5B20u);
    ctx->pc = 0x1B5B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5B18u;
    // 0x1b5b1c: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B5B18u, 0x1B5B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5B20u;
label_1b5b20:
    // 0x1b5b20: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b5b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b5b24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5b28: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b5b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b5b2c: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1B5B2Cu;
    SET_GPR_U32(ctx, 31, 0x1B5B34u);
    ctx->pc = 0x1B5B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5B2Cu;
    // 0x1b5b30: 0x296b8  dsll        $s2, $v0, 26 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << 26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1B5B2Cu, 0x1B5B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5B34u;
label_1b5b34:
    // 0x1b5b34: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1b5b34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1b5b38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5b3c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b5b3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b5b40: 0x3c020012  lui         $v0, 0x12
    ctx->pc = 0x1b5b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18 << 16));
    // 0x1b5b44: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b5b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b5b48: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x1b5b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1b5b4c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1b5b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b5b50: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B5B50u;
    SET_GPR_U32(ctx, 31, 0x1B5B58u);
    ctx->pc = 0x1B5B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5B50u;
    // 0x1b5b54: 0x2429025  or          $s2, $s2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B5B50u, 0x1B5B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5B58u;
label_1b5b58:
    // 0x1b5b58: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b5b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b5b5c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b5b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b5b60: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b5b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b5b64: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1b5b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b5b68: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1b5b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1b5b6c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b5b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b5b70: 0x722025  or          $a0, $v1, $s2
    ctx->pc = 0x1b5b70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x1b5b74: 0x9e2378d0  lwu         $v1, 0x78D0($s1)
    ctx->pc = 0x1b5b74u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 30928)));
    // 0x1b5b78: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1b5b78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1b5b7c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b5b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1b5b80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5b84: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b5b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b5b88: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1b5b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1b5b8c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b5b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b5b90: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B5B90u;
    SET_GPR_U32(ctx, 31, 0x1B5B98u);
    ctx->pc = 0x1B5B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5B90u;
    // 0x1b5b94: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B5B90u, 0x1B5B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5B98u;
label_1b5b98:
    // 0x1b5b98: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x1b5b98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x1b5b9c: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1b5b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1b5ba0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b5ba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b5ba4: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1b5ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1b5ba8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b5ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b5bac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5bb0: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1b5bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1b5bb4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B5BB4u;
    SET_GPR_U32(ctx, 31, 0x1B5BBCu);
    ctx->pc = 0x1B5BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5BB4u;
    // 0x1b5bb8: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B5BB4u, 0x1B5BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5BBCu;
label_1b5bbc:
    // 0x1b5bbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5bc0: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1b5bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1b5bc4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B5BC4u;
    SET_GPR_U32(ctx, 31, 0x1B5BCCu);
    ctx->pc = 0x1B5BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5BC4u;
    // 0x1b5bc8: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B5BC4u, 0x1B5BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5BCCu;
label_1b5bcc:
    // 0x1b5bcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5bd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b5bd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5bd4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B5BD4u;
    SET_GPR_U32(ctx, 31, 0x1B5BDCu);
    ctx->pc = 0x1B5BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5BD4u;
    // 0x1b5bd8: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B5BD4u, 0x1B5BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5BDCu;
label_1b5bdc:
    // 0x1b5bdc: 0x8e2678c8  lw          $a2, 0x78C8($s1)
    ctx->pc = 0x1b5bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30920)));
    // 0x1b5be0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5be4: 0x9e2778cc  lwu         $a3, 0x78CC($s1)
    ctx->pc = 0x1b5be4u;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 30924)));
    // 0x1b5be8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1b5be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1b5bec: 0x8e2278c4  lw          $v0, 0x78C4($s1)
    ctx->pc = 0x1b5becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30916)));
    // 0x1b5bf0: 0x9e2378c0  lwu         $v1, 0x78C0($s1)
    ctx->pc = 0x1b5bf0u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 30912)));
    // 0x1b5bf4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1b5bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1b5bf8: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1b5bf8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1b5bfc: 0x73938  dsll        $a3, $a3, 4
    ctx->pc = 0x1b5bfcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 4);
    // 0x1b5c00: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1b5c00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1b5c04: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b5c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b5c08: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b5c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b5c0c: 0x34e7000a  ori         $a3, $a3, 0xA
    ctx->pc = 0x1b5c0cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)10);
    // 0x1b5c10: 0x633b8  dsll        $a2, $a2, 14
    ctx->pc = 0x1b5c10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 14);
    // 0x1b5c14: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b5c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b5c18: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1b5c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1b5c1c: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x1b5c1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x1b5c20: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b5c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b5c24: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1b5c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x1b5c28: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B5C28u;
    SET_GPR_U32(ctx, 31, 0x1B5C30u);
    ctx->pc = 0x1B5C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5C28u;
    // 0x1b5c2c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B5C28u, 0x1B5C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5C30u;
label_1b5c30:
    // 0x1b5c30: 0x8e2278c8  lw          $v0, 0x78C8($s1)
    ctx->pc = 0x1b5c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30920)));
    // 0x1b5c34: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x1b5c34u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x1b5c38: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x1b5c38u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b5c3c: 0x10200036  beqz        $at, . + 4 + (0x36 << 2)
    ctx->pc = 0x1B5C3Cu;
    {
        const bool branch_taken_0x1b5c3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5C3Cu;
        // 0x1b5c40: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5c3c) {
            ctx->pc = 0x1B5D18u;
            goto label_1b5d18;
        }
    }
    ctx->pc = 0x1B5C44u;
    // 0x1b5c44: 0x2413001f  addiu       $s3, $zero, 0x1F
    ctx->pc = 0x1b5c44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1b5c48: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b5c48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5c4c: 0x0  nop
    ctx->pc = 0x1b5c4cu;
    // NOP
label_1b5c50:
    // 0x1b5c50: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x1b5c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1b5c54: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b5c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b5c58: 0x9e2678c0  lwu         $a2, 0x78C0($s1)
    ctx->pc = 0x1b5c58u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 30912)));
    // 0x1b5c5c: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1b5c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1b5c60: 0x12203c  dsll32      $a0, $s2, 0
    ctx->pc = 0x1b5c60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1b5c64: 0x8e2278c4  lw          $v0, 0x78C4($s1)
    ctx->pc = 0x1b5c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30916)));
    // 0x1b5c68: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1b5c68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1b5c6c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1b5c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b5c70: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1b5c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1b5c74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5c78: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1b5c78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1b5c7c: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1b5c7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1b5c80: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b5c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b5c84: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b5c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b5c88: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b5c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b5c8c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b5c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b5c90: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B5C90u;
    SET_GPR_U32(ctx, 31, 0x1B5C98u);
    ctx->pc = 0x1B5C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5C90u;
    // 0x1b5c94: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B5C90u, 0x1B5C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5C98u;
label_1b5c98:
    // 0x1b5c98: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1b5c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1b5c9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5ca0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b5ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b5ca4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B5CA4u;
    SET_GPR_U32(ctx, 31, 0x1B5CACu);
    ctx->pc = 0x1B5CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5CA4u;
    // 0x1b5ca8: 0x34460010  ori         $a2, $v0, 0x10 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B5CA4u, 0x1B5CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5CACu;
label_1b5cac:
    // 0x1b5cac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b5cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b5cb0: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1b5cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1b5cb4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b5cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b5cb8: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1b5cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1b5cbc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b5cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b5cc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5cc4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1b5cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b5cc8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B5CC8u;
    SET_GPR_U32(ctx, 31, 0x1B5CD0u);
    ctx->pc = 0x1B5CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5CC8u;
    // 0x1b5ccc: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B5CC8u, 0x1B5CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5CD0u;
label_1b5cd0:
    // 0x1b5cd0: 0x3c020e10  lui         $v0, 0xE10
    ctx->pc = 0x1b5cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3600 << 16));
    // 0x1b5cd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5cd8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b5cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b5cdc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B5CDCu;
    SET_GPR_U32(ctx, 31, 0x1B5CE4u);
    ctx->pc = 0x1B5CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5CDCu;
    // 0x1b5ce0: 0x34462010  ori         $a2, $v0, 0x2010 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B5CDCu, 0x1B5CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5CE4u;
label_1b5ce4:
    // 0x1b5ce4: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x1b5ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
    // 0x1b5ce8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5cec: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1b5cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1b5cf0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b5cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b5cf4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B5CF4u;
    SET_GPR_U32(ctx, 31, 0x1B5CFCu);
    ctx->pc = 0x1B5CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5CF4u;
    // 0x1b5cf8: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B5CF4u, 0x1B5CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5CFCu;
label_1b5cfc:
    // 0x1b5cfc: 0x8e2278c8  lw          $v0, 0x78C8($s1)
    ctx->pc = 0x1b5cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30920)));
    // 0x1b5d00: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1b5d00u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1b5d04: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x1b5d04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x1b5d08: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x1b5d08u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x1b5d0c: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x1b5d0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b5d10: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x1B5D10u;
    {
        const bool branch_taken_0x1b5d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5D10u;
        // 0x1b5d14: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5d10) {
            ctx->pc = 0x1B5C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b5c50;
        }
    }
    ctx->pc = 0x1B5D18u;
label_1b5d18:
    // 0x1b5d18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5d1c: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B5D1Cu;
    SET_GPR_U32(ctx, 31, 0x1B5D24u);
    ctx->pc = 0x1B5D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5D1Cu;
    // 0x1b5d20: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B5D1Cu, 0x1B5D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5D24u;
label_1b5d24:
    // 0x1b5d24: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b5d24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b5d28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5d2c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b5d2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b5d30: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1b5d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1b5d34: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x1b5d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x1b5d38: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1b5d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1b5d3c: 0x629025  or          $s2, $v1, $v0
    ctx->pc = 0x1b5d3cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b5d40: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B5D40u;
    SET_GPR_U32(ctx, 31, 0x1B5D48u);
    ctx->pc = 0x1B5D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5D40u;
    // 0x1b5d44: 0x240500e0  addiu       $a1, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B5D40u, 0x1B5D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5D48u;
label_1b5d48:
    // 0x1b5d48: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b5d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b5d4c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b5d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b5d50: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b5d50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b5d54: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b5d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b5d58: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1b5d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1b5d5c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b5d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b5d60: 0x2432025  or          $a0, $s2, $v1
    ctx->pc = 0x1b5d60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x1b5d64: 0x9e2378d0  lwu         $v1, 0x78D0($s1)
    ctx->pc = 0x1b5d64u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 30928)));
    // 0x1b5d68: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1b5d68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1b5d6c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b5d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1b5d70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5d74: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b5d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b5d78: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1b5d78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1b5d7c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b5d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b5d80: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B5D80u;
    SET_GPR_U32(ctx, 31, 0x1B5D88u);
    ctx->pc = 0x1B5D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5D80u;
    // 0x1b5d84: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B5D80u, 0x1B5D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5D88u;
label_1b5d88:
    // 0x1b5d88: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1B5D88u;
    SET_GPR_U32(ctx, 31, 0x1B5D90u);
    ctx->pc = 0x1B5D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5D88u;
    // 0x1b5d8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1B5D88u, 0x1B5D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5D90u;
label_1b5d90:
    // 0x1b5d90: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1b5d90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b5d94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5d98: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x1b5d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x1b5d9c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1b5d9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1b5da0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b5da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b5da4: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1b5da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1b5da8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b5da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b5dac: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1b5dacu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1b5db0: 0xa23025  or          $a2, $a1, $v0
    ctx->pc = 0x1b5db0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1b5db4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B5DB4u;
    SET_GPR_U32(ctx, 31, 0x1B5DBCu);
    ctx->pc = 0x1B5DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5DB4u;
    // 0x1b5db8: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B5DB4u, 0x1B5DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5DBCu;
label_1b5dbc:
    // 0x1b5dbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5dc0: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1b5dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1b5dc4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B5DC4u;
    SET_GPR_U32(ctx, 31, 0x1B5DCCu);
    ctx->pc = 0x1B5DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5DC4u;
    // 0x1b5dc8: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B5DC4u, 0x1B5DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5DCCu;
label_1b5dcc:
    // 0x1b5dcc: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1b5dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b5dd0: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x1b5dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1b5dd4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b5dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b5dd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5ddc: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1b5ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1b5de0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B5DE0u;
    SET_GPR_U32(ctx, 31, 0x1B5DE8u);
    ctx->pc = 0x1B5DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5DE0u;
    // 0x1b5de4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B5DE0u, 0x1B5DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5DE8u;
label_1b5de8:
    // 0x1b5de8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5dec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b5decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5df0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B5DF0u;
    SET_GPR_U32(ctx, 31, 0x1B5DF8u);
    ctx->pc = 0x1B5DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5DF0u;
    // 0x1b5df4: 0x24060356  addiu       $a2, $zero, 0x356 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B5DF0u, 0x1B5DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5DF8u;
label_1b5df8:
    // 0x1b5df8: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1b5df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1b5dfc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b5dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b5e00: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B5E00u;
    {
        const bool branch_taken_0x1b5e00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b5e00) {
            ctx->pc = 0x1B5E30u;
            goto label_1b5e30;
        }
    }
    ctx->pc = 0x1B5E08u;
    // 0x1b5e08: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1b5e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1b5e0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5e10: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b5e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b5e14: 0x21602  srl         $v0, $v0, 24
    ctx->pc = 0x1b5e14u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x1b5e18: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b5e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b5e1c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b5e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b5e20: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B5E20u;
    SET_GPR_U32(ctx, 31, 0x1B5E28u);
    ctx->pc = 0x1B5E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5E20u;
    // 0x1b5e24: 0x23638  dsll        $a2, $v0, 24 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << 24);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B5E20u, 0x1B5E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5E28u;
label_1b5e28:
    // 0x1b5e28: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1B5E28u;
    {
        const bool branch_taken_0x1b5e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5e28) {
            ctx->pc = 0x1B5E60u;
            goto label_1b5e60;
        }
    }
    ctx->pc = 0x1B5E30u;
label_1b5e30:
    // 0x1b5e30: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1b5e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1b5e34: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x1b5e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x1b5e38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5e3c: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x1b5e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x1b5e40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b5e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b5e44: 0x31e02  srl         $v1, $v1, 24
    ctx->pc = 0x1b5e44u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x1b5e48: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b5e48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b5e4c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b5e4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b5e50: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1b5e50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1b5e54: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B5E54u;
    SET_GPR_U32(ctx, 31, 0x1B5E5Cu);
    ctx->pc = 0x1B5E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5E54u;
    // 0x1b5e58: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B5E54u, 0x1B5E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5E5Cu;
label_1b5e5c:
    // 0x1b5e5c: 0x0  nop
    ctx->pc = 0x1b5e5cu;
    // NOP
label_1b5e60:
    // 0x1b5e60: 0x8e2378c8  lw          $v1, 0x78C8($s1)
    ctx->pc = 0x1b5e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30920)));
    // 0x1b5e64: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x1b5e64u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x1b5e68: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x1b5e68u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b5e6c: 0x1020037a  beqz        $at, . + 4 + (0x37A << 2)
    ctx->pc = 0x1B5E6Cu;
    {
        const bool branch_taken_0x1b5e6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E6Cu;
        // 0x1b5e70: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5e6c) {
            ctx->pc = 0x1B6C58u;
            goto label_1b6c58;
        }
    }
    ctx->pc = 0x1B5E74u;
    // 0x1b5e74: 0x2412001f  addiu       $s2, $zero, 0x1F
    ctx->pc = 0x1b5e74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1b5e78: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b5e78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5e7c: 0x0  nop
    ctx->pc = 0x1b5e7cu;
    // NOP
label_1b5e80:
    // 0x1b5e80: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x1b5e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1b5e84: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b5e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b5e88: 0x9e2678c0  lwu         $a2, 0x78C0($s1)
    ctx->pc = 0x1b5e88u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 30912)));
    // 0x1b5e8c: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1b5e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1b5e90: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x1b5e90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1b5e94: 0x8e2278c4  lw          $v0, 0x78C4($s1)
    ctx->pc = 0x1b5e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30916)));
    // 0x1b5e98: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1b5e98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1b5e9c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1b5e9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b5ea0: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1b5ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1b5ea4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5ea8: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1b5ea8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1b5eac: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1b5eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1b5eb0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b5eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b5eb4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b5eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b5eb8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b5eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b5ebc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b5ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b5ec0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B5EC0u;
    SET_GPR_U32(ctx, 31, 0x1B5EC8u);
    ctx->pc = 0x1B5EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5EC0u;
    // 0x1b5ec4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B5EC0u, 0x1B5EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5EC8u;
label_1b5ec8:
    // 0x1b5ec8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5ecc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b5eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b5ed0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B5ED0u;
    SET_GPR_U32(ctx, 31, 0x1B5ED8u);
    ctx->pc = 0x1B5ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5ED0u;
    // 0x1b5ed4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B5ED0u, 0x1B5ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5ED8u;
label_1b5ed8:
    // 0x1b5ed8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b5ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b5edc: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1b5edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1b5ee0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b5ee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b5ee4: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1b5ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1b5ee8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b5ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b5eec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5ef0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1b5ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b5ef4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B5EF4u;
    SET_GPR_U32(ctx, 31, 0x1B5EFCu);
    ctx->pc = 0x1B5EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5EF4u;
    // 0x1b5ef8: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B5EF4u, 0x1B5EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5EFCu;
label_1b5efc:
    // 0x1b5efc: 0x3c020e00  lui         $v0, 0xE00
    ctx->pc = 0x1b5efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3584 << 16));
    // 0x1b5f00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5f04: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b5f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b5f08: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B5F08u;
    SET_GPR_U32(ctx, 31, 0x1B5F10u);
    ctx->pc = 0x1B5F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5F08u;
    // 0x1b5f0c: 0x34462000  ori         $a2, $v0, 0x2000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B5F08u, 0x1B5F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5F10u;
label_1b5f10:
    // 0x1b5f10: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x1b5f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
    // 0x1b5f14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5f18: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1b5f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1b5f1c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b5f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b5f20: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B5F20u;
    SET_GPR_U32(ctx, 31, 0x1B5F28u);
    ctx->pc = 0x1B5F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5F20u;
    // 0x1b5f24: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B5F20u, 0x1B5F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5F28u;
label_1b5f28:
    // 0x1b5f28: 0x8e2378c8  lw          $v1, 0x78C8($s1)
    ctx->pc = 0x1b5f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30920)));
    // 0x1b5f2c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1b5f2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1b5f30: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x1b5f30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1b5f34: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x1b5f34u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x1b5f38: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x1b5f38u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b5f3c: 0x1460ffd0  bnez        $v1, . + 4 + (-0x30 << 2)
    ctx->pc = 0x1B5F3Cu;
    {
        const bool branch_taken_0x1b5f3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F3Cu;
        // 0x1b5f40: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5f3c) {
            ctx->pc = 0x1B5E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b5e80;
        }
    }
    ctx->pc = 0x1B5F44u;
    // 0x1b5f44: 0x10000344  b           . + 4 + (0x344 << 2)
    ctx->pc = 0x1B5F44u;
    {
        const bool branch_taken_0x1b5f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5f44) {
            ctx->pc = 0x1B6C58u;
            goto label_1b6c58;
        }
    }
    ctx->pc = 0x1B5F4Cu;
    // 0x1b5f4c: 0x0  nop
    ctx->pc = 0x1b5f4cu;
    // NOP
label_1b5f50:
    // 0x1b5f50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5f54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b5f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5f58: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b5f58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b5f5c: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1B5F5Cu;
    SET_GPR_U32(ctx, 31, 0x1B5F64u);
    ctx->pc = 0x1B5F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5F5Cu;
    // 0x1b5f60: 0x2407000e  addiu       $a3, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1B5F5Cu, 0x1B5F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5F64u;
label_1b5f64:
    // 0x1b5f64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b5f64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5f68: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1b5f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1b5f6c: 0x34038080  ori         $v1, $zero, 0x8080
    ctx->pc = 0x1b5f6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
label_1b5f70:
    // 0x1b5f70: 0x2ca10080  sltiu       $at, $a1, 0x80
    ctx->pc = 0x1b5f70u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x1b5f74: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B5F74u;
    {
        const bool branch_taken_0x1b5f74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5f74) {
            ctx->pc = 0x1B5F88u;
            goto label_1b5f88;
        }
    }
    ctx->pc = 0x1B5F7Cu;
    // 0x1b5f7c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B5F7Cu;
    {
        const bool branch_taken_0x1b5f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F7Cu;
        // 0x1b5f80: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5f7c) {
            ctx->pc = 0x1B5F98u;
            goto label_1b5f98;
        }
    }
    ctx->pc = 0x1B5F84u;
    // 0x1b5f84: 0x0  nop
    ctx->pc = 0x1b5f84u;
    // NOP
label_1b5f88:
    // 0x1b5f88: 0x38a2007f  xori        $v0, $a1, 0x7F
    ctx->pc = 0x1b5f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)127);
    // 0x1b5f8c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1b5f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1b5f90: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x1b5f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1b5f94: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1b5f94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1b5f98:
    // 0x1b5f98: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b5f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1b5f9c: 0x2ca20100  sltiu       $v0, $a1, 0x100
    ctx->pc = 0x1b5f9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1b5fa0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1B5FA0u;
    {
        const bool branch_taken_0x1b5fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5FA0u;
        // 0x1b5fa4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5fa0) {
            ctx->pc = 0x1B5F70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b5f70;
        }
    }
    ctx->pc = 0x1B5FA8u;
    // 0x1b5fa8: 0x8e2578d0  lw          $a1, 0x78D0($s1)
    ctx->pc = 0x1b5fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30928)));
    // 0x1b5fac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5fb0: 0xc070468  jal         func_1C11A0
    ctx->pc = 0x1B5FB0u;
    SET_GPR_U32(ctx, 31, 0x1B5FB8u);
    ctx->pc = 0x1B5FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5FB0u;
    // 0x1b5fb4: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C11A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C11A0u, 0x1B5FB0u, 0x1B5FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5FB8u;
label_1b5fb8:
    // 0x1b5fb8: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1B5FB8u;
    SET_GPR_U32(ctx, 31, 0x1B5FC0u);
    ctx->pc = 0x1B5FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5FB8u;
    // 0x1b5fbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1B5FB8u, 0x1B5FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5FC0u;
label_1b5fc0:
    // 0x1b5fc0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1b5fc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5fc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5fc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b5fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b5fcc: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x1b5fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1b5fd0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b5fd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b5fd4: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x1b5fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x1b5fd8: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1b5fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1b5fdc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B5FDCu;
    SET_GPR_U32(ctx, 31, 0x1B5FE4u);
    ctx->pc = 0x1B5FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5FDCu;
    // 0x1b5fe0: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B5FDCu, 0x1B5FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5FE4u;
label_1b5fe4:
    // 0x1b5fe4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5fe8: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1b5fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1b5fec: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B5FECu;
    SET_GPR_U32(ctx, 31, 0x1B5FF4u);
    ctx->pc = 0x1B5FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5FECu;
    // 0x1b5ff0: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B5FECu, 0x1B5FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5FF4u;
label_1b5ff4:
    // 0x1b5ff4: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x1b5ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x1b5ff8: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1b5ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1b5ffc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b5ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b6000: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1b6000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1b6004: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b6004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b6008: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b600c: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1b600cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1b6010: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B6010u;
    SET_GPR_U32(ctx, 31, 0x1B6018u);
    ctx->pc = 0x1B6014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6010u;
    // 0x1b6014: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B6010u, 0x1B6018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6018u;
label_1b6018:
    // 0x1b6018: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b601c: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B601Cu;
    SET_GPR_U32(ctx, 31, 0x1B6024u);
    ctx->pc = 0x1B6020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B601Cu;
    // 0x1b6020: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B601Cu, 0x1B6024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6024u;
label_1b6024:
    // 0x1b6024: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b6024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b6028: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x1b6028u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x1b602c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b602cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b6030: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b6030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b6034: 0x236b8  dsll        $a2, $v0, 26
    ctx->pc = 0x1b6034u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << 26);
    // 0x1b6038: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b6038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b603c: 0x3c0201b2  lui         $v0, 0x1B2
    ctx->pc = 0x1b603cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)434 << 16));
    // 0x1b6040: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6044: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1b6044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b6048: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x1b6048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1b604c: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B604Cu;
    SET_GPR_U32(ctx, 31, 0x1B6054u);
    ctx->pc = 0x1B6050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B604Cu;
    // 0x1b6050: 0x469025  or          $s2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B604Cu, 0x1B6054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6054u;
label_1b6054:
    // 0x1b6054: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b6054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b6058: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b6058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b605c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b605cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b6060: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1b6060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b6064: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1b6064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1b6068: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b6068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b606c: 0x2432025  or          $a0, $s2, $v1
    ctx->pc = 0x1b606cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x1b6070: 0x9e2378d0  lwu         $v1, 0x78D0($s1)
    ctx->pc = 0x1b6070u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 30928)));
    // 0x1b6074: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1b6074u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1b6078: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b6078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1b607c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b607cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6080: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b6080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b6084: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1b6084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1b6088: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b6088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b608c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B608Cu;
    SET_GPR_U32(ctx, 31, 0x1B6094u);
    ctx->pc = 0x1B6090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B608Cu;
    // 0x1b6090: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B608Cu, 0x1B6094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6094u;
label_1b6094:
    // 0x1b6094: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6098: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1b6098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1b609c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B609Cu;
    SET_GPR_U32(ctx, 31, 0x1B60A4u);
    ctx->pc = 0x1B60A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B609Cu;
    // 0x1b60a0: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B609Cu, 0x1B60A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B60A4u;
label_1b60a4:
    // 0x1b60a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b60a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b60a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b60a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b60ac: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B60ACu;
    SET_GPR_U32(ctx, 31, 0x1B60B4u);
    ctx->pc = 0x1B60B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B60ACu;
    // 0x1b60b0: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B60ACu, 0x1B60B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B60B4u;
label_1b60b4:
    // 0x1b60b4: 0x8e2678c8  lw          $a2, 0x78C8($s1)
    ctx->pc = 0x1b60b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30920)));
    // 0x1b60b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b60b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b60bc: 0x9e2778cc  lwu         $a3, 0x78CC($s1)
    ctx->pc = 0x1b60bcu;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 30924)));
    // 0x1b60c0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1b60c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1b60c4: 0x8e2278c4  lw          $v0, 0x78C4($s1)
    ctx->pc = 0x1b60c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30916)));
    // 0x1b60c8: 0x9e2378c0  lwu         $v1, 0x78C0($s1)
    ctx->pc = 0x1b60c8u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 30912)));
    // 0x1b60cc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1b60ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1b60d0: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1b60d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1b60d4: 0x73938  dsll        $a3, $a3, 4
    ctx->pc = 0x1b60d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 4);
    // 0x1b60d8: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1b60d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1b60dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b60dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b60e0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b60e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b60e4: 0x34e7000a  ori         $a3, $a3, 0xA
    ctx->pc = 0x1b60e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)10);
    // 0x1b60e8: 0x633b8  dsll        $a2, $a2, 14
    ctx->pc = 0x1b60e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 14);
    // 0x1b60ec: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b60ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b60f0: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1b60f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1b60f4: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x1b60f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x1b60f8: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b60f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b60fc: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1b60fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x1b6100: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B6100u;
    SET_GPR_U32(ctx, 31, 0x1B6108u);
    ctx->pc = 0x1B6104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6100u;
    // 0x1b6104: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B6100u, 0x1B6108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6108u;
label_1b6108:
    // 0x1b6108: 0x8e2278c8  lw          $v0, 0x78C8($s1)
    ctx->pc = 0x1b6108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30920)));
    // 0x1b610c: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x1b610cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x1b6110: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x1b6110u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b6114: 0x10200032  beqz        $at, . + 4 + (0x32 << 2)
    ctx->pc = 0x1B6114u;
    {
        const bool branch_taken_0x1b6114 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6114u;
        // 0x1b6118: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6114) {
            ctx->pc = 0x1B61E0u;
            goto label_1b61e0;
        }
    }
    ctx->pc = 0x1B611Cu;
    // 0x1b611c: 0x2413001f  addiu       $s3, $zero, 0x1F
    ctx->pc = 0x1b611cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1b6120: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b6120u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6124: 0x0  nop
    ctx->pc = 0x1b6124u;
    // NOP
label_1b6128:
    // 0x1b6128: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x1b6128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1b612c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b612cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b6130: 0x9e2678c0  lwu         $a2, 0x78C0($s1)
    ctx->pc = 0x1b6130u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 30912)));
    // 0x1b6134: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1b6134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1b6138: 0x12203c  dsll32      $a0, $s2, 0
    ctx->pc = 0x1b6138u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1b613c: 0x8e2278c4  lw          $v0, 0x78C4($s1)
    ctx->pc = 0x1b613cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30916)));
    // 0x1b6140: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1b6140u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1b6144: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1b6144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b6148: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1b6148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1b614c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b614cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6150: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1b6150u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1b6154: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1b6154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1b6158: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b6158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b615c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b615cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b6160: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b6160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b6164: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b6164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b6168: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B6168u;
    SET_GPR_U32(ctx, 31, 0x1B6170u);
    ctx->pc = 0x1B616Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6168u;
    // 0x1b616c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B6168u, 0x1B6170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6170u;
label_1b6170:
    // 0x1b6170: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1b6170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1b6174: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6178: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b6178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b617c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B617Cu;
    SET_GPR_U32(ctx, 31, 0x1B6184u);
    ctx->pc = 0x1B6180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B617Cu;
    // 0x1b6180: 0x34460010  ori         $a2, $v0, 0x10 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B617Cu, 0x1B6184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6184u;
label_1b6184:
    // 0x1b6184: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1b6184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1b6188: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b618c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1b618cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b6190: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B6190u;
    SET_GPR_U32(ctx, 31, 0x1B6198u);
    ctx->pc = 0x1B6194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6190u;
    // 0x1b6194: 0x34467000  ori         $a2, $v0, 0x7000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B6190u, 0x1B6198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6198u;
label_1b6198:
    // 0x1b6198: 0x3c020e10  lui         $v0, 0xE10
    ctx->pc = 0x1b6198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3600 << 16));
    // 0x1b619c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b619cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b61a0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b61a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b61a4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B61A4u;
    SET_GPR_U32(ctx, 31, 0x1B61ACu);
    ctx->pc = 0x1B61A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B61A4u;
    // 0x1b61a8: 0x34462010  ori         $a2, $v0, 0x2010 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B61A4u, 0x1B61ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B61ACu;
label_1b61ac:
    // 0x1b61ac: 0x34028700  ori         $v0, $zero, 0x8700
    ctx->pc = 0x1b61acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34560);
    // 0x1b61b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b61b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b61b4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1b61b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1b61b8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b61b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b61bc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B61BCu;
    SET_GPR_U32(ctx, 31, 0x1B61C4u);
    ctx->pc = 0x1B61C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B61BCu;
    // 0x1b61c0: 0x34469000  ori         $a2, $v0, 0x9000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B61BCu, 0x1B61C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B61C4u;
label_1b61c4:
    // 0x1b61c4: 0x8e2278c8  lw          $v0, 0x78C8($s1)
    ctx->pc = 0x1b61c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30920)));
    // 0x1b61c8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1b61c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1b61cc: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x1b61ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x1b61d0: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x1b61d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x1b61d4: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x1b61d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b61d8: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x1B61D8u;
    {
        const bool branch_taken_0x1b61d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B61DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B61D8u;
        // 0x1b61dc: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b61d8) {
            ctx->pc = 0x1B6128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b6128;
        }
    }
    ctx->pc = 0x1B61E0u;
label_1b61e0:
    // 0x1b61e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b61e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b61e4: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1B61E4u;
    SET_GPR_U32(ctx, 31, 0x1B61ECu);
    ctx->pc = 0x1B61E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B61E4u;
    // 0x1b61e8: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1B61E4u, 0x1B61ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B61ECu;
label_1b61ec:
    // 0x1b61ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b61ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b61f0: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B61F0u;
    SET_GPR_U32(ctx, 31, 0x1B61F8u);
    ctx->pc = 0x1B61F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B61F0u;
    // 0x1b61f4: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B61F0u, 0x1B61F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B61F8u;
label_1b61f8:
    // 0x1b61f8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b61f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b61fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b61fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6200: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b6200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b6204: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1B6204u;
    SET_GPR_U32(ctx, 31, 0x1B620Cu);
    ctx->pc = 0x1B6208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6204u;
    // 0x1b6208: 0x296b8  dsll        $s2, $v0, 26 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << 26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1B6204u, 0x1B620Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B620Cu;
label_1b620c:
    // 0x1b620c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1b620cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1b6210: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6214: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b6214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b6218: 0x3c0201b2  lui         $v0, 0x1B2
    ctx->pc = 0x1b6218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)434 << 16));
    // 0x1b621c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b621cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b6220: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x1b6220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1b6224: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1b6224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b6228: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B6228u;
    SET_GPR_U32(ctx, 31, 0x1B6230u);
    ctx->pc = 0x1B622Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6228u;
    // 0x1b622c: 0x2429025  or          $s2, $s2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B6228u, 0x1B6230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6230u;
label_1b6230:
    // 0x1b6230: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b6230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b6234: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b6234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b6238: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b6238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b623c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1b623cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b6240: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1b6240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1b6244: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b6244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b6248: 0x722025  or          $a0, $v1, $s2
    ctx->pc = 0x1b6248u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x1b624c: 0x9e2378d0  lwu         $v1, 0x78D0($s1)
    ctx->pc = 0x1b624cu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 30928)));
    // 0x1b6250: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1b6250u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1b6254: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b6254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1b6258: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b625c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b625cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b6260: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1b6260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1b6264: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b6264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b6268: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B6268u;
    SET_GPR_U32(ctx, 31, 0x1B6270u);
    ctx->pc = 0x1B626Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6268u;
    // 0x1b626c: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B6268u, 0x1B6270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6270u;
label_1b6270:
    // 0x1b6270: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x1b6270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x1b6274: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1b6274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1b6278: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b6278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b627c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1b627cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1b6280: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b6280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b6284: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6288: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1b6288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1b628c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B628Cu;
    SET_GPR_U32(ctx, 31, 0x1B6294u);
    ctx->pc = 0x1B6290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B628Cu;
    // 0x1b6290: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B628Cu, 0x1B6294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6294u;
label_1b6294:
    // 0x1b6294: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b6294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6298: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x1b6298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x1b629c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b629cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b62a0: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x1b62a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x1b62a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b62a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b62a8: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x1b62a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1b62ac: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B62ACu;
    SET_GPR_U32(ctx, 31, 0x1B62B4u);
    ctx->pc = 0x1B62B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B62ACu;
    // 0x1b62b0: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B62ACu, 0x1B62B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B62B4u;
label_1b62b4:
    // 0x1b62b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b62b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b62b8: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1b62b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1b62bc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B62BCu;
    SET_GPR_U32(ctx, 31, 0x1B62C4u);
    ctx->pc = 0x1B62C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B62BCu;
    // 0x1b62c0: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B62BCu, 0x1B62C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B62C4u;
label_1b62c4:
    // 0x1b62c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b62c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b62c8: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1b62c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1b62cc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B62CCu;
    SET_GPR_U32(ctx, 31, 0x1B62D4u);
    ctx->pc = 0x1B62D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B62CCu;
    // 0x1b62d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B62CCu, 0x1B62D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B62D4u;
label_1b62d4:
    // 0x1b62d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b62d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b62d8: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x1b62d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1b62dc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B62DCu;
    SET_GPR_U32(ctx, 31, 0x1B62E4u);
    ctx->pc = 0x1B62E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B62DCu;
    // 0x1b62e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B62DCu, 0x1B62E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B62E4u;
label_1b62e4:
    // 0x1b62e4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1b62e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b62e8: 0x240200a1  addiu       $v0, $zero, 0xA1
    ctx->pc = 0x1b62e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x1b62ec: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b62ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b62f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b62f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b62f4: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1b62f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1b62f8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B62F8u;
    SET_GPR_U32(ctx, 31, 0x1B6300u);
    ctx->pc = 0x1B62FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B62F8u;
    // 0x1b62fc: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B62F8u, 0x1B6300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6300u;
label_1b6300:
    // 0x1b6300: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6304: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b6304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6308: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B6308u;
    SET_GPR_U32(ctx, 31, 0x1B6310u);
    ctx->pc = 0x1B630Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6308u;
    // 0x1b630c: 0x24060356  addiu       $a2, $zero, 0x356 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B6308u, 0x1B6310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6310u;
label_1b6310:
    // 0x1b6310: 0x8e2678c8  lw          $a2, 0x78C8($s1)
    ctx->pc = 0x1b6310u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30920)));
    // 0x1b6314: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6318: 0x9e2778cc  lwu         $a3, 0x78CC($s1)
    ctx->pc = 0x1b6318u;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 30924)));
    // 0x1b631c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1b631cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1b6320: 0x8e2278c4  lw          $v0, 0x78C4($s1)
    ctx->pc = 0x1b6320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30916)));
    // 0x1b6324: 0x9e2378c0  lwu         $v1, 0x78C0($s1)
    ctx->pc = 0x1b6324u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 30912)));
    // 0x1b6328: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1b6328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1b632c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1b632cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1b6330: 0x73938  dsll        $a3, $a3, 4
    ctx->pc = 0x1b6330u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 4);
    // 0x1b6334: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1b6334u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1b6338: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b6338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b633c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b633cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b6340: 0x34e7000a  ori         $a3, $a3, 0xA
    ctx->pc = 0x1b6340u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)10);
    // 0x1b6344: 0x633b8  dsll        $a2, $a2, 14
    ctx->pc = 0x1b6344u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 14);
    // 0x1b6348: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b6348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b634c: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1b634cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1b6350: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x1b6350u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x1b6354: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b6354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b6358: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1b6358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x1b635c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B635Cu;
    SET_GPR_U32(ctx, 31, 0x1B6364u);
    ctx->pc = 0x1B6360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B635Cu;
    // 0x1b6360: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B635Cu, 0x1B6364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6364u;
label_1b6364:
    // 0x1b6364: 0x8e2278c8  lw          $v0, 0x78C8($s1)
    ctx->pc = 0x1b6364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30920)));
    // 0x1b6368: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x1b6368u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x1b636c: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x1b636cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b6370: 0x10200035  beqz        $at, . + 4 + (0x35 << 2)
    ctx->pc = 0x1B6370u;
    {
        const bool branch_taken_0x1b6370 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6370u;
        // 0x1b6374: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6370) {
            ctx->pc = 0x1B6448u;
            goto label_1b6448;
        }
    }
    ctx->pc = 0x1B6378u;
    // 0x1b6378: 0x2413003f  addiu       $s3, $zero, 0x3F
    ctx->pc = 0x1b6378u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1b637c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b637cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b6380:
    // 0x1b6380: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x1b6380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1b6384: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b6384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b6388: 0x9e2678c0  lwu         $a2, 0x78C0($s1)
    ctx->pc = 0x1b6388u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 30912)));
    // 0x1b638c: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1b638cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1b6390: 0x12203c  dsll32      $a0, $s2, 0
    ctx->pc = 0x1b6390u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1b6394: 0x8e2278c4  lw          $v0, 0x78C4($s1)
    ctx->pc = 0x1b6394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30916)));
    // 0x1b6398: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1b6398u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1b639c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1b639cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b63a0: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1b63a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1b63a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b63a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b63a8: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1b63a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1b63ac: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1b63acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1b63b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b63b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b63b4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b63b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b63b8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b63b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b63bc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b63bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b63c0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B63C0u;
    SET_GPR_U32(ctx, 31, 0x1B63C8u);
    ctx->pc = 0x1B63C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B63C0u;
    // 0x1b63c4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B63C0u, 0x1B63C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B63C8u;
label_1b63c8:
    // 0x1b63c8: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1b63c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1b63cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b63ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b63d0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b63d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b63d4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B63D4u;
    SET_GPR_U32(ctx, 31, 0x1B63DCu);
    ctx->pc = 0x1B63D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B63D4u;
    // 0x1b63d8: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B63D4u, 0x1B63DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B63DCu;
label_1b63dc:
    // 0x1b63dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b63dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b63e0: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1b63e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1b63e4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b63e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b63e8: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1b63e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1b63ec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b63ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b63f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b63f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b63f4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1b63f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b63f8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B63F8u;
    SET_GPR_U32(ctx, 31, 0x1B6400u);
    ctx->pc = 0x1B63FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B63F8u;
    // 0x1b63fc: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B63F8u, 0x1B6400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6400u;
label_1b6400:
    // 0x1b6400: 0x3c020e09  lui         $v0, 0xE09
    ctx->pc = 0x1b6400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3593 << 16));
    // 0x1b6404: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6408: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b6408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b640c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B640Cu;
    SET_GPR_U32(ctx, 31, 0x1B6414u);
    ctx->pc = 0x1B6410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B640Cu;
    // 0x1b6410: 0x34462009  ori         $a2, $v0, 0x2009 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8201);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B640Cu, 0x1B6414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6414u;
label_1b6414:
    // 0x1b6414: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x1b6414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
    // 0x1b6418: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b641c: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1b641cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1b6420: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b6420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b6424: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B6424u;
    SET_GPR_U32(ctx, 31, 0x1B642Cu);
    ctx->pc = 0x1B6428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6424u;
    // 0x1b6428: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B6424u, 0x1B642Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B642Cu;
label_1b642c:
    // 0x1b642c: 0x8e2278c8  lw          $v0, 0x78C8($s1)
    ctx->pc = 0x1b642cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30920)));
    // 0x1b6430: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1b6430u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1b6434: 0x26730040  addiu       $s3, $s3, 0x40
    ctx->pc = 0x1b6434u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x1b6438: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x1b6438u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x1b643c: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x1b643cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b6440: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x1B6440u;
    {
        const bool branch_taken_0x1b6440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6440u;
        // 0x1b6444: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6440) {
            ctx->pc = 0x1B6380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b6380;
        }
    }
    ctx->pc = 0x1B6448u;
label_1b6448:
    // 0x1b6448: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b644c: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x1b644cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1b6450: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B6450u;
    SET_GPR_U32(ctx, 31, 0x1B6458u);
    ctx->pc = 0x1B6454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6450u;
    // 0x1b6454: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B6450u, 0x1B6458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6458u;
label_1b6458:
    // 0x1b6458: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b645c: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B645Cu;
    SET_GPR_U32(ctx, 31, 0x1B6464u);
    ctx->pc = 0x1B6460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B645Cu;
    // 0x1b6460: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B645Cu, 0x1B6464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6464u;
label_1b6464:
    // 0x1b6464: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b6464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b6468: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b646c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b646cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b6470: 0x3c020012  lui         $v0, 0x12
    ctx->pc = 0x1b6470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18 << 16));
    // 0x1b6474: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x1b6474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x1b6478: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1b6478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1b647c: 0x629025  or          $s2, $v1, $v0
    ctx->pc = 0x1b647cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b6480: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B6480u;
    SET_GPR_U32(ctx, 31, 0x1B6488u);
    ctx->pc = 0x1B6484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6480u;
    // 0x1b6484: 0x240500e0  addiu       $a1, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B6480u, 0x1B6488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6488u;
label_1b6488:
    // 0x1b6488: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b6488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b648c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b648cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b6490: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b6490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b6494: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b6494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b6498: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1b6498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1b649c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b649cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b64a0: 0x2432025  or          $a0, $s2, $v1
    ctx->pc = 0x1b64a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x1b64a4: 0x9e2378d0  lwu         $v1, 0x78D0($s1)
    ctx->pc = 0x1b64a4u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 30928)));
    // 0x1b64a8: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1b64a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1b64ac: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b64acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1b64b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b64b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b64b4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b64b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b64b8: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1b64b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1b64bc: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b64bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b64c0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B64C0u;
    SET_GPR_U32(ctx, 31, 0x1B64C8u);
    ctx->pc = 0x1B64C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B64C0u;
    // 0x1b64c4: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B64C0u, 0x1B64C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B64C8u;
label_1b64c8:
    // 0x1b64c8: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x1b64c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x1b64cc: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1b64ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1b64d0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b64d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1b64d4: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1b64d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1b64d8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b64d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b64dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b64dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b64e0: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1b64e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1b64e4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B64E4u;
    SET_GPR_U32(ctx, 31, 0x1B64ECu);
    ctx->pc = 0x1B64E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B64E4u;
    // 0x1b64e8: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B64E4u, 0x1B64ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B64ECu;
label_1b64ec:
    // 0x1b64ec: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1b64ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b64f0: 0x34028080  ori         $v0, $zero, 0x8080
    ctx->pc = 0x1b64f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x1b64f4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b64f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b64f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b64f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b64fc: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x1b64fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1b6500: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B6500u;
    SET_GPR_U32(ctx, 31, 0x1B6508u);
    ctx->pc = 0x1B6504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6500u;
    // 0x1b6504: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B6500u, 0x1B6508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6508u;
label_1b6508:
    // 0x1b6508: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b6508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b650c: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x1b650cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x1b6510: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b6510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b6514: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x1b6514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x1b6518: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b651c: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x1b651cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1b6520: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B6520u;
    SET_GPR_U32(ctx, 31, 0x1B6528u);
    ctx->pc = 0x1B6524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6520u;
    // 0x1b6524: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B6520u, 0x1B6528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6528u;
label_1b6528:
    // 0x1b6528: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b652c: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1b652cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1b6530: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B6530u;
    SET_GPR_U32(ctx, 31, 0x1B6538u);
    ctx->pc = 0x1B6534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6530u;
    // 0x1b6534: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B6530u, 0x1B6538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6538u;
label_1b6538:
    // 0x1b6538: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b653c: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1b653cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1b6540: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B6540u;
    SET_GPR_U32(ctx, 31, 0x1B6548u);
    ctx->pc = 0x1B6544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6540u;
    // 0x1b6544: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B6540u, 0x1B6548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6548u;
label_1b6548:
    // 0x1b6548: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1b6548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1b654c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b654cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6550: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b6550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6554: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B6554u;
    SET_GPR_U32(ctx, 31, 0x1B655Cu);
    ctx->pc = 0x1B6558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6554u;
    // 0x1b6558: 0x23438  dsll        $a2, $v0, 16 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << 16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B6554u, 0x1B655Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B655Cu;
label_1b655c:
    // 0x1b655c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1b655cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b6560: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x1b6560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1b6564: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b6564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b6568: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b656c: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1b656cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1b6570: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B6570u;
    SET_GPR_U32(ctx, 31, 0x1B6578u);
    ctx->pc = 0x1B6574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6570u;
    // 0x1b6574: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B6570u, 0x1B6578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6578u;
label_1b6578:
    // 0x1b6578: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b657c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b657cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6580: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B6580u;
    SET_GPR_U32(ctx, 31, 0x1B6588u);
    ctx->pc = 0x1B6584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6580u;
    // 0x1b6584: 0x24060356  addiu       $a2, $zero, 0x356 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B6580u, 0x1B6588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6588u;
label_1b6588:
    // 0x1b6588: 0x2403037c  addiu       $v1, $zero, 0x37C
    ctx->pc = 0x1b6588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 892));
    // 0x1b658c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x1b658cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x1b6590: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b6590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b6594: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x1b6594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x1b6598: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b659c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1b659cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1b65a0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B65A0u;
    SET_GPR_U32(ctx, 31, 0x1B65A8u);
    ctx->pc = 0x1B65A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B65A0u;
    // 0x1b65a4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B65A0u, 0x1B65A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B65A8u;
label_1b65a8:
    // 0x1b65a8: 0x8e2278c8  lw          $v0, 0x78C8($s1)
    ctx->pc = 0x1b65a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30920)));
    // 0x1b65ac: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x1b65acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x1b65b0: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x1b65b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b65b4: 0x10200036  beqz        $at, . + 4 + (0x36 << 2)
    ctx->pc = 0x1B65B4u;
    {
        const bool branch_taken_0x1b65b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B65B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B65B4u;
        // 0x1b65b8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b65b4) {
            ctx->pc = 0x1B6690u;
            goto label_1b6690;
        }
    }
    ctx->pc = 0x1B65BCu;
    // 0x1b65bc: 0x2413001f  addiu       $s3, $zero, 0x1F
    ctx->pc = 0x1b65bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1b65c0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b65c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b65c4: 0x0  nop
    ctx->pc = 0x1b65c4u;
    // NOP
label_1b65c8:
    // 0x1b65c8: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x1b65c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1b65cc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b65ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b65d0: 0x9e2678c0  lwu         $a2, 0x78C0($s1)
    ctx->pc = 0x1b65d0u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 30912)));
    // 0x1b65d4: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1b65d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1b65d8: 0x12203c  dsll32      $a0, $s2, 0
    ctx->pc = 0x1b65d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1b65dc: 0x8e2278c4  lw          $v0, 0x78C4($s1)
    ctx->pc = 0x1b65dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30916)));
    // 0x1b65e0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1b65e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1b65e4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1b65e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b65e8: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1b65e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1b65ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b65ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b65f0: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1b65f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1b65f4: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1b65f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1b65f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b65f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b65fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b65fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b6600: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b6600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b6604: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b6604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b6608: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B6608u;
    SET_GPR_U32(ctx, 31, 0x1B6610u);
    ctx->pc = 0x1B660Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6608u;
    // 0x1b660c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B6608u, 0x1B6610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6610u;
label_1b6610:
    // 0x1b6610: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1b6610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1b6614: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6618: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b6618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b661c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B661Cu;
    SET_GPR_U32(ctx, 31, 0x1B6624u);
    ctx->pc = 0x1B6620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B661Cu;
    // 0x1b6620: 0x34460010  ori         $a2, $v0, 0x10 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B661Cu, 0x1B6624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6624u;
label_1b6624:
    // 0x1b6624: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b6624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b6628: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1b6628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1b662c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b662cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b6630: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1b6630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1b6634: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b6634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b6638: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b663c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1b663cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b6640: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B6640u;
    SET_GPR_U32(ctx, 31, 0x1B6648u);
    ctx->pc = 0x1B6644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6640u;
    // 0x1b6644: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B6640u, 0x1B6648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6648u;
label_1b6648:
    // 0x1b6648: 0x3c020e10  lui         $v0, 0xE10
    ctx->pc = 0x1b6648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3600 << 16));
    // 0x1b664c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b664cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6650: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b6650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b6654: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B6654u;
    SET_GPR_U32(ctx, 31, 0x1B665Cu);
    ctx->pc = 0x1B6658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6654u;
    // 0x1b6658: 0x34462010  ori         $a2, $v0, 0x2010 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B6654u, 0x1B665Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B665Cu;
label_1b665c:
    // 0x1b665c: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x1b665cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
    // 0x1b6660: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6664: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1b6664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1b6668: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b6668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b666c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B666Cu;
    SET_GPR_U32(ctx, 31, 0x1B6674u);
    ctx->pc = 0x1B6670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B666Cu;
    // 0x1b6670: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B666Cu, 0x1B6674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6674u;
label_1b6674:
    // 0x1b6674: 0x8e2278c8  lw          $v0, 0x78C8($s1)
    ctx->pc = 0x1b6674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30920)));
    // 0x1b6678: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1b6678u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1b667c: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x1b667cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x1b6680: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x1b6680u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x1b6684: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x1b6684u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b6688: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x1B6688u;
    {
        const bool branch_taken_0x1b6688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B668Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6688u;
        // 0x1b668c: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6688) {
            ctx->pc = 0x1B65C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b65c8;
        }
    }
    ctx->pc = 0x1B6690u;
label_1b6690:
    // 0x1b6690: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1b6690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x1b6694: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x1b6694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b6698: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b669c: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1b669cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1b66a0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b66a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b66a4: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1b66a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1b66a8: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1b66a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1b66ac: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B66ACu;
    SET_GPR_U32(ctx, 31, 0x1B66B4u);
    ctx->pc = 0x1B66B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B66ACu;
    // 0x1b66b0: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B66ACu, 0x1B66B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B66B4u;
label_1b66b4:
    // 0x1b66b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b66b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b66b8: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x1b66b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x1b66bc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b66bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b66c0: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x1b66c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x1b66c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b66c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b66c8: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x1b66c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1b66cc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B66CCu;
    SET_GPR_U32(ctx, 31, 0x1B66D4u);
    ctx->pc = 0x1B66D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B66CCu;
    // 0x1b66d0: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B66CCu, 0x1B66D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B66D4u;
label_1b66d4:
    // 0x1b66d4: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x1b66d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x1b66d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b66d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b66dc: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1b66dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1b66e0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B66E0u;
    SET_GPR_U32(ctx, 31, 0x1B66E8u);
    ctx->pc = 0x1B66E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B66E0u;
    // 0x1b66e4: 0x3446c000  ori         $a2, $v0, 0xC000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B66E0u, 0x1B66E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B66E8u;
label_1b66e8:
    // 0x1b66e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b66e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b66ec: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1b66ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1b66f0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B66F0u;
    SET_GPR_U32(ctx, 31, 0x1B66F8u);
    ctx->pc = 0x1B66F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B66F0u;
    // 0x1b66f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B66F0u, 0x1B66F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B66F8u;
label_1b66f8:
    // 0x1b66f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b66f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b66fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b66fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6700: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B6700u;
    SET_GPR_U32(ctx, 31, 0x1B6708u);
    ctx->pc = 0x1B6704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6700u;
    // 0x1b6704: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B6700u, 0x1B6708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6708u;
label_1b6708:
    // 0x1b6708: 0x8e2678c8  lw          $a2, 0x78C8($s1)
    ctx->pc = 0x1b6708u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30920)));
    // 0x1b670c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b670cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6710: 0x9e2778cc  lwu         $a3, 0x78CC($s1)
    ctx->pc = 0x1b6710u;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 30924)));
    // 0x1b6714: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1b6714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1b6718: 0x8e2278c4  lw          $v0, 0x78C4($s1)
    ctx->pc = 0x1b6718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30916)));
    // 0x1b671c: 0x9e2378c0  lwu         $v1, 0x78C0($s1)
    ctx->pc = 0x1b671cu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 30912)));
    // 0x1b6720: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1b6720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1b6724: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1b6724u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1b6728: 0x73938  dsll        $a3, $a3, 4
    ctx->pc = 0x1b6728u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 4);
    // 0x1b672c: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1b672cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1b6730: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b6730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b6734: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b6734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b6738: 0x34e7000a  ori         $a3, $a3, 0xA
    ctx->pc = 0x1b6738u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)10);
    // 0x1b673c: 0x633b8  dsll        $a2, $a2, 14
    ctx->pc = 0x1b673cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 14);
    // 0x1b6740: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b6740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b6744: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1b6744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1b6748: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x1b6748u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x1b674c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b674cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b6750: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1b6750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x1b6754: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B6754u;
    SET_GPR_U32(ctx, 31, 0x1B675Cu);
    ctx->pc = 0x1B6758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6754u;
    // 0x1b6758: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B6754u, 0x1B675Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B675Cu;
label_1b675c:
    // 0x1b675c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b675cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6760: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b6760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6764: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B6764u;
    SET_GPR_U32(ctx, 31, 0x1B676Cu);
    ctx->pc = 0x1B6768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6764u;
    // 0x1b6768: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B6764u, 0x1B676Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B676Cu;
label_1b676c:
    // 0x1b676c: 0x8e2278c8  lw          $v0, 0x78C8($s1)
    ctx->pc = 0x1b676cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30920)));
    // 0x1b6770: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x1b6770u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x1b6774: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x1b6774u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b6778: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
    ctx->pc = 0x1B6778u;
    {
        const bool branch_taken_0x1b6778 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B677Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6778u;
        // 0x1b677c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6778) {
            ctx->pc = 0x1B6828u;
            goto label_1b6828;
        }
    }
    ctx->pc = 0x1B6780u;
    // 0x1b6780: 0x2413003f  addiu       $s3, $zero, 0x3F
    ctx->pc = 0x1b6780u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1b6784: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b6784u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b6788:
    // 0x1b6788: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x1b6788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1b678c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b678cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b6790: 0x9e2678c0  lwu         $a2, 0x78C0($s1)
    ctx->pc = 0x1b6790u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 30912)));
    // 0x1b6794: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1b6794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1b6798: 0x12203c  dsll32      $a0, $s2, 0
    ctx->pc = 0x1b6798u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1b679c: 0x8e2278c4  lw          $v0, 0x78C4($s1)
    ctx->pc = 0x1b679cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30916)));
    // 0x1b67a0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1b67a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1b67a4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1b67a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b67a8: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1b67a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1b67ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b67acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b67b0: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1b67b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1b67b4: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1b67b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1b67b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b67b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b67bc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b67bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b67c0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b67c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b67c4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b67c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b67c8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B67C8u;
    SET_GPR_U32(ctx, 31, 0x1B67D0u);
    ctx->pc = 0x1B67CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B67C8u;
    // 0x1b67cc: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B67C8u, 0x1B67D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B67D0u;
label_1b67d0:
    // 0x1b67d0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b67d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b67d4: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1b67d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1b67d8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b67d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b67dc: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1b67dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1b67e0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b67e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b67e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b67e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b67e8: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1b67e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b67ec: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B67ECu;
    SET_GPR_U32(ctx, 31, 0x1B67F4u);
    ctx->pc = 0x1B67F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B67ECu;
    // 0x1b67f0: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B67ECu, 0x1B67F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B67F4u;
label_1b67f4:
    // 0x1b67f4: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x1b67f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
    // 0x1b67f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b67f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b67fc: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1b67fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1b6800: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b6800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b6804: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B6804u;
    SET_GPR_U32(ctx, 31, 0x1B680Cu);
    ctx->pc = 0x1B6808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6804u;
    // 0x1b6808: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B6804u, 0x1B680Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B680Cu;
label_1b680c:
    // 0x1b680c: 0x8e2278c8  lw          $v0, 0x78C8($s1)
    ctx->pc = 0x1b680cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30920)));
    // 0x1b6810: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1b6810u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1b6814: 0x26730040  addiu       $s3, $s3, 0x40
    ctx->pc = 0x1b6814u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x1b6818: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x1b6818u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x1b681c: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x1b681cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b6820: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x1B6820u;
    {
        const bool branch_taken_0x1b6820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6820u;
        // 0x1b6824: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6820) {
            ctx->pc = 0x1B6788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b6788;
        }
    }
    ctx->pc = 0x1B6828u;
label_1b6828:
    // 0x1b6828: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1b6828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1b682c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b682cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6830: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B6830u;
    {
        const bool branch_taken_0x1b6830 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B6834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6830u;
        // 0x1b6834: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6830) {
            ctx->pc = 0x1B6850u;
            goto label_1b6850;
        }
    }
    ctx->pc = 0x1B6838u;
    // 0x1b6838: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1b6838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b683c: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x1b683cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1b6840: 0xc070974  jal         func_1C25D0
    ctx->pc = 0x1B6840u;
    SET_GPR_U32(ctx, 31, 0x1B6848u);
    ctx->pc = 0x1B6844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6840u;
    // 0x1b6844: 0x240700e0  addiu       $a3, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C25D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C25D0u, 0x1B6840u, 0x1B6848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6848u;
label_1b6848:
    // 0x1b6848: 0x10000103  b           . + 4 + (0x103 << 2)
    ctx->pc = 0x1B6848u;
    {
        const bool branch_taken_0x1b6848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6848) {
            ctx->pc = 0x1B6C58u;
            goto label_1b6c58;
        }
    }
    ctx->pc = 0x1B6850u;
label_1b6850:
    // 0x1b6850: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1b6850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b6854: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b6854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b6858: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b685c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1b685cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1b6860: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x1b6860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1b6864: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B6864u;
    SET_GPR_U32(ctx, 31, 0x1B686Cu);
    ctx->pc = 0x1B6868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6864u;
    // 0x1b6868: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B6864u, 0x1B686Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B686Cu;
label_1b686c:
    // 0x1b686c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b686cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6870: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1b6870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1b6874: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B6874u;
    SET_GPR_U32(ctx, 31, 0x1B687Cu);
    ctx->pc = 0x1B6878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6874u;
    // 0x1b6878: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B6874u, 0x1B687Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B687Cu;
label_1b687c:
    // 0x1b687c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b687cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6880: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B6880u;
    SET_GPR_U32(ctx, 31, 0x1B6888u);
    ctx->pc = 0x1B6884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6880u;
    // 0x1b6884: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B6880u, 0x1B6888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6888u;
label_1b6888:
    // 0x1b6888: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b6888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b688c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b688cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6890: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b6890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b6894: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1B6894u;
    SET_GPR_U32(ctx, 31, 0x1B689Cu);
    ctx->pc = 0x1B6898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6894u;
    // 0x1b6898: 0x296b8  dsll        $s2, $v0, 26 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << 26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1B6894u, 0x1B689Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B689Cu;
label_1b689c:
    // 0x1b689c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1b689cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1b68a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b68a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b68a4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b68a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b68a8: 0x3c020012  lui         $v0, 0x12
    ctx->pc = 0x1b68a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18 << 16));
    // 0x1b68ac: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b68acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b68b0: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x1b68b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1b68b4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1b68b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b68b8: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B68B8u;
    SET_GPR_U32(ctx, 31, 0x1B68C0u);
    ctx->pc = 0x1B68BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B68B8u;
    // 0x1b68bc: 0x2429025  or          $s2, $s2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B68B8u, 0x1B68C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B68C0u;
label_1b68c0:
    // 0x1b68c0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b68c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b68c4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b68c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b68c8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b68c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b68cc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1b68ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b68d0: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1b68d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1b68d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b68d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b68d8: 0x722025  or          $a0, $v1, $s2
    ctx->pc = 0x1b68d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x1b68dc: 0x9e2378d0  lwu         $v1, 0x78D0($s1)
    ctx->pc = 0x1b68dcu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 30928)));
    // 0x1b68e0: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1b68e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1b68e4: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b68e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1b68e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b68e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b68ec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b68ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b68f0: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1b68f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1b68f4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b68f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b68f8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B68F8u;
    SET_GPR_U32(ctx, 31, 0x1B6900u);
    ctx->pc = 0x1B68FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B68F8u;
    // 0x1b68fc: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B68F8u, 0x1B6900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6900u;
label_1b6900:
    // 0x1b6900: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x1b6900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x1b6904: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1b6904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1b6908: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b6908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b690c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1b690cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1b6910: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b6910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b6914: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6918: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1b6918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1b691c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B691Cu;
    SET_GPR_U32(ctx, 31, 0x1B6924u);
    ctx->pc = 0x1B6920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B691Cu;
    // 0x1b6920: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B691Cu, 0x1B6924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6924u;
label_1b6924:
    // 0x1b6924: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6928: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1b6928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1b692c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B692Cu;
    SET_GPR_U32(ctx, 31, 0x1B6934u);
    ctx->pc = 0x1B6930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B692Cu;
    // 0x1b6930: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B692Cu, 0x1B6934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6934u;
label_1b6934:
    // 0x1b6934: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6938: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b6938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b693c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B693Cu;
    SET_GPR_U32(ctx, 31, 0x1B6944u);
    ctx->pc = 0x1B6940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B693Cu;
    // 0x1b6940: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B693Cu, 0x1B6944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6944u;
label_1b6944:
    // 0x1b6944: 0x8e2278c8  lw          $v0, 0x78C8($s1)
    ctx->pc = 0x1b6944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30920)));
    // 0x1b6948: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x1b6948u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x1b694c: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x1b694cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b6950: 0x10200035  beqz        $at, . + 4 + (0x35 << 2)
    ctx->pc = 0x1B6950u;
    {
        const bool branch_taken_0x1b6950 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6950u;
        // 0x1b6954: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6950) {
            ctx->pc = 0x1B6A28u;
            goto label_1b6a28;
        }
    }
    ctx->pc = 0x1B6958u;
    // 0x1b6958: 0x2413001f  addiu       $s3, $zero, 0x1F
    ctx->pc = 0x1b6958u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1b695c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b695cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b6960:
    // 0x1b6960: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x1b6960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1b6964: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b6964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b6968: 0x9e2678c0  lwu         $a2, 0x78C0($s1)
    ctx->pc = 0x1b6968u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 30912)));
    // 0x1b696c: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1b696cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1b6970: 0x12203c  dsll32      $a0, $s2, 0
    ctx->pc = 0x1b6970u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1b6974: 0x8e2278c4  lw          $v0, 0x78C4($s1)
    ctx->pc = 0x1b6974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30916)));
    // 0x1b6978: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1b6978u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1b697c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1b697cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b6980: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1b6980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1b6984: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6988: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1b6988u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1b698c: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1b698cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1b6990: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b6990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b6994: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b6994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b6998: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b6998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b699c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b699cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b69a0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B69A0u;
    SET_GPR_U32(ctx, 31, 0x1B69A8u);
    ctx->pc = 0x1B69A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B69A0u;
    // 0x1b69a4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B69A0u, 0x1B69A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B69A8u;
label_1b69a8:
    // 0x1b69a8: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1b69a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1b69ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b69acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b69b0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b69b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b69b4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B69B4u;
    SET_GPR_U32(ctx, 31, 0x1B69BCu);
    ctx->pc = 0x1B69B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B69B4u;
    // 0x1b69b8: 0x34460010  ori         $a2, $v0, 0x10 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B69B4u, 0x1B69BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B69BCu;
label_1b69bc:
    // 0x1b69bc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b69bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b69c0: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1b69c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1b69c4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b69c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b69c8: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1b69c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1b69cc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b69ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b69d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b69d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b69d4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1b69d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b69d8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B69D8u;
    SET_GPR_U32(ctx, 31, 0x1B69E0u);
    ctx->pc = 0x1B69DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B69D8u;
    // 0x1b69dc: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B69D8u, 0x1B69E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B69E0u;
label_1b69e0:
    // 0x1b69e0: 0x3c020e10  lui         $v0, 0xE10
    ctx->pc = 0x1b69e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3600 << 16));
    // 0x1b69e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b69e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b69e8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b69e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b69ec: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B69ECu;
    SET_GPR_U32(ctx, 31, 0x1B69F4u);
    ctx->pc = 0x1B69F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B69ECu;
    // 0x1b69f0: 0x34462010  ori         $a2, $v0, 0x2010 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B69ECu, 0x1B69F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B69F4u;
label_1b69f4:
    // 0x1b69f4: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x1b69f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
    // 0x1b69f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b69f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b69fc: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1b69fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1b6a00: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b6a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b6a04: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B6A04u;
    SET_GPR_U32(ctx, 31, 0x1B6A0Cu);
    ctx->pc = 0x1B6A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6A04u;
    // 0x1b6a08: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B6A04u, 0x1B6A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6A0Cu;
label_1b6a0c:
    // 0x1b6a0c: 0x8e2278c8  lw          $v0, 0x78C8($s1)
    ctx->pc = 0x1b6a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30920)));
    // 0x1b6a10: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1b6a10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1b6a14: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x1b6a14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x1b6a18: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x1b6a18u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x1b6a1c: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x1b6a1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b6a20: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x1B6A20u;
    {
        const bool branch_taken_0x1b6a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6A20u;
        // 0x1b6a24: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6a20) {
            ctx->pc = 0x1B6960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b6960;
        }
    }
    ctx->pc = 0x1B6A28u;
label_1b6a28:
    // 0x1b6a28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6a2c: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B6A2Cu;
    SET_GPR_U32(ctx, 31, 0x1B6A34u);
    ctx->pc = 0x1B6A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6A2Cu;
    // 0x1b6a30: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B6A2Cu, 0x1B6A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6A34u;
label_1b6a34:
    // 0x1b6a34: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b6a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b6a38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6a3c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b6a3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b6a40: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1b6a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1b6a44: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x1b6a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x1b6a48: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1b6a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1b6a4c: 0x629025  or          $s2, $v1, $v0
    ctx->pc = 0x1b6a4cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b6a50: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B6A50u;
    SET_GPR_U32(ctx, 31, 0x1B6A58u);
    ctx->pc = 0x1B6A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6A50u;
    // 0x1b6a54: 0x240500e0  addiu       $a1, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B6A50u, 0x1B6A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6A58u;
label_1b6a58:
    // 0x1b6a58: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b6a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b6a5c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b6a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b6a60: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b6a60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b6a64: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b6a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b6a68: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1b6a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1b6a6c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b6a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b6a70: 0x2432025  or          $a0, $s2, $v1
    ctx->pc = 0x1b6a70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x1b6a74: 0x9e2378d0  lwu         $v1, 0x78D0($s1)
    ctx->pc = 0x1b6a74u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 30928)));
    // 0x1b6a78: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1b6a78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1b6a7c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b6a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1b6a80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6a84: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b6a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b6a88: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1b6a88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1b6a8c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b6a8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b6a90: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B6A90u;
    SET_GPR_U32(ctx, 31, 0x1B6A98u);
    ctx->pc = 0x1B6A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6A90u;
    // 0x1b6a94: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B6A90u, 0x1B6A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6A98u;
label_1b6a98:
    // 0x1b6a98: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1B6A98u;
    SET_GPR_U32(ctx, 31, 0x1B6AA0u);
    ctx->pc = 0x1B6A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6A98u;
    // 0x1b6a9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1B6A98u, 0x1B6AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6AA0u;
label_1b6aa0:
    // 0x1b6aa0: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1b6aa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b6aa4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6aa8: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x1b6aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x1b6aac: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1b6aacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1b6ab0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b6ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b6ab4: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1b6ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1b6ab8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b6ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b6abc: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1b6abcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1b6ac0: 0xa23025  or          $a2, $a1, $v0
    ctx->pc = 0x1b6ac0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1b6ac4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B6AC4u;
    SET_GPR_U32(ctx, 31, 0x1B6ACCu);
    ctx->pc = 0x1B6AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6AC4u;
    // 0x1b6ac8: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B6AC4u, 0x1B6ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6ACCu;
label_1b6acc:
    // 0x1b6acc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6ad0: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1b6ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1b6ad4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B6AD4u;
    SET_GPR_U32(ctx, 31, 0x1B6ADCu);
    ctx->pc = 0x1B6AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6AD4u;
    // 0x1b6ad8: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B6AD4u, 0x1B6ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6ADCu;
label_1b6adc:
    // 0x1b6adc: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1b6adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b6ae0: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x1b6ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1b6ae4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b6ae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b6ae8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6aec: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1b6aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1b6af0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B6AF0u;
    SET_GPR_U32(ctx, 31, 0x1B6AF8u);
    ctx->pc = 0x1B6AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6AF0u;
    // 0x1b6af4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B6AF0u, 0x1B6AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6AF8u;
label_1b6af8:
    // 0x1b6af8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6afc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b6afcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6b00: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B6B00u;
    SET_GPR_U32(ctx, 31, 0x1B6B08u);
    ctx->pc = 0x1B6B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6B00u;
    // 0x1b6b04: 0x24060356  addiu       $a2, $zero, 0x356 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B6B00u, 0x1B6B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6B08u;
label_1b6b08:
    // 0x1b6b08: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1b6b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1b6b0c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b6b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b6b10: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B6B10u;
    {
        const bool branch_taken_0x1b6b10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b6b10) {
            ctx->pc = 0x1B6B40u;
            goto label_1b6b40;
        }
    }
    ctx->pc = 0x1B6B18u;
    // 0x1b6b18: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1b6b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1b6b1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6b20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b6b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6b24: 0x21602  srl         $v0, $v0, 24
    ctx->pc = 0x1b6b24u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x1b6b28: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b6b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b6b2c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b6b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b6b30: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B6B30u;
    SET_GPR_U32(ctx, 31, 0x1B6B38u);
    ctx->pc = 0x1B6B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6B30u;
    // 0x1b6b34: 0x23638  dsll        $a2, $v0, 24 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << 24);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B6B30u, 0x1B6B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6B38u;
label_1b6b38:
    // 0x1b6b38: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1B6B38u;
    {
        const bool branch_taken_0x1b6b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6b38) {
            ctx->pc = 0x1B6B70u;
            goto label_1b6b70;
        }
    }
    ctx->pc = 0x1B6B40u;
label_1b6b40:
    // 0x1b6b40: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1b6b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1b6b44: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x1b6b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x1b6b48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6b4c: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x1b6b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x1b6b50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b6b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6b54: 0x31e02  srl         $v1, $v1, 24
    ctx->pc = 0x1b6b54u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x1b6b58: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b6b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b6b5c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b6b5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b6b60: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1b6b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1b6b64: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B6B64u;
    SET_GPR_U32(ctx, 31, 0x1B6B6Cu);
    ctx->pc = 0x1B6B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6B64u;
    // 0x1b6b68: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B6B64u, 0x1B6B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6B6Cu;
label_1b6b6c:
    // 0x1b6b6c: 0x0  nop
    ctx->pc = 0x1b6b6cu;
    // NOP
label_1b6b70:
    // 0x1b6b70: 0x8e2378c8  lw          $v1, 0x78C8($s1)
    ctx->pc = 0x1b6b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30920)));
    // 0x1b6b74: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x1b6b74u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x1b6b78: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x1b6b78u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b6b7c: 0x10200036  beqz        $at, . + 4 + (0x36 << 2)
    ctx->pc = 0x1B6B7Cu;
    {
        const bool branch_taken_0x1b6b7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6B7Cu;
        // 0x1b6b80: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6b7c) {
            ctx->pc = 0x1B6C58u;
            goto label_1b6c58;
        }
    }
    ctx->pc = 0x1B6B84u;
    // 0x1b6b84: 0x2412001f  addiu       $s2, $zero, 0x1F
    ctx->pc = 0x1b6b84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1b6b88: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b6b88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6b8c: 0x0  nop
    ctx->pc = 0x1b6b8cu;
    // NOP
label_1b6b90:
    // 0x1b6b90: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x1b6b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1b6b94: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b6b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b6b98: 0x9e2678c0  lwu         $a2, 0x78C0($s1)
    ctx->pc = 0x1b6b98u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 30912)));
    // 0x1b6b9c: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1b6b9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1b6ba0: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x1b6ba0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1b6ba4: 0x8e2278c4  lw          $v0, 0x78C4($s1)
    ctx->pc = 0x1b6ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30916)));
    // 0x1b6ba8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1b6ba8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1b6bac: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1b6bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b6bb0: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1b6bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1b6bb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6bb8: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1b6bb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1b6bbc: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1b6bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1b6bc0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b6bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b6bc4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b6bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b6bc8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b6bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b6bcc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b6bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b6bd0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B6BD0u;
    SET_GPR_U32(ctx, 31, 0x1B6BD8u);
    ctx->pc = 0x1B6BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6BD0u;
    // 0x1b6bd4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B6BD0u, 0x1B6BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6BD8u;
label_1b6bd8:
    // 0x1b6bd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6bdc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b6bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b6be0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B6BE0u;
    SET_GPR_U32(ctx, 31, 0x1B6BE8u);
    ctx->pc = 0x1B6BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6BE0u;
    // 0x1b6be4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B6BE0u, 0x1B6BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6BE8u;
label_1b6be8:
    // 0x1b6be8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b6be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b6bec: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1b6becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1b6bf0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b6bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b6bf4: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1b6bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1b6bf8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b6bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b6bfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6c00: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1b6c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b6c04: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B6C04u;
    SET_GPR_U32(ctx, 31, 0x1B6C0Cu);
    ctx->pc = 0x1B6C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6C04u;
    // 0x1b6c08: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B6C04u, 0x1B6C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6C0Cu;
label_1b6c0c:
    // 0x1b6c0c: 0x3c020e00  lui         $v0, 0xE00
    ctx->pc = 0x1b6c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3584 << 16));
    // 0x1b6c10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6c14: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b6c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b6c18: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B6C18u;
    SET_GPR_U32(ctx, 31, 0x1B6C20u);
    ctx->pc = 0x1B6C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6C18u;
    // 0x1b6c1c: 0x34462000  ori         $a2, $v0, 0x2000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B6C18u, 0x1B6C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6C20u;
label_1b6c20:
    // 0x1b6c20: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x1b6c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
    // 0x1b6c24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6c28: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1b6c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1b6c2c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b6c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b6c30: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B6C30u;
    SET_GPR_U32(ctx, 31, 0x1B6C38u);
    ctx->pc = 0x1B6C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6C30u;
    // 0x1b6c34: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B6C30u, 0x1B6C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6C38u;
label_1b6c38:
    // 0x1b6c38: 0x8e2378c8  lw          $v1, 0x78C8($s1)
    ctx->pc = 0x1b6c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30920)));
    // 0x1b6c3c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1b6c3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1b6c40: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x1b6c40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1b6c44: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x1b6c44u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x1b6c48: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x1b6c48u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b6c4c: 0x1460ffd0  bnez        $v1, . + 4 + (-0x30 << 2)
    ctx->pc = 0x1B6C4Cu;
    {
        const bool branch_taken_0x1b6c4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6C4Cu;
        // 0x1b6c50: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6c4c) {
            ctx->pc = 0x1B6B90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b6b90;
        }
    }
    ctx->pc = 0x1B6C54u;
    // 0x1b6c54: 0x0  nop
    ctx->pc = 0x1b6c54u;
    // NOP
label_1b6c58:
    // 0x1b6c58: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1b6c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b6c5c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b6c5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b6c60: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b6c60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b6c64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b6c64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b6c68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b6c68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6c6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b6c6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6c70: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6C70u;
        // 0x1b6c74: 0x27bd0c60  addiu       $sp, $sp, 0xC60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3168));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6C70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6C78u;
}
