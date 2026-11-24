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

// Function: sub_001BFAE0
// Address: 0x1bfae0 - 0x1bffec
void sub_001BFAE0_0x1bfae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BFAE0_0x1bfae0");
#endif

    switch (ctx->pc) {
        case 0x1bfb24u: goto label_1bfb24;
        case 0x1bfb44u: goto label_1bfb44;
        case 0x1bfb54u: goto label_1bfb54;
        case 0x1bfb68u: goto label_1bfb68;
        case 0x1bfb74u: goto label_1bfb74;
        case 0x1bfb88u: goto label_1bfb88;
        case 0x1bfbacu: goto label_1bfbac;
        case 0x1bfbd8u: goto label_1bfbd8;
        case 0x1bfbe8u: goto label_1bfbe8;
        case 0x1bfc04u: goto label_1bfc04;
        case 0x1bfc58u: goto label_1bfc58;
        case 0x1bfc68u: goto label_1bfc68;
        case 0x1bfcacu: goto label_1bfcac;
        case 0x1bfcf0u: goto label_1bfcf0;
        case 0x1bfd38u: goto label_1bfd38;
        case 0x1bfd48u: goto label_1bfd48;
        case 0x1bfd58u: goto label_1bfd58;
        case 0x1bfd6cu: goto label_1bfd6c;
        case 0x1bfd7cu: goto label_1bfd7c;
        case 0x1bfde0u: goto label_1bfde0;
        case 0x1bfdecu: goto label_1bfdec;
        case 0x1bfdf4u: goto label_1bfdf4;
        case 0x1bfe10u: goto label_1bfe10;
        case 0x1bfe1cu: goto label_1bfe1c;
        case 0x1bfe40u: goto label_1bfe40;
        case 0x1bfe6cu: goto label_1bfe6c;
        case 0x1bfe7cu: goto label_1bfe7c;
        case 0x1bfec0u: goto label_1bfec0;
        case 0x1bff08u: goto label_1bff08;
        case 0x1bff1cu: goto label_1bff1c;
        case 0x1bff2cu: goto label_1bff2c;
        case 0x1bff40u: goto label_1bff40;
        case 0x1bff50u: goto label_1bff50;
        case 0x1bffb8u: goto label_1bffb8;
        case 0x1bffc4u: goto label_1bffc4;
        default: break;
    }

    ctx->pc = 0x1bfae0u;

    // 0x1bfae0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1bfae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1bfae4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1bfae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1bfae8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1bfae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1bfaec: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1bfaecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1bfaf0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1bfaf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1bfaf4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bfaf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1bfaf8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1bfaf8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfafc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bfafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bfb00: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1bfb00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfb04: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bfb04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bfb08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bfb08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfb0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bfb0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bfb10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bfb10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfb14: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1bfb14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfb18: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x1bfb18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1bfb1c: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1BFB1Cu;
    SET_GPR_U32(ctx, 31, 0x1BFB24u);
    ctx->pc = 0x1BFB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFB1Cu;
    // 0x1bfb20: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1BFB1Cu, 0x1BFB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFB24u;
label_1bfb24:
    // 0x1bfb24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bfb24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bfb28: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x1bfb28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x1bfb2c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bfb2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bfb30: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x1bfb30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x1bfb34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bfb34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfb38: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x1bfb38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1bfb3c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BFB3Cu;
    SET_GPR_U32(ctx, 31, 0x1BFB44u);
    ctx->pc = 0x1BFB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFB3Cu;
    // 0x1bfb40: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BFB3Cu, 0x1BFB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFB44u;
label_1bfb44:
    // 0x1bfb44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bfb44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfb48: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1bfb48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1bfb4c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BFB4Cu;
    SET_GPR_U32(ctx, 31, 0x1BFB54u);
    ctx->pc = 0x1BFB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFB4Cu;
    // 0x1bfb50: 0x3c060005  lui         $a2, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BFB4Cu, 0x1BFB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFB54u;
