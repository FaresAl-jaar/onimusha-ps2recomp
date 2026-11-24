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

// Function: sub_001BFFF0
// Address: 0x1bfff0 - 0x1c08c0
void sub_001BFFF0_0x1bfff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BFFF0_0x1bfff0");
#endif

    switch (ctx->pc) {
        case 0x1c0034u: goto label_1c0034;
        case 0x1c0048u: goto label_1c0048;
        case 0x1c0058u: goto label_1c0058;
        case 0x1c0078u: goto label_1c0078;
        case 0x1c0088u: goto label_1c0088;
        case 0x1c00a8u: goto label_1c00a8;
        case 0x1c00b8u: goto label_1c00b8;
        case 0x1c00e8u: goto label_1c00e8;
        case 0x1c010cu: goto label_1c010c;
        case 0x1c0124u: goto label_1c0124;
        case 0x1c0144u: goto label_1c0144;
        case 0x1c0168u: goto label_1c0168;
        case 0x1c01a8u: goto label_1c01a8;
        case 0x1c01bcu: goto label_1c01bc;
        case 0x1c01f4u: goto label_1c01f4;
        case 0x1c0214u: goto label_1c0214;
        case 0x1c0224u: goto label_1c0224;
        case 0x1c0234u: goto label_1c0234;
        case 0x1c0254u: goto label_1c0254;
        case 0x1c0264u: goto label_1c0264;
        case 0x1c02a0u: goto label_1c02a0;
        case 0x1c02e8u: goto label_1c02e8;
        case 0x1c02fcu: goto label_1c02fc;
        case 0x1c030cu: goto label_1c030c;
        case 0x1c0320u: goto label_1c0320;
        case 0x1c0330u: goto label_1c0330;
        case 0x1c0350u: goto label_1c0350;
        case 0x1c0364u: goto label_1c0364;
        case 0x1c0374u: goto label_1c0374;
        case 0x1c0384u: goto label_1c0384;
        case 0x1c03a0u: goto label_1c03a0;
        case 0x1c03b0u: goto label_1c03b0;
        case 0x1c03c0u: goto label_1c03c0;
        case 0x1c03f8u: goto label_1c03f8;
        case 0x1c0440u: goto label_1c0440;
        case 0x1c0450u: goto label_1c0450;
        case 0x1c0460u: goto label_1c0460;
        case 0x1c0480u: goto label_1c0480;
        case 0x1c04a0u: goto label_1c04a0;
        case 0x1c04b0u: goto label_1c04b0;
        case 0x1c04c4u: goto label_1c04c4;
        case 0x1c04d0u: goto label_1c04d0;
        case 0x1c04f4u: goto label_1c04f4;
        case 0x1c0534u: goto label_1c0534;
        case 0x1c0550u: goto label_1c0550;
        case 0x1c0570u: goto label_1c0570;
        case 0x1c0590u: goto label_1c0590;
        case 0x1c05a0u: goto label_1c05a0;
        case 0x1c05b0u: goto label_1c05b0;
        case 0x1c05e0u: goto label_1c05e0;
        case 0x1c05f4u: goto label_1c05f4;
        case 0x1c0618u: goto label_1c0618;
        case 0x1c062cu: goto label_1c062c;
        case 0x1c0644u: goto label_1c0644;
        case 0x1c0664u: goto label_1c0664;
        case 0x1c0670u: goto label_1c0670;
        case 0x1c070cu: goto label_1c070c;
        case 0x1c0718u: goto label_1c0718;
        case 0x1c073cu: goto label_1c073c;
        case 0x1c077cu: goto label_1c077c;
        case 0x1c07a0u: goto label_1c07a0;
        case 0x1c07b0u: goto label_1c07b0;
        case 0x1c07c0u: goto label_1c07c0;
        case 0x1c07d0u: goto label_1c07d0;
        case 0x1c0818u: goto label_1c0818;
        case 0x1c082cu: goto label_1c082c;
        case 0x1c0850u: goto label_1c0850;
        case 0x1c0864u: goto label_1c0864;
        case 0x1c087cu: goto label_1c087c;
        default: break;
    }

    ctx->pc = 0x1bfff0u;

    // 0x1bfff0: 0x27bdfb60  addiu       $sp, $sp, -0x4A0
    ctx->pc = 0x1bfff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966112));
    // 0x1bfff4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bfff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bfff8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1bfff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1bfffc: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x1bfffcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c0000: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1c0000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1c0004: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1c0004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1c0008: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x1c0008u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c000c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1c000cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1c0010: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c0010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0014: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1c0014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1c0018: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c0018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1c001c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1c001cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0020: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c0020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c0024: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c0024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c0028: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c0028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c002c: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1C002Cu;
    SET_GPR_U32(ctx, 31, 0x1C0034u);
    ctx->pc = 0x1C0030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C002Cu;
    // 0x1c0030: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1C002Cu, 0x1C0034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0034u;
label_1c0034:
    // 0x1c0034: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1c0034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1c0038: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c003c: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1c003cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1c0040: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0040u;
    SET_GPR_U32(ctx, 31, 0x1C0048u);
    ctx->pc = 0x1C0044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0040u;
    // 0x1c0044: 0x34460080  ori         $a2, $v0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0040u, 0x1C0048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0048u;
label_1c0048:
    // 0x1c0048: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c004c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c004cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0050: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0050u;
    SET_GPR_U32(ctx, 31, 0x1C0058u);
    ctx->pc = 0x1C0054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0050u;
    // 0x1c0054: 0x24060306  addiu       $a2, $zero, 0x306 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 774));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0050u, 0x1C0058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0058u;
