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

// Function: sub_00130120
// Address: 0x130120 - 0x130238
void sub_00130120_0x130120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130120_0x130120");
#endif

    switch (ctx->pc) {
        case 0x13013cu: goto label_13013c;
        case 0x130158u: goto label_130158;
        case 0x130168u: goto label_130168;
        case 0x13017cu: goto label_13017c;
        case 0x1301acu: goto label_1301ac;
        case 0x1301e4u: goto label_1301e4;
        case 0x130224u: goto label_130224;
        default: break;
    }

    ctx->pc = 0x130120u;

    // 0x130120: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x130120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x130124: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x130124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x130128: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x130128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13012c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13012cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x130130: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x130130u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130134: 0xc04c118  jal         func_130460
    ctx->pc = 0x130134u;
    SET_GPR_U32(ctx, 31, 0x13013Cu);
    ctx->pc = 0x130138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130134u;
    // 0x130138: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130460u, 0x130134u, 0x13013Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13013Cu;
label_13013c:
    // 0x13013c: 0x111280  sll         $v0, $s1, 10
    ctx->pc = 0x13013cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 10));
    // 0x130140: 0x24050401  addiu       $a1, $zero, 0x401
    ctx->pc = 0x130140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
    // 0x130144: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x130144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x130148: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x130148u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13014c: 0x2028821  addu        $s1, $s0, $v0
    ctx->pc = 0x13014cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x130150: 0xc05e470  jal         func_1791C0
    ctx->pc = 0x130150u;
    SET_GPR_U32(ctx, 31, 0x130158u);
    ctx->pc = 0x130154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130150u;
    // 0x130154: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1791C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1791C0u, 0x130150u, 0x130158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130158u;
label_130158:
    // 0x130158: 0x34018030  ori         $at, $zero, 0x8030
    ctx->pc = 0x130158u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32816);
    // 0x13015c: 0x24050401  addiu       $a1, $zero, 0x401
    ctx->pc = 0x13015cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
    // 0x130160: 0xc05e470  jal         func_1791C0
    ctx->pc = 0x130160u;
    SET_GPR_U32(ctx, 31, 0x130168u);
    ctx->pc = 0x130164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130160u;
    // 0x130164: 0x2212021  addu        $a0, $s1, $at (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1791C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1791C0u, 0x130160u, 0x130168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130168u;
label_130168:
    // 0x130168: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x130168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x13016c: 0x24050401  addiu       $a1, $zero, 0x401
    ctx->pc = 0x13016cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
    // 0x130170: 0x34210050  ori         $at, $at, 0x50
    ctx->pc = 0x130170u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)80);
    // 0x130174: 0xc05e470  jal         func_1791C0
    ctx->pc = 0x130174u;
    SET_GPR_U32(ctx, 31, 0x13017Cu);
    ctx->pc = 0x130178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130174u;
    // 0x130178: 0x2212021  addu        $a0, $s1, $at (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1791C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1791C0u, 0x130174u, 0x13017Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13017Cu;
label_13017c:
    // 0x13017c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x13017cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x130180: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x130180u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x130184: 0x9023cea4  lbu         $v1, -0x315C($at)
    ctx->pc = 0x130184u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81CEA4u));
    // 0x130188: 0x2484f250  addiu       $a0, $a0, -0xDB0
    ctx->pc = 0x130188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963792));
    // 0x13018c: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x13018cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x130190: 0x31280  sll         $v0, $v1, 10
    ctx->pc = 0x130190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x130194: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x130194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x130198: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x130198u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13019c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x13019cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1301a0: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x1301a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1301a4: 0xc061c60  jal         func_187180
    ctx->pc = 0x1301A4u;
    SET_GPR_U32(ctx, 31, 0x1301ACu);
    ctx->pc = 0x1301A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1301A4u;
    // 0x1301a8: 0x24464010  addiu       $a2, $v0, 0x4010 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187180u, 0x1301A4u, 0x1301ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1301ACu;
label_1301ac:
    // 0x1301ac: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1301acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1301b0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x1301b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x1301b4: 0x9023cea4  lbu         $v1, -0x315C($at)
    ctx->pc = 0x1301b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81CEA4u));
    // 0x1301b8: 0x2484f250  addiu       $a0, $a0, -0xDB0
    ctx->pc = 0x1301b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963792));
    // 0x1301bc: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1301bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1301c0: 0x31280  sll         $v0, $v1, 10
    ctx->pc = 0x1301c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x1301c4: 0x34018030  ori         $at, $zero, 0x8030
    ctx->pc = 0x1301c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32816);
    // 0x1301c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1301c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1301cc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1301ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1301d0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1301d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1301d4: 0x412821  addu        $a1, $v0, $at
    ctx->pc = 0x1301d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1301d8: 0x3401c030  ori         $at, $zero, 0xC030
    ctx->pc = 0x1301d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49200);
    // 0x1301dc: 0xc061c60  jal         func_187180
    ctx->pc = 0x1301DCu;
    SET_GPR_U32(ctx, 31, 0x1301E4u);
    ctx->pc = 0x1301E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1301DCu;
    // 0x1301e0: 0x413021  addu        $a2, $v0, $at (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187180u, 0x1301DCu, 0x1301E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1301E4u;
label_1301e4:
    // 0x1301e4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1301e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1301e8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x1301e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x1301ec: 0x9023cea4  lbu         $v1, -0x315C($at)
    ctx->pc = 0x1301ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81CEA4u));
    // 0x1301f0: 0x2484f250  addiu       $a0, $a0, -0xDB0
    ctx->pc = 0x1301f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963792));
    // 0x1301f4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1301f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1301f8: 0x31280  sll         $v0, $v1, 10
    ctx->pc = 0x1301f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x1301fc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1301fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x130200: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x130200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x130204: 0x34210050  ori         $at, $at, 0x50
    ctx->pc = 0x130204u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)80);
    // 0x130208: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x130208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13020c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x13020cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x130210: 0x412821  addu        $a1, $v0, $at
    ctx->pc = 0x130210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x130214: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x130214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x130218: 0x34214050  ori         $at, $at, 0x4050
    ctx->pc = 0x130218u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16464);
    // 0x13021c: 0xc061c60  jal         func_187180
    ctx->pc = 0x13021Cu;
    SET_GPR_U32(ctx, 31, 0x130224u);
    ctx->pc = 0x130220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13021Cu;
    // 0x130220: 0x413021  addu        $a2, $v0, $at (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187180u, 0x13021Cu, 0x130224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130224u;
label_130224:
    // 0x130224: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x130224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x130228: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x130228u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13022c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13022cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130230: 0x3e00008  jr          $ra
    ctx->pc = 0x130230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130230u;
        // 0x130234: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130238u;
}