label_1bfb54:
    // 0x1bfb54: 0x3c020108  lui         $v0, 0x108
    ctx->pc = 0x1bfb54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)264 << 16));
    // 0x1bfb58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bfb58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfb5c: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1bfb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1bfb60: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BFB60u;
    SET_GPR_U32(ctx, 31, 0x1BFB68u);
    ctx->pc = 0x1BFB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFB60u;
    // 0x1bfb64: 0x34460080  ori         $a2, $v0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BFB60u, 0x1BFB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFB68u;
label_1bfb68:
    // 0x1bfb68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bfb68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfb6c: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BFB6Cu;
    SET_GPR_U32(ctx, 31, 0x1BFB74u);
    ctx->pc = 0x1BFB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFB6Cu;
    // 0x1bfb70: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BFB6Cu, 0x1BFB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFB74u;
label_1bfb74:
    // 0x1bfb74: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bfb74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bfb78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bfb78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfb7c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bfb7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bfb80: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1BFB80u;
    SET_GPR_U32(ctx, 31, 0x1BFB88u);
    ctx->pc = 0x1BFB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFB80u;
    // 0x1bfb84: 0x296b8  dsll        $s2, $v0, 26 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << 26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1BFB80u, 0x1BFB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFB88u;
label_1bfb88:
    // 0x1bfb88: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1bfb88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1bfb8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bfb8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfb90: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bfb90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bfb94: 0x3c020012  lui         $v0, 0x12
    ctx->pc = 0x1bfb94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18 << 16));
    // 0x1bfb98: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bfb98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bfb9c: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x1bfb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1bfba0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1bfba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1bfba4: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BFBA4u;
    SET_GPR_U32(ctx, 31, 0x1BFBACu);
    ctx->pc = 0x1BFBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFBA4u;
    // 0x1bfba8: 0x2429025  or          $s2, $s2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BFBA4u, 0x1BFBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFBACu;
label_1bfbac:
    // 0x1bfbac: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1bfbacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bfbb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bfbb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfbb4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bfbb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bfbb8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1bfbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1bfbbc: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1bfbbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1bfbc0: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1bfbc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1bfbc4: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x1bfbc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x1bfbc8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bfbc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bfbcc: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x1bfbccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1bfbd0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BFBD0u;
    SET_GPR_U32(ctx, 31, 0x1BFBD8u);
    ctx->pc = 0x1BFBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFBD0u;
    // 0x1bfbd4: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BFBD0u, 0x1BFBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFBD8u;
label_1bfbd8:
    // 0x1bfbd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bfbd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfbdc: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1bfbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1bfbe0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BFBE0u;
    SET_GPR_U32(ctx, 31, 0x1BFBE8u);
    ctx->pc = 0x1BFBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFBE0u;
    // 0x1bfbe4: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BFBE0u, 0x1BFBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFBE8u;
label_1bfbe8:
    // 0x1bfbe8: 0x131602  srl         $v0, $s3, 24
    ctx->pc = 0x1bfbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 24));
    // 0x1bfbec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bfbecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfbf0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1bfbf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1bfbf4: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1bfbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1bfbf8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bfbf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bfbfc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BFBFCu;
    SET_GPR_U32(ctx, 31, 0x1BFC04u);
    ctx->pc = 0x1BFC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFBFCu;
    // 0x1bfc00: 0x34460064  ori         $a2, $v0, 0x64 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)100);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BFBFCu, 0x1BFC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFC04u;