label_1c0058:
    // 0x1c0058: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x1c0058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1c005c: 0x3c021f1f  lui         $v0, 0x1F1F
    ctx->pc = 0x1c005cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7967 << 16));
    // 0x1c0060: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c0060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c0064: 0x34421f1f  ori         $v0, $v0, 0x1F1F
    ctx->pc = 0x1c0064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7967);
    // 0x1c0068: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c006c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c006cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0070: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0070u;
    SET_GPR_U32(ctx, 31, 0x1C0078u);
    ctx->pc = 0x1C0074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0070u;
    // 0x1c0074: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0070u, 0x1C0078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0078u;
label_1c0078:
    // 0x1c0078: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c007c: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1c007cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c0080: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0080u;
    SET_GPR_U32(ctx, 31, 0x1C0088u);
    ctx->pc = 0x1C0084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0080u;
    // 0x1c0084: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0080u, 0x1C0088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0088u;
label_1c0088:
    // 0x1c0088: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c0088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c008c: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x1c008cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x1c0090: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c0090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c0094: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x1c0094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x1c0098: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c009c: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x1c009cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1c00a0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C00A0u;
    SET_GPR_U32(ctx, 31, 0x1C00A8u);
    ctx->pc = 0x1C00A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C00A0u;
    // 0x1c00a4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C00A0u, 0x1C00A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C00A8u;
label_1c00a8:
    // 0x1c00a8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c00a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c00ac: 0x2411003f  addiu       $s1, $zero, 0x3F
    ctx->pc = 0x1c00acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1c00b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c00b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c00b4: 0x0  nop
    ctx->pc = 0x1c00b4u;
    // NOP
label_1c00b8:
    // 0x1c00b8: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x1c00b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1c00bc: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x1c00bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1c00c0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1c00c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1c00c4: 0x3c0200df  lui         $v0, 0xDF
    ctx->pc = 0x1c00c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)223 << 16));
    // 0x1c00c8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1c00c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1c00cc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1c00ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1c00d0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c00d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c00d4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1c00d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c00d8: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1c00d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1c00dc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c00dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c00e0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C00E0u;
    SET_GPR_U32(ctx, 31, 0x1C00E8u);
    ctx->pc = 0x1C00E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C00E0u;
    // 0x1c00e4: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C00E0u, 0x1C00E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C00E8u;
label_1c00e8:
    // 0x1c00e8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1c00e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c00ec: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1c00ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1c00f0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c00f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c00f4: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1c00f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1c00f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c00f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c00fc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c00fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0100: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1c0100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c0104: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0104u;
    SET_GPR_U32(ctx, 31, 0x1C010Cu);
    ctx->pc = 0x1C0108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0104u;
    // 0x1c0108: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0104u, 0x1C010Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C010Cu;
label_1c010c:
    // 0x1c010c: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x1c010cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
    // 0x1c0110: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0114: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1c0114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1c0118: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1c0118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c011c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C011Cu;
    SET_GPR_U32(ctx, 31, 0x1C0124u);
    ctx->pc = 0x1C0120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C011Cu;
    // 0x1c0120: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C011Cu, 0x1C0124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0124u;
label_1c0124:
    // 0x1c0124: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1c0124u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1c0128: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x1c0128u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1c012c: 0x2e420008  sltiu       $v0, $s2, 0x8
    ctx->pc = 0x1c012cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1c0130: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1C0130u;
    {
        const bool branch_taken_0x1c0130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0130u;
        // 0x1c0134: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0130) {
            ctx->pc = 0x1C00B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c00b8;
        }
    }
    ctx->pc = 0x1C0138u;
    // 0x1c0138: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c013c: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1C013Cu;
    SET_GPR_U32(ctx, 31, 0x1C0144u);
    ctx->pc = 0x1C0140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C013Cu;
    // 0x1c0140: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1C013Cu, 0x1C0144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0144u;
label_1c0144:
    // 0x1c0144: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1c0144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c0148: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c014c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1c014cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1c0150: 0x3c0203a2  lui         $v0, 0x3A2
    ctx->pc = 0x1c0150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)930 << 16));
    // 0x1c0154: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x1c0154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x1c0158: 0x34421800  ori         $v0, $v0, 0x1800
    ctx->pc = 0x1c0158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6144);
    // 0x1c015c: 0x628025  or          $s0, $v1, $v0
    ctx->pc = 0x1c015cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c0160: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1C0160u;
    SET_GPR_U32(ctx, 31, 0x1C0168u);
    ctx->pc = 0x1C0164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0160u;
    // 0x1c0164: 0x240500e0  addiu       $a1, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1C0160u, 0x1C0168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0168u;
label_1c0168:
    // 0x1c0168: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1c0168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c016c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1c016cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c0170: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1c0170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1c0174: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c0174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c0178: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1c0178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1c017c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c017cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c0180: 0x2032025  or          $a0, $s0, $v1
    ctx->pc = 0x1c0180u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1c0184: 0x9ea378d0  lwu         $v1, 0x78D0($s5)
    ctx->pc = 0x1c0184u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 30928)));
    // 0x1c0188: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1c0188u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1c018c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1c018cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1c0190: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0194: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c0194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c0198: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1c0198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1c019c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1c019cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1c01a0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C01A0u;
    SET_GPR_U32(ctx, 31, 0x1C01A8u);
    ctx->pc = 0x1C01A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C01A0u;
    // 0x1c01a4: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C01A0u, 0x1C01A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C01A8u;