label_1bfc04:
    // 0x1bfc04: 0x8e2678c8  lw          $a2, 0x78C8($s1)
    ctx->pc = 0x1bfc04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30920)));
    // 0x1bfc08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bfc08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfc0c: 0x9e2778cc  lwu         $a3, 0x78CC($s1)
    ctx->pc = 0x1bfc0cu;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 30924)));
    // 0x1bfc10: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1bfc10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1bfc14: 0x8e2278c4  lw          $v0, 0x78C4($s1)
    ctx->pc = 0x1bfc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30916)));
    // 0x1bfc18: 0x9e2378c0  lwu         $v1, 0x78C0($s1)
    ctx->pc = 0x1bfc18u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 30912)));
    // 0x1bfc1c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1bfc1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1bfc20: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1bfc20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1bfc24: 0x73938  dsll        $a3, $a3, 4
    ctx->pc = 0x1bfc24u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 4);
    // 0x1bfc28: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1bfc28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1bfc2c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bfc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bfc30: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bfc30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bfc34: 0x34e7000a  ori         $a3, $a3, 0xA
    ctx->pc = 0x1bfc34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)10);
    // 0x1bfc38: 0x633b8  dsll        $a2, $a2, 14
    ctx->pc = 0x1bfc38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 14);
    // 0x1bfc3c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bfc3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bfc40: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1bfc40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1bfc44: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x1bfc44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x1bfc48: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1bfc48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1bfc4c: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1bfc4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x1bfc50: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BFC50u;
    SET_GPR_U32(ctx, 31, 0x1BFC58u);
    ctx->pc = 0x1BFC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFC50u;
    // 0x1bfc54: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BFC50u, 0x1BFC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFC58u;
label_1bfc58:
    // 0x1bfc58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bfc58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfc5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bfc5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfc60: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BFC60u;
    SET_GPR_U32(ctx, 31, 0x1BFC68u);
    ctx->pc = 0x1BFC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFC60u;
    // 0x1bfc64: 0x24060356  addiu       $a2, $zero, 0x356 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BFC60u, 0x1BFC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFC68u;
label_1bfc68:
    // 0x1bfc68: 0x131202  srl         $v0, $s3, 8
    ctx->pc = 0x1bfc68u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 8));
    // 0x1bfc6c: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x1bfc6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x1bfc70: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1bfc70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1bfc74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bfc74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bfc78: 0x131402  srl         $v0, $s3, 16
    ctx->pc = 0x1bfc78u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 16));
    // 0x1bfc7c: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x1bfc7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
    // 0x1bfc80: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1bfc80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1bfc84: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1bfc84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1bfc88: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1bfc88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1bfc8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bfc8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfc90: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x1bfc90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1bfc94: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1bfc94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1bfc98: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x1bfc98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1bfc9c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1bfc9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1bfca0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1bfca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1bfca4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BFCA4u;
    SET_GPR_U32(ctx, 31, 0x1BFCACu);
    ctx->pc = 0x1BFCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFCA4u;
    // 0x1bfca8: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BFCA4u, 0x1BFCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFCACu;