label_1c01a8:
    // 0x1c01a8: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1c01a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1c01ac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c01acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c01b0: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1c01b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1c01b4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C01B4u;
    SET_GPR_U32(ctx, 31, 0x1C01BCu);
    ctx->pc = 0x1C01B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C01B4u;
    // 0x1c01b8: 0x34460080  ori         $a2, $v0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C01B4u, 0x1C01BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C01BCu;
label_1c01bc:
    // 0x1c01bc: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x1c01bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x1c01c0: 0x9ea678c0  lwu         $a2, 0x78C0($s5)
    ctx->pc = 0x1c01c0u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 30912)));
    // 0x1c01c4: 0x3443c00a  ori         $v1, $v0, 0xC00A
    ctx->pc = 0x1c01c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x1c01c8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c01c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c01cc: 0x8ea278c4  lw          $v0, 0x78C4($s5)
    ctx->pc = 0x1c01ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30916)));
    // 0x1c01d0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1c01d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1c01d4: 0x63638  dsll        $a2, $a2, 24
    ctx->pc = 0x1c01d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 24);
    // 0x1c01d8: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1c01d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1c01dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c01dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c01e0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c01e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c01e4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c01e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c01e8: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1c01e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x1c01ec: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C01ECu;
    SET_GPR_U32(ctx, 31, 0x1C01F4u);
    ctx->pc = 0x1C01F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C01ECu;
    // 0x1c01f0: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C01ECu, 0x1C01F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C01F4u;
label_1c01f4:
    // 0x1c01f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c01f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c01f8: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x1c01f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x1c01fc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c01fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c0200: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x1c0200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x1c0204: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0208: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x1c0208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1c020c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C020Cu;
    SET_GPR_U32(ctx, 31, 0x1C0214u);
    ctx->pc = 0x1C0210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C020Cu;
    // 0x1c0210: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C020Cu, 0x1C0214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0214u;
label_1c0214:
    // 0x1c0214: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0218: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1c0218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c021c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C021Cu;
    SET_GPR_U32(ctx, 31, 0x1C0224u);
    ctx->pc = 0x1C0220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C021Cu;
    // 0x1c0220: 0x3c060005  lui         $a2, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C021Cu, 0x1C0224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0224u;
label_1c0224:
    // 0x1c0224: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0228: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1c0228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1c022c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C022Cu;
    SET_GPR_U32(ctx, 31, 0x1C0234u);
    ctx->pc = 0x1C0230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C022Cu;
    // 0x1c0230: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C022Cu, 0x1C0234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0234u;
label_1c0234:
    // 0x1c0234: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1c0234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c0238: 0x3c021010  lui         $v0, 0x1010
    ctx->pc = 0x1c0238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4112 << 16));
    // 0x1c023c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c023cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c0240: 0x34421010  ori         $v0, $v0, 0x1010
    ctx->pc = 0x1c0240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4112);
    // 0x1c0244: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0248: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c0248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c024c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C024Cu;
    SET_GPR_U32(ctx, 31, 0x1C0254u);
    ctx->pc = 0x1C0250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C024Cu;
    // 0x1c0250: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C024Cu, 0x1C0254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0254u;
label_1c0254:
    // 0x1c0254: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0258: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c0258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c025c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C025Cu;
    SET_GPR_U32(ctx, 31, 0x1C0264u);
    ctx->pc = 0x1C0260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C025Cu;
    // 0x1c0260: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C025Cu, 0x1C0264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0264u;
label_1c0264:
    // 0x1c0264: 0x1e1280  sll         $v0, $fp, 10
    ctx->pc = 0x1c0264u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 10));
    // 0x1c0268: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c0268u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c026c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1c026cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c0270: 0x2413003f  addiu       $s3, $zero, 0x3F
    ctx->pc = 0x1c0270u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1c0274: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1c0274u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c0278: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1c0278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1c027c: 0x34437000  ori         $v1, $v0, 0x7000
    ctx->pc = 0x1c027cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1c0280: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1c0280u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1c0284: 0x34028700  ori         $v0, $zero, 0x8700
    ctx->pc = 0x1c0284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34560);
    // 0x1c0288: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1c0288u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1c028c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1c028cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1c0290: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c0290u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0294: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1c0294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1c0298: 0x838825  or          $s1, $a0, $v1
    ctx->pc = 0x1c0298u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c029c: 0x828025  or          $s0, $a0, $v0
    ctx->pc = 0x1c029cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_1c02a0:
    // 0x1c02a0: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x1c02a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1c02a4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c02a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c02a8: 0x9ea678c0  lwu         $a2, 0x78C0($s5)
    ctx->pc = 0x1c02a8u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 30912)));
    // 0x1c02ac: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1c02acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1c02b0: 0x12203c  dsll32      $a0, $s2, 0
    ctx->pc = 0x1c02b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1c02b4: 0x8ea278c4  lw          $v0, 0x78C4($s5)
    ctx->pc = 0x1c02b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30916)));
    // 0x1c02b8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1c02b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1c02bc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1c02bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c02c0: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1c02c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1c02c4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c02c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c02c8: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1c02c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1c02cc: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1c02ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1c02d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c02d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c02d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c02d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c02d8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c02d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c02dc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1c02dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1c02e0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C02E0u;
    SET_GPR_U32(ctx, 31, 0x1C02E8u);
    ctx->pc = 0x1C02E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C02E0u;
    // 0x1c02e4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C02E0u, 0x1C02E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C02E8u;