label_1bfcac:
    // 0x1bfcac: 0x8e2378c8  lw          $v1, 0x78C8($s1)
    ctx->pc = 0x1bfcacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30920)));
    // 0x1bfcb0: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x1bfcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x1bfcb4: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x1bfcb4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1bfcb8: 0x10200037  beqz        $at, . + 4 + (0x37 << 2)
    ctx->pc = 0x1BFCB8u;
    {
        const bool branch_taken_0x1bfcb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFCB8u;
        // 0x1bfcbc: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfcb8) {
            ctx->pc = 0x1BFD98u;
            goto label_1bfd98;
        }
    }
    ctx->pc = 0x1BFCC0u;
    // 0x1bfcc0: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x1bfcc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
    // 0x1bfcc4: 0x3c037900  lui         $v1, 0x7900
    ctx->pc = 0x1bfcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30976 << 16));
    // 0x1bfcc8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bfcc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bfccc: 0x34637000  ori         $v1, $v1, 0x7000
    ctx->pc = 0x1bfcccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28672);
    // 0x1bfcd0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1bfcd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bfcd4: 0x2415001f  addiu       $s5, $zero, 0x1F
    ctx->pc = 0x1bfcd4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1bfcd8: 0x34028700  ori         $v0, $zero, 0x8700
    ctx->pc = 0x1bfcd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34560);
    // 0x1bfcdc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1bfcdcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfce0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1bfce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1bfce4: 0x839825  or          $s3, $a0, $v1
    ctx->pc = 0x1bfce4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1bfce8: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1bfce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1bfcec: 0x829025  or          $s2, $a0, $v0
    ctx->pc = 0x1bfcecu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_1bfcf0:
    // 0x1bfcf0: 0x15103c  dsll32      $v0, $s5, 0
    ctx->pc = 0x1bfcf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) << (32 + 0));
    // 0x1bfcf4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bfcf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bfcf8: 0x9e2678c0  lwu         $a2, 0x78C0($s1)
    ctx->pc = 0x1bfcf8u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 30912)));
    // 0x1bfcfc: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1bfcfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1bfd00: 0x14203c  dsll32      $a0, $s4, 0
    ctx->pc = 0x1bfd00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) << (32 + 0));
    // 0x1bfd04: 0x8e2278c4  lw          $v0, 0x78C4($s1)
    ctx->pc = 0x1bfd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30916)));
    // 0x1bfd08: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1bfd08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1bfd0c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1bfd0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1bfd10: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1bfd10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1bfd14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bfd14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfd18: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1bfd18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1bfd1c: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1bfd1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1bfd20: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bfd20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bfd24: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bfd24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bfd28: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bfd28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bfd2c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1bfd2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1bfd30: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BFD30u;
    SET_GPR_U32(ctx, 31, 0x1BFD38u);
    ctx->pc = 0x1BFD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFD30u;
    // 0x1bfd34: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BFD30u, 0x1BFD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFD38u;
label_1bfd38:
    // 0x1bfd38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bfd38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfd3c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bfd3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bfd40: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BFD40u;
    SET_GPR_U32(ctx, 31, 0x1BFD48u);
    ctx->pc = 0x1BFD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFD40u;
    // 0x1bfd44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BFD40u, 0x1BFD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFD48u;
label_1bfd48:
    // 0x1bfd48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bfd48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfd4c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1bfd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1bfd50: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BFD50u;
    SET_GPR_U32(ctx, 31, 0x1BFD58u);
    ctx->pc = 0x1BFD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFD50u;
    // 0x1bfd54: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BFD50u, 0x1BFD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFD58u;
label_1bfd58:
    // 0x1bfd58: 0x3c020e00  lui         $v0, 0xE00
    ctx->pc = 0x1bfd58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3584 << 16));
    // 0x1bfd5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bfd5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfd60: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bfd60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bfd64: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BFD64u;
    SET_GPR_U32(ctx, 31, 0x1BFD6Cu);
    ctx->pc = 0x1BFD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFD64u;
    // 0x1bfd68: 0x34462000  ori         $a2, $v0, 0x2000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BFD64u, 0x1BFD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFD6Cu;
label_1bfd6c:
    // 0x1bfd6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bfd6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfd70: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1bfd70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bfd74: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BFD74u;
    SET_GPR_U32(ctx, 31, 0x1BFD7Cu);
    ctx->pc = 0x1BFD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFD74u;
    // 0x1bfd78: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BFD74u, 0x1BFD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFD7Cu;
label_1bfd7c:
    // 0x1bfd7c: 0x8e2378c8  lw          $v1, 0x78C8($s1)
    ctx->pc = 0x1bfd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30920)));
    // 0x1bfd80: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1bfd80u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1bfd84: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x1bfd84u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x1bfd88: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x1bfd88u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x1bfd8c: 0x2c2102b  sltu        $v0, $s6, $v0
    ctx->pc = 0x1bfd8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1bfd90: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1BFD90u;
    {
        const bool branch_taken_0x1bfd90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BFD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFD90u;
        // 0x1bfd94: 0x26940020  addiu       $s4, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfd90) {
            ctx->pc = 0x1BFCF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bfcf0;
        }
    }
    ctx->pc = 0x1BFD98u;