label_1c02e8:
    // 0x1c02e8: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1c02e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1c02ec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c02ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c02f0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c02f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c02f4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C02F4u;
    SET_GPR_U32(ctx, 31, 0x1C02FCu);
    ctx->pc = 0x1C02F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C02F4u;
    // 0x1c02f8: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C02F4u, 0x1C02FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C02FCu;
label_1c02fc:
    // 0x1c02fc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c02fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0300: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1c0300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c0304: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0304u;
    SET_GPR_U32(ctx, 31, 0x1C030Cu);
    ctx->pc = 0x1C0308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0304u;
    // 0x1c0308: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0304u, 0x1C030Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C030Cu;
label_1c030c:
    // 0x1c030c: 0x3c020e09  lui         $v0, 0xE09
    ctx->pc = 0x1c030cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3593 << 16));
    // 0x1c0310: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0314: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c0314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c0318: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0318u;
    SET_GPR_U32(ctx, 31, 0x1C0320u);
    ctx->pc = 0x1C031Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0318u;
    // 0x1c031c: 0x34462009  ori         $a2, $v0, 0x2009 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8201);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0318u, 0x1C0320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0320u;
label_1c0320:
    // 0x1c0320: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0324: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1c0324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c0328: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0328u;
    SET_GPR_U32(ctx, 31, 0x1C0330u);
    ctx->pc = 0x1C032Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0328u;
    // 0x1c032c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0328u, 0x1C0330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0330u;
label_1c0330:
    // 0x1c0330: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1c0330u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1c0334: 0x26730040  addiu       $s3, $s3, 0x40
    ctx->pc = 0x1c0334u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x1c0338: 0x2e820008  sltiu       $v0, $s4, 0x8
    ctx->pc = 0x1c0338u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1c033c: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x1C033Cu;
    {
        const bool branch_taken_0x1c033c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C033Cu;
        // 0x1c0340: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c033c) {
            ctx->pc = 0x1C02A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c02a0;
        }
    }
    ctx->pc = 0x1C0344u;
    // 0x1c0344: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0348: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1C0348u;
    SET_GPR_U32(ctx, 31, 0x1C0350u);
    ctx->pc = 0x1C034Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0348u;
    // 0x1c034c: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1C0348u, 0x1C0350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0350u;
label_1c0350:
    // 0x1c0350: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1c0350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1c0354: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0358: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1c0358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1c035c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C035Cu;
    SET_GPR_U32(ctx, 31, 0x1C0364u);
    ctx->pc = 0x1C0360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C035Cu;
    // 0x1c0360: 0x34460080  ori         $a2, $v0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C035Cu, 0x1C0364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0364u;
label_1c0364:
    // 0x1c0364: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0368: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c0368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c036c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C036Cu;
    SET_GPR_U32(ctx, 31, 0x1C0374u);
    ctx->pc = 0x1C0370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C036Cu;
    // 0x1c0370: 0x24060346  addiu       $a2, $zero, 0x346 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 838));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C036Cu, 0x1C0374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0374u;
label_1c0374:
    // 0x1c0374: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0378: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c0378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c037c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C037Cu;
    SET_GPR_U32(ctx, 31, 0x1C0384u);
    ctx->pc = 0x1C0380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C037Cu;
    // 0x1c0380: 0x24062000  addiu       $a2, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C037Cu, 0x1C0384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0384u;
label_1c0384:
    // 0x1c0384: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1c0384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c0388: 0x24020068  addiu       $v0, $zero, 0x68
    ctx->pc = 0x1c0388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x1c038c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c038cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c0390: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0394: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1c0394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1c0398: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0398u;
    SET_GPR_U32(ctx, 31, 0x1C03A0u);
    ctx->pc = 0x1C039Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0398u;
    // 0x1c039c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0398u, 0x1C03A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C03A0u;
label_1c03a0:
    // 0x1c03a0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c03a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c03a4: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1c03a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c03a8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C03A8u;
    SET_GPR_U32(ctx, 31, 0x1C03B0u);
    ctx->pc = 0x1C03ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C03A8u;
    // 0x1c03ac: 0x3c060005  lui         $a2, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C03A8u, 0x1C03B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C03B0u;
label_1c03b0:
    // 0x1c03b0: 0x2bc10002  slti        $at, $fp, 0x2
    ctx->pc = 0x1c03b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c03b4: 0x14200036  bnez        $at, . + 4 + (0x36 << 2)
    ctx->pc = 0x1C03B4u;
    {
        const bool branch_taken_0x1c03b4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C03B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C03B4u;
        // 0x1c03b8: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c03b4) {
            ctx->pc = 0x1C0490u;
            goto label_1c0490;
        }
    }
    ctx->pc = 0x1C03BCu;
    // 0x1c03bc: 0x241703ff  addiu       $s7, $zero, 0x3FF
    ctx->pc = 0x1c03bcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
label_1c03c0:
    // 0x1c03c0: 0x17183c  dsll32      $v1, $s7, 0
    ctx->pc = 0x1c03c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) << (32 + 0));
    // 0x1c03c4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1c03c4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1c03c8: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1c03c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1c03cc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c03ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c03d0: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1c03d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1c03d4: 0x628825  or          $s1, $v1, $v0
    ctx->pc = 0x1c03d4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c03d8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c03d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c03dc: 0x34028700  ori         $v0, $zero, 0x8700
    ctx->pc = 0x1c03dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34560);
    // 0x1c03e0: 0x2413003f  addiu       $s3, $zero, 0x3F
    ctx->pc = 0x1c03e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1c03e4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1c03e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1c03e8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c03e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c03ec: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1c03ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1c03f0: 0x628025  or          $s0, $v1, $v0
    ctx->pc = 0x1c03f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c03f4: 0x0  nop
    ctx->pc = 0x1c03f4u;
    // NOP