label_1bfd98:
    // 0x1bfd98: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1bfd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1bfd9c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bfd9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bfda0: 0x9e2378c0  lwu         $v1, 0x78C0($s1)
    ctx->pc = 0x1bfda0u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 30912)));
    // 0x1bfda4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bfda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bfda8: 0x9e2778cc  lwu         $a3, 0x78CC($s1)
    ctx->pc = 0x1bfda8u;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 30924)));
    // 0x1bfdac: 0x23438  dsll        $a2, $v0, 16
    ctx->pc = 0x1bfdacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << 16);
    // 0x1bfdb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bfdb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfdb4: 0x8e2278c4  lw          $v0, 0x78C4($s1)
    ctx->pc = 0x1bfdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30916)));
    // 0x1bfdb8: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1bfdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1bfdbc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bfdbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bfdc0: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x1bfdc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x1bfdc4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1bfdc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1bfdc8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bfdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bfdcc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bfdccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bfdd0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bfdd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bfdd4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1bfdd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1bfdd8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BFDD8u;
    SET_GPR_U32(ctx, 31, 0x1BFDE0u);
    ctx->pc = 0x1BFDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFDD8u;
    // 0x1bfddc: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BFDD8u, 0x1BFDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFDE0u;
label_1bfde0:
    // 0x1bfde0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bfde0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfde4: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1BFDE4u;
    SET_GPR_U32(ctx, 31, 0x1BFDECu);
    ctx->pc = 0x1BFDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFDE4u;
    // 0x1bfde8: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1BFDE4u, 0x1BFDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFDECu;
label_1bfdec:
    // 0x1bfdec: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1BFDECu;
    SET_GPR_U32(ctx, 31, 0x1BFDF4u);
    ctx->pc = 0x1BFDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFDECu;
    // 0x1bfdf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1BFDECu, 0x1BFDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFDF4u;
label_1bfdf4:
    // 0x1bfdf4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1bfdf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bfdf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bfdf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfdfc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bfdfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bfe00: 0x3c020108  lui         $v0, 0x108
    ctx->pc = 0x1bfe00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)264 << 16));
    // 0x1bfe04: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x1bfe04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1bfe08: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BFE08u;
    SET_GPR_U32(ctx, 31, 0x1BFE10u);
    ctx->pc = 0x1BFE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFE08u;
    // 0x1bfe0c: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BFE08u, 0x1BFE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFE10u;
label_1bfe10:
    // 0x1bfe10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bfe10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfe14: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BFE14u;
    SET_GPR_U32(ctx, 31, 0x1BFE1Cu);
    ctx->pc = 0x1BFE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFE14u;
    // 0x1bfe18: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BFE14u, 0x1BFE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFE1Cu;
label_1bfe1c:
    // 0x1bfe1c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1bfe1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bfe20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bfe20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfe24: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bfe24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bfe28: 0x3c020012  lui         $v0, 0x12
    ctx->pc = 0x1bfe28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18 << 16));
    // 0x1bfe2c: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x1bfe2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x1bfe30: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1bfe30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1bfe34: 0x629025  or          $s2, $v1, $v0
    ctx->pc = 0x1bfe34u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1bfe38: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BFE38u;
    SET_GPR_U32(ctx, 31, 0x1BFE40u);
    ctx->pc = 0x1BFE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFE38u;
    // 0x1bfe3c: 0x240500e0  addiu       $a1, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BFE38u, 0x1BFE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFE40u;