label_1c03f8:
    // 0x1c03f8: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x1c03f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1c03fc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c03fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c0400: 0x9ea678c0  lwu         $a2, 0x78C0($s5)
    ctx->pc = 0x1c0400u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 30912)));
    // 0x1c0404: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1c0404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1c0408: 0x12203c  dsll32      $a0, $s2, 0
    ctx->pc = 0x1c0408u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1c040c: 0x8ea278c4  lw          $v0, 0x78C4($s5)
    ctx->pc = 0x1c040cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30916)));
    // 0x1c0410: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1c0410u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1c0414: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1c0414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c0418: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1c0418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1c041c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c041cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0420: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1c0420u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1c0424: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1c0424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1c0428: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c0428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c042c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c042cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c0430: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c0430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c0434: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1c0434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1c0438: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0438u;
    SET_GPR_U32(ctx, 31, 0x1C0440u);
    ctx->pc = 0x1C043Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0438u;
    // 0x1c043c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0438u, 0x1C0440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0440u;
label_1c0440:
    // 0x1c0440: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0444: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1c0444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c0448: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0448u;
    SET_GPR_U32(ctx, 31, 0x1C0450u);
    ctx->pc = 0x1C044Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0448u;
    // 0x1c044c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0448u, 0x1C0450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0450u;
label_1c0450:
    // 0x1c0450: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0454: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1c0454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c0458: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0458u;
    SET_GPR_U32(ctx, 31, 0x1C0460u);
    ctx->pc = 0x1C045Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0458u;
    // 0x1c045c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0458u, 0x1C0460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0460u;
label_1c0460:
    // 0x1c0460: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1c0460u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1c0464: 0x26730040  addiu       $s3, $s3, 0x40
    ctx->pc = 0x1c0464u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x1c0468: 0x2e820008  sltiu       $v0, $s4, 0x8
    ctx->pc = 0x1c0468u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1c046c: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1C046Cu;
    {
        const bool branch_taken_0x1c046c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C046Cu;
        // 0x1c0470: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c046c) {
            ctx->pc = 0x1C03F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c03f8;
        }
    }
    ctx->pc = 0x1C0474u;
    // 0x1c0474: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0478: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1C0478u;
    SET_GPR_U32(ctx, 31, 0x1C0480u);
    ctx->pc = 0x1C047Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0478u;
    // 0x1c047c: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1C0478u, 0x1C0480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0480u;
label_1c0480:
    // 0x1c0480: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1c0480u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1c0484: 0x2de102a  slt         $v0, $s6, $fp
    ctx->pc = 0x1c0484u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x1c0488: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x1C0488u;
    {
        const bool branch_taken_0x1c0488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0488u;
        // 0x1c048c: 0x26f70400  addiu       $s7, $s7, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0488) {
            ctx->pc = 0x1C03C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c03c0;
        }
    }
    ctx->pc = 0x1C0490u;
label_1c0490:
    // 0x1c0490: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0494: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1c0494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1c0498: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0498u;
    SET_GPR_U32(ctx, 31, 0x1C04A0u);
    ctx->pc = 0x1C049Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0498u;
    // 0x1c049c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0498u, 0x1C04A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C04A0u;
label_1c04a0:
    // 0x1c04a0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c04a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c04a4: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1c04a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c04a8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C04A8u;
    SET_GPR_U32(ctx, 31, 0x1C04B0u);
    ctx->pc = 0x1C04ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C04A8u;
    // 0x1c04ac: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C04A8u, 0x1C04B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C04B0u;
label_1c04b0:
    // 0x1c04b0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1c04b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1c04b4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c04b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c04b8: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x1c04b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1c04bc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C04BCu;
    SET_GPR_U32(ctx, 31, 0x1C04C4u);
    ctx->pc = 0x1C04C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C04BCu;
    // 0x1c04c0: 0x2303c  dsll32      $a2, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C04BCu, 0x1C04C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C04C4u;
label_1c04c4:
    // 0x1c04c4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c04c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c04c8: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1C04C8u;
    SET_GPR_U32(ctx, 31, 0x1C04D0u);
    ctx->pc = 0x1C04CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C04C8u;
    // 0x1c04cc: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1C04C8u, 0x1C04D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C04D0u;
label_1c04d0:
    // 0x1c04d0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1c04d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c04d4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c04d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c04d8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1c04d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1c04dc: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1c04dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1c04e0: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x1c04e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x1c04e4: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1c04e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1c04e8: 0x628025  or          $s0, $v1, $v0
    ctx->pc = 0x1c04e8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c04ec: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1C04ECu;
    SET_GPR_U32(ctx, 31, 0x1C04F4u);
    ctx->pc = 0x1C04F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C04ECu;
    // 0x1c04f0: 0x240501c0  addiu       $a1, $zero, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1C04ECu, 0x1C04F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C04F4u;
label_1c04f4:
    // 0x1c04f4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1c04f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c04f8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1c04f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c04fc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1c04fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1c0500: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1c0500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c0504: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1c0504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1c0508: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c0508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c050c: 0x2032025  or          $a0, $s0, $v1
    ctx->pc = 0x1c050cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1c0510: 0x9ea378d0  lwu         $v1, 0x78D0($s5)
    ctx->pc = 0x1c0510u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 30928)));
    // 0x1c0514: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1c0514u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1c0518: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1c0518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1c051c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c051cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0520: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c0520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c0524: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1c0524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1c0528: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1c0528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1c052c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C052Cu;
    SET_GPR_U32(ctx, 31, 0x1C0534u);
    ctx->pc = 0x1C0530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C052Cu;
    // 0x1c0530: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C052Cu, 0x1C0534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0534u;