label_1bfe40:
    // 0x1bfe40: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1bfe40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bfe44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bfe44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfe48: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bfe48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bfe4c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1bfe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1bfe50: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1bfe50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1bfe54: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1bfe54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1bfe58: 0x2431825  or          $v1, $s2, $v1
    ctx->pc = 0x1bfe58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x1bfe5c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bfe5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bfe60: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x1bfe60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1bfe64: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BFE64u;
    SET_GPR_U32(ctx, 31, 0x1BFE6Cu);
    ctx->pc = 0x1BFE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFE64u;
    // 0x1bfe68: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BFE64u, 0x1BFE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFE6Cu;
label_1bfe6c:
    // 0x1bfe6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bfe6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfe70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bfe70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfe74: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BFE74u;
    SET_GPR_U32(ctx, 31, 0x1BFE7Cu);
    ctx->pc = 0x1BFE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFE74u;
    // 0x1bfe78: 0x24060356  addiu       $a2, $zero, 0x356 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BFE74u, 0x1BFE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFE7Cu;
label_1bfe7c:
    // 0x1bfe7c: 0x8e2378c8  lw          $v1, 0x78C8($s1)
    ctx->pc = 0x1bfe7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30920)));
    // 0x1bfe80: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x1bfe80u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x1bfe84: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x1bfe84u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1bfe88: 0x10200039  beqz        $at, . + 4 + (0x39 << 2)
    ctx->pc = 0x1BFE88u;
    {
        const bool branch_taken_0x1bfe88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFE88u;
        // 0x1bfe8c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfe88) {
            ctx->pc = 0x1BFF70u;
            goto label_1bff70;
        }
    }
    ctx->pc = 0x1BFE90u;
    // 0x1bfe90: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x1bfe90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1bfe94: 0x3c037900  lui         $v1, 0x7900
    ctx->pc = 0x1bfe94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30976 << 16));
    // 0x1bfe98: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bfe98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bfe9c: 0x34637000  ori         $v1, $v1, 0x7000
    ctx->pc = 0x1bfe9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28672);
    // 0x1bfea0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1bfea0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bfea4: 0x2414001f  addiu       $s4, $zero, 0x1F
    ctx->pc = 0x1bfea4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1bfea8: 0x34028700  ori         $v0, $zero, 0x8700
    ctx->pc = 0x1bfea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34560);
    // 0x1bfeac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1bfeacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfeb0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1bfeb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1bfeb4: 0x839025  or          $s2, $a0, $v1
    ctx->pc = 0x1bfeb4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1bfeb8: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1bfeb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1bfebc: 0x828025  or          $s0, $a0, $v0
    ctx->pc = 0x1bfebcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_1bfec0:
    // 0x1bfec0: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x1bfec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
    // 0x1bfec4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bfec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bfec8: 0x9e2678c0  lwu         $a2, 0x78C0($s1)
    ctx->pc = 0x1bfec8u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 30912)));
    // 0x1bfecc: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1bfeccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1bfed0: 0x13203c  dsll32      $a0, $s3, 0
    ctx->pc = 0x1bfed0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1bfed4: 0x8e2278c4  lw          $v0, 0x78C4($s1)
    ctx->pc = 0x1bfed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30916)));
    // 0x1bfed8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1bfed8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1bfedc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1bfedcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1bfee0: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1bfee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1bfee4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bfee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfee8: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1bfee8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1bfeec: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1bfeecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1bfef0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bfef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bfef4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bfef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bfef8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bfef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bfefc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1bfefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1bff00: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BFF00u;
    SET_GPR_U32(ctx, 31, 0x1BFF08u);
    ctx->pc = 0x1BFF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFF00u;
    // 0x1bff04: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BFF00u, 0x1BFF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFF08u;
label_1bff08:
    // 0x1bff08: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1bff08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1bff0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bff0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bff10: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bff10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bff14: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BFF14u;
    SET_GPR_U32(ctx, 31, 0x1BFF1Cu);
    ctx->pc = 0x1BFF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFF14u;
    // 0x1bff18: 0x34460010  ori         $a2, $v0, 0x10 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BFF14u, 0x1BFF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFF1Cu;