label_1c0534:
    // 0x1c0534: 0x3c0301c0  lui         $v1, 0x1C0
    ctx->pc = 0x1c0534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)448 << 16));
    // 0x1c0538: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x1c0538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x1c053c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c053cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c0540: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0544: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1c0544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1c0548: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0548u;
    SET_GPR_U32(ctx, 31, 0x1C0550u);
    ctx->pc = 0x1C054Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0548u;
    // 0x1c054c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0548u, 0x1C0550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0550u;
label_1c0550:
    // 0x1c0550: 0x24033fff  addiu       $v1, $zero, 0x3FFF
    ctx->pc = 0x1c0550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    // 0x1c0554: 0x3c020208  lui         $v0, 0x208
    ctx->pc = 0x1c0554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)520 << 16));
    // 0x1c0558: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c0558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c055c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1c055cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1c0560: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0564: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1c0564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1c0568: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0568u;
    SET_GPR_U32(ctx, 31, 0x1C0570u);
    ctx->pc = 0x1C056Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0568u;
    // 0x1c056c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0568u, 0x1C0570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0570u;
label_1c0570:
    // 0x1c0570: 0x24030700  addiu       $v1, $zero, 0x700
    ctx->pc = 0x1c0570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1792));
    // 0x1c0574: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x1c0574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x1c0578: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c0578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c057c: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x1c057cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x1c0580: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0584: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1c0584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1c0588: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0588u;
    SET_GPR_U32(ctx, 31, 0x1C0590u);
    ctx->pc = 0x1C058Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0588u;
    // 0x1c058c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0588u, 0x1C0590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0590u;
label_1c0590:
    // 0x1c0590: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0594: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c0594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0598: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0598u;
    SET_GPR_U32(ctx, 31, 0x1C05A0u);
    ctx->pc = 0x1C059Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0598u;
    // 0x1c059c: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0598u, 0x1C05A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C05A0u;
label_1c05a0:
    // 0x1c05a0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c05a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c05a4: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x1c05a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1c05a8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c05a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c05ac: 0x0  nop
    ctx->pc = 0x1c05acu;
    // NOP
label_1c05b0:
    // 0x1c05b0: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x1c05b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1c05b4: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x1c05b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1c05b8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1c05b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1c05bc: 0x3c0201c0  lui         $v0, 0x1C0
    ctx->pc = 0x1c05bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)448 << 16));
    // 0x1c05c0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1c05c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1c05c4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1c05c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1c05c8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c05c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c05cc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1c05ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c05d0: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1c05d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1c05d4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c05d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c05d8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C05D8u;
    SET_GPR_U32(ctx, 31, 0x1C05E0u);
    ctx->pc = 0x1C05DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C05D8u;
    // 0x1c05dc: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C05D8u, 0x1C05E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C05E0u;
label_1c05e0:
    // 0x1c05e0: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1c05e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1c05e4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c05e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c05e8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c05e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c05ec: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C05ECu;
    SET_GPR_U32(ctx, 31, 0x1C05F4u);
    ctx->pc = 0x1C05F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C05ECu;
    // 0x1c05f0: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C05ECu, 0x1C05F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C05F4u;
label_1c05f4:
    // 0x1c05f4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1c05f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c05f8: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1c05f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1c05fc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c05fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c0600: 0x34427080  ori         $v0, $v0, 0x7080
    ctx->pc = 0x1c0600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28800);
    // 0x1c0604: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c0604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c0608: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c060c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1c060cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c0610: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0610u;
    SET_GPR_U32(ctx, 31, 0x1C0618u);
    ctx->pc = 0x1C0614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0610u;
    // 0x1c0614: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0610u, 0x1C0618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0618u;
label_1c0618:
    // 0x1c0618: 0x3c021c09  lui         $v0, 0x1C09
    ctx->pc = 0x1c0618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7177 << 16));
    // 0x1c061c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c061cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0620: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c0620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c0624: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0624u;
    SET_GPR_U32(ctx, 31, 0x1C062Cu);
    ctx->pc = 0x1C0628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0624u;
    // 0x1c0628: 0x34462009  ori         $a2, $v0, 0x2009 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8201);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0624u, 0x1C062Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C062Cu;
label_1c062c:
    // 0x1c062c: 0x3c029500  lui         $v0, 0x9500
    ctx->pc = 0x1c062cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38144 << 16));
    // 0x1c0630: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0634: 0x34429080  ori         $v0, $v0, 0x9080
    ctx->pc = 0x1c0634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36992);
    // 0x1c0638: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1c0638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c063c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C063Cu;
    SET_GPR_U32(ctx, 31, 0x1C0644u);
    ctx->pc = 0x1C0640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C063Cu;
    // 0x1c0640: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C063Cu, 0x1C0644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0644u;
label_1c0644:
    // 0x1c0644: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1c0644u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1c0648: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x1c0648u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1c064c: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x1c064cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1c0650: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1C0650u;
    {
        const bool branch_taken_0x1c0650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0650u;
        // 0x1c0654: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0650) {
            ctx->pc = 0x1C05B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c05b0;
        }
    }
    ctx->pc = 0x1C0658u;
    // 0x1c0658: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c065c: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1C065Cu;
    SET_GPR_U32(ctx, 31, 0x1C0664u);
    ctx->pc = 0x1C0660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C065Cu;
    // 0x1c0660: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1C065Cu, 0x1C0664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0664u;
label_1c0664:
    // 0x1c0664: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1c0664u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0668: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x1c0668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c066c: 0x0  nop
    ctx->pc = 0x1c066cu;
    // NOP
label_1c0670:
    // 0x1c0670: 0x3864001f  xori        $a0, $v1, 0x1F
    ctx->pc = 0x1c0670u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)31);
    // 0x1c0674: 0x42e00  sll         $a1, $a0, 24
    ctx->pc = 0x1c0674u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x1c0678: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1c0678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c067c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1c067cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x1c0680: 0x3884001f  xori        $a0, $a0, 0x1F
    ctx->pc = 0x1c0680u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)31);
    // 0x1c0684: 0x42e00  sll         $a1, $a0, 24
    ctx->pc = 0x1c0684u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x1c0688: 0x24640002  addiu       $a0, $v1, 0x2
    ctx->pc = 0x1c0688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1c068c: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x1c068cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x1c0690: 0x3884001f  xori        $a0, $a0, 0x1F
    ctx->pc = 0x1c0690u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)31);
    // 0x1c0694: 0x42e00  sll         $a1, $a0, 24
    ctx->pc = 0x1c0694u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x1c0698: 0x24640003  addiu       $a0, $v1, 0x3
    ctx->pc = 0x1c0698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1c069c: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x1c069cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x1c06a0: 0x3884001f  xori        $a0, $a0, 0x1F
    ctx->pc = 0x1c06a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)31);
    // 0x1c06a4: 0x42e00  sll         $a1, $a0, 24
    ctx->pc = 0x1c06a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x1c06a8: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x1c06a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1c06ac: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x1c06acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x1c06b0: 0x3884001f  xori        $a0, $a0, 0x1F
    ctx->pc = 0x1c06b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)31);
    // 0x1c06b4: 0x42e00  sll         $a1, $a0, 24
    ctx->pc = 0x1c06b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x1c06b8: 0x24640005  addiu       $a0, $v1, 0x5
    ctx->pc = 0x1c06b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x1c06bc: 0xac450010  sw          $a1, 0x10($v0)
    ctx->pc = 0x1c06bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 5));
    // 0x1c06c0: 0x3884001f  xori        $a0, $a0, 0x1F
    ctx->pc = 0x1c06c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)31);
    // 0x1c06c4: 0x42e00  sll         $a1, $a0, 24
    ctx->pc = 0x1c06c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x1c06c8: 0x24640006  addiu       $a0, $v1, 0x6
    ctx->pc = 0x1c06c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x1c06cc: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x1c06ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
    // 0x1c06d0: 0x3884001f  xori        $a0, $a0, 0x1F
    ctx->pc = 0x1c06d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)31);
    // 0x1c06d4: 0x42e00  sll         $a1, $a0, 24
    ctx->pc = 0x1c06d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x1c06d8: 0x24640007  addiu       $a0, $v1, 0x7
    ctx->pc = 0x1c06d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x1c06dc: 0xac450018  sw          $a1, 0x18($v0)
    ctx->pc = 0x1c06dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 5));
    // 0x1c06e0: 0x3884001f  xori        $a0, $a0, 0x1F
    ctx->pc = 0x1c06e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)31);
    // 0x1c06e4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1c06e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1c06e8: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x1c06e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x1c06ec: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x1c06ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
    // 0x1c06f0: 0x2c640100  sltiu       $a0, $v1, 0x100
    ctx->pc = 0x1c06f0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1c06f4: 0x1480ffde  bnez        $a0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1C06F4u;
    {
        const bool branch_taken_0x1c06f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C06F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C06F4u;
        // 0x1c06f8: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c06f4) {
            ctx->pc = 0x1C0670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0670;
        }
    }
    ctx->pc = 0x1C06FCu;
    // 0x1c06fc: 0x8ea578d0  lw          $a1, 0x78D0($s5)
    ctx->pc = 0x1c06fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30928)));
    // 0x1c0700: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0704: 0xc070468  jal         func_1C11A0
    ctx->pc = 0x1C0704u;
    SET_GPR_U32(ctx, 31, 0x1C070Cu);
    ctx->pc = 0x1C0708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0704u;
    // 0x1c0708: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C11A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C11A0u, 0x1C0704u, 0x1C070Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C070Cu;
label_1c070c:
    // 0x1c070c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c070cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0710: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1C0710u;
    SET_GPR_U32(ctx, 31, 0x1C0718u);
    ctx->pc = 0x1C0714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0710u;
    // 0x1c0714: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1C0710u, 0x1C0718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0718u;
label_1c0718:
    // 0x1c0718: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1c0718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c071c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c071cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0720: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1c0720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1c0724: 0x3c0201b2  lui         $v0, 0x1B2
    ctx->pc = 0x1c0724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)434 << 16));
    // 0x1c0728: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x1c0728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x1c072c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1c072cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1c0730: 0x628025  or          $s0, $v1, $v0
    ctx->pc = 0x1c0730u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c0734: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1C0734u;
    SET_GPR_U32(ctx, 31, 0x1C073Cu);
    ctx->pc = 0x1C0738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0734u;
    // 0x1c0738: 0x240500e0  addiu       $a1, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1C0734u, 0x1C073Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C073Cu;