label_1bff1c:
    // 0x1bff1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bff1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bff20: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1bff20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1bff24: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BFF24u;
    SET_GPR_U32(ctx, 31, 0x1BFF2Cu);
    ctx->pc = 0x1BFF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFF24u;
    // 0x1bff28: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BFF24u, 0x1BFF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFF2Cu;
label_1bff2c:
    // 0x1bff2c: 0x3c020e10  lui         $v0, 0xE10
    ctx->pc = 0x1bff2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3600 << 16));
    // 0x1bff30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bff30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bff34: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bff34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bff38: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BFF38u;
    SET_GPR_U32(ctx, 31, 0x1BFF40u);
    ctx->pc = 0x1BFF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFF38u;
    // 0x1bff3c: 0x34462010  ori         $a2, $v0, 0x2010 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BFF38u, 0x1BFF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFF40u;
label_1bff40:
    // 0x1bff40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bff40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bff44: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1bff44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bff48: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BFF48u;
    SET_GPR_U32(ctx, 31, 0x1BFF50u);
    ctx->pc = 0x1BFF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFF48u;
    // 0x1bff4c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BFF48u, 0x1BFF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFF50u;
label_1bff50:
    // 0x1bff50: 0x8e2378c8  lw          $v1, 0x78C8($s1)
    ctx->pc = 0x1bff50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30920)));
    // 0x1bff54: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1bff54u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1bff58: 0x26940020  addiu       $s4, $s4, 0x20
    ctx->pc = 0x1bff58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x1bff5c: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x1bff5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x1bff60: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x1bff60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1bff64: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1BFF64u;
    {
        const bool branch_taken_0x1bff64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BFF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFF64u;
        // 0x1bff68: 0x26730020  addiu       $s3, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bff64) {
            ctx->pc = 0x1BFEC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bfec0;
        }
    }
    ctx->pc = 0x1BFF6Cu;
    // 0x1bff6c: 0x0  nop
    ctx->pc = 0x1bff6cu;
    // NOP
label_1bff70:
    // 0x1bff70: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1bff70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1bff74: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bff74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bff78: 0x9e2378c0  lwu         $v1, 0x78C0($s1)
    ctx->pc = 0x1bff78u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 30912)));
    // 0x1bff7c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bff7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bff80: 0x9e2778cc  lwu         $a3, 0x78CC($s1)
    ctx->pc = 0x1bff80u;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 30924)));
    // 0x1bff84: 0x23438  dsll        $a2, $v0, 16
    ctx->pc = 0x1bff84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << 16);
    // 0x1bff88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bff88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bff8c: 0x8e2278c4  lw          $v0, 0x78C4($s1)
    ctx->pc = 0x1bff8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30916)));
    // 0x1bff90: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1bff90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1bff94: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bff94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bff98: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x1bff98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x1bff9c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1bff9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1bffa0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bffa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bffa4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bffa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bffa8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bffa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bffac: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1bffacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1bffb0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BFFB0u;
    SET_GPR_U32(ctx, 31, 0x1BFFB8u);
    ctx->pc = 0x1BFFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFFB0u;
    // 0x1bffb4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BFFB0u, 0x1BFFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFFB8u;
label_1bffb8:
    // 0x1bffb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bffb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bffbc: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1BFFBCu;
    SET_GPR_U32(ctx, 31, 0x1BFFC4u);
    ctx->pc = 0x1BFFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFFBCu;
    // 0x1bffc0: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1BFFBCu, 0x1BFFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFFC4u;
label_1bffc4:
    // 0x1bffc4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1bffc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bffc8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1bffc8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bffcc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1bffccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bffd0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1bffd0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bffd4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bffd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bffd8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bffd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bffdc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bffdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bffe0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bffe0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bffe4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFFE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFFE4u;
        // 0x1bffe8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFFE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BFFECu;
}