label_1c073c:
    // 0x1c073c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1c073cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c0740: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1c0740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c0744: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1c0744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1c0748: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1c0748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c074c: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1c074cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1c0750: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c0750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c0754: 0x2032025  or          $a0, $s0, $v1
    ctx->pc = 0x1c0754u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1c0758: 0x9ea378d0  lwu         $v1, 0x78D0($s5)
    ctx->pc = 0x1c0758u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 30928)));
    // 0x1c075c: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1c075cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1c0760: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1c0760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1c0764: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0768: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c0768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c076c: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1c076cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1c0770: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1c0770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1c0774: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0774u;
    SET_GPR_U32(ctx, 31, 0x1C077Cu);
    ctx->pc = 0x1C0778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0774u;
    // 0x1c0778: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0774u, 0x1C077Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C077Cu;
label_1c077c:
    // 0x1c077c: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x1c077cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x1c0780: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1c0780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1c0784: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c0784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c0788: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1c0788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1c078c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c078cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c0790: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0794: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1c0794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1c0798: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0798u;
    SET_GPR_U32(ctx, 31, 0x1C07A0u);
    ctx->pc = 0x1C079Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0798u;
    // 0x1c079c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0798u, 0x1C07A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C07A0u;
label_1c07a0:
    // 0x1c07a0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c07a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c07a4: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1c07a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c07a8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C07A8u;
    SET_GPR_U32(ctx, 31, 0x1C07B0u);
    ctx->pc = 0x1C07ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C07A8u;
    // 0x1c07ac: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C07A8u, 0x1C07B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C07B0u;
label_1c07b0:
    // 0x1c07b0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c07b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c07b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c07b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c07b8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C07B8u;
    SET_GPR_U32(ctx, 31, 0x1C07C0u);
    ctx->pc = 0x1C07BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C07B8u;
    // 0x1c07bc: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C07B8u, 0x1C07C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C07C0u;
label_1c07c0:
    // 0x1c07c0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c07c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c07c4: 0x2411003f  addiu       $s1, $zero, 0x3F
    ctx->pc = 0x1c07c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1c07c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c07c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c07cc: 0x0  nop
    ctx->pc = 0x1c07ccu;
    // NOP
label_1c07d0:
    // 0x1c07d0: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x1c07d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1c07d4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c07d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c07d8: 0x9ea678c0  lwu         $a2, 0x78C0($s5)
    ctx->pc = 0x1c07d8u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 30912)));
    // 0x1c07dc: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1c07dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1c07e0: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x1c07e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1c07e4: 0x8ea278c4  lw          $v0, 0x78C4($s5)
    ctx->pc = 0x1c07e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30916)));
    // 0x1c07e8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1c07e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1c07ec: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1c07ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c07f0: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1c07f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1c07f4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c07f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c07f8: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1c07f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1c07fc: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1c07fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1c0800: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c0800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c0804: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c0804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c0808: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c0808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c080c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1c080cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1c0810: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0810u;
    SET_GPR_U32(ctx, 31, 0x1C0818u);
    ctx->pc = 0x1C0814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0810u;
    // 0x1c0814: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0810u, 0x1C0818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0818u;
label_1c0818:
    // 0x1c0818: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1c0818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1c081c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c081cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0820: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c0820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c0824: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0824u;
    SET_GPR_U32(ctx, 31, 0x1C082Cu);
    ctx->pc = 0x1C0828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0824u;
    // 0x1c0828: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0824u, 0x1C082Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C082Cu;
label_1c082c:
    // 0x1c082c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1c082cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c0830: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1c0830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1c0834: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c0834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c0838: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1c0838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1c083c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c083cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c0840: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0844: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1c0844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c0848: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0848u;
    SET_GPR_U32(ctx, 31, 0x1C0850u);
    ctx->pc = 0x1C084Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0848u;
    // 0x1c084c: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0848u, 0x1C0850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0850u;
label_1c0850:
    // 0x1c0850: 0x3c020e09  lui         $v0, 0xE09
    ctx->pc = 0x1c0850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3593 << 16));
    // 0x1c0854: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0858: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c0858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c085c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C085Cu;
    SET_GPR_U32(ctx, 31, 0x1C0864u);
    ctx->pc = 0x1C0860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C085Cu;
    // 0x1c0860: 0x34462009  ori         $a2, $v0, 0x2009 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8201);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C085Cu, 0x1C0864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0864u;
label_1c0864:
    // 0x1c0864: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x1c0864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
    // 0x1c0868: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c086c: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1c086cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1c0870: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1c0870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c0874: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C0874u;
    SET_GPR_U32(ctx, 31, 0x1C087Cu);
    ctx->pc = 0x1C0878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0874u;
    // 0x1c0878: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C0874u, 0x1C087Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C087Cu;
label_1c087c:
    // 0x1c087c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1c087cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1c0880: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x1c0880u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1c0884: 0x2e430008  sltiu       $v1, $s2, 0x8
    ctx->pc = 0x1c0884u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1c0888: 0x1460ffd1  bnez        $v1, . + 4 + (-0x2F << 2)
    ctx->pc = 0x1C0888u;
    {
        const bool branch_taken_0x1c0888 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C088Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0888u;
        // 0x1c088c: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0888) {
            ctx->pc = 0x1C07D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c07d0;
        }
    }
    ctx->pc = 0x1C0890u;
    // 0x1c0890: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1c0890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c0894: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1c0894u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c0898: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1c0898u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c089c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1c089cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c08a0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1c08a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c08a4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1c08a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c08a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c08a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c08ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c08acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c08b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c08b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c08b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c08b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c08b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C08B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C08BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C08B8u;
        // 0x1c08bc: 0x27bd04a0  addiu       $sp, $sp, 0x4A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C08B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C08C0u;
}
