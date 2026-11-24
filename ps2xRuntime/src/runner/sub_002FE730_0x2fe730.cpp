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

// Function: sub_002FE730
// Address: 0x2fe730 - 0x2fe83c
void sub_002FE730_0x2fe730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE730_0x2fe730");
#endif

    switch (ctx->pc) {
        case 0x2fe754u: goto label_2fe754;
        case 0x2fe764u: goto label_2fe764;
        case 0x2fe774u: goto label_2fe774;
        case 0x2fe7a4u: goto label_2fe7a4;
        case 0x2fe7b4u: goto label_2fe7b4;
        case 0x2fe7c4u: goto label_2fe7c4;
        case 0x2fe7ecu: goto label_2fe7ec;
        case 0x2fe824u: goto label_2fe824;
        default: break;
    }

    ctx->pc = 0x2fe730u;

    // 0x2fe730: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2fe730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2fe734: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2fe734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2fe738: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2fe738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2fe73c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fe73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2fe740: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2fe740u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe744: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fe744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2fe748: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fe748u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe74c: 0xc09d4d4  jal         func_275350
    ctx->pc = 0x2FE74Cu;
    SET_GPR_U32(ctx, 31, 0x2FE754u);
    ctx->pc = 0x2FE750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE74Cu;
    // 0x2fe750: 0x27a40048  addiu       $a0, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275350u, 0x2FE74Cu, 0x2FE754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE754u;
label_2fe754:
    // 0x2fe754: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2fe754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2fe758: 0x8c450190  lw          $a1, 0x190($v0)
    ctx->pc = 0x2fe758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 400)));
    // 0x2fe75c: 0xc09d4fc  jal         func_2753F0
    ctx->pc = 0x2FE75Cu;
    SET_GPR_U32(ctx, 31, 0x2FE764u);
    ctx->pc = 0x2FE760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE75Cu;
    // 0x2fe760: 0x27a40048  addiu       $a0, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2753F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2753F0u, 0x2FE75Cu, 0x2FE764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE764u;
label_2fe764:
    // 0x2fe764: 0x92060012  lbu         $a2, 0x12($s0)
    ctx->pc = 0x2fe764u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x2fe768: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x2fe768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x2fe76c: 0xc09d524  jal         func_275490
    ctx->pc = 0x2FE76Cu;
    SET_GPR_U32(ctx, 31, 0x2FE774u);
    ctx->pc = 0x2FE770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE76Cu;
    // 0x2fe770: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x2FE76Cu, 0x2FE774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE774u;
label_2fe774:
    // 0x2fe774: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2fe774u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe778: 0x90420006  lbu         $v0, 0x6($v0)
    ctx->pc = 0x2fe778u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2fe77c: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x2fe77cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
    // 0x2fe780: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x2fe780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x2fe784: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2FE784u;
    {
        const bool branch_taken_0x2fe784 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x2fe784) {
            ctx->pc = 0x2FE790u;
            goto label_2fe790;
        }
    }
    ctx->pc = 0x2FE78Cu;
    // 0x2fe78c: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x2fe78cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
label_2fe790:
    // 0x2fe790: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2fe790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2fe794: 0x92060011  lbu         $a2, 0x11($s0)
    ctx->pc = 0x2fe794u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x2fe798: 0x8e070090  lw          $a3, 0x90($s0)
    ctx->pc = 0x2fe798u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x2fe79c: 0xc096fd8  jal         func_25BF60
    ctx->pc = 0x2FE79Cu;
    SET_GPR_U32(ctx, 31, 0x2FE7A4u);
    ctx->pc = 0x2FE7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE79Cu;
    // 0x2fe7a0: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BF60u, 0x2FE79Cu, 0x2FE7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE7A4u;
label_2fe7a4:
    // 0x2fe7a4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2fe7a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe7a8: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x2fe7a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2fe7ac: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x2FE7ACu;
    SET_GPR_U32(ctx, 31, 0x2FE7B4u);
    ctx->pc = 0x2FE7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE7ACu;
    // 0x2fe7b0: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x2FE7ACu, 0x2FE7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE7B4u;
label_2fe7b4:
    // 0x2fe7b4: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x2fe7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x2fe7b8: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x2fe7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2fe7bc: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x2FE7BCu;
    SET_GPR_U32(ctx, 31, 0x2FE7C4u);
    ctx->pc = 0x2FE7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE7BCu;
    // 0x2fe7c0: 0x26060060  addiu       $a2, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x2FE7BCu, 0x2FE7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE7C4u;
label_2fe7c4:
    // 0x2fe7c4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x2fe7c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x2fe7c8: 0x78225c70  lq          $v0, 0x5C70($at)
    ctx->pc = 0x2fe7c8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C70u));
    // 0x2fe7cc: 0x7e020080  sq          $v0, 0x80($s0)
    ctx->pc = 0x2fe7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 128), GPR_VEC(ctx, 2));
    // 0x2fe7d0: 0x92020010  lbu         $v0, 0x10($s0)
    ctx->pc = 0x2fe7d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2fe7d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2fe7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2fe7d8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2FE7D8u;
    {
        const bool branch_taken_0x2fe7d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE7D8u;
        // 0x2fe7dc: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe7d8) {
            ctx->pc = 0x2FE810u;
            goto label_2fe810;
        }
    }
    ctx->pc = 0x2FE7E0u;
    // 0x2fe7e0: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x2fe7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2fe7e4: 0xc096cb8  jal         func_25B2E0
    ctx->pc = 0x2FE7E4u;
    SET_GPR_U32(ctx, 31, 0x2FE7ECu);
    ctx->pc = 0x2FE7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE7E4u;
    // 0x2fe7e8: 0x26060080  addiu       $a2, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B2E0u, 0x2FE7E4u, 0x2FE7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE7ECu;
label_2fe7ec:
    // 0x2fe7ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FE7ECu;
    {
        const bool branch_taken_0x2fe7ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe7ec) {
            ctx->pc = 0x2FE800u;
            goto label_2fe800;
        }
    }
    ctx->pc = 0x2FE7F4u;
    // 0x2fe7f4: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x2fe7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe7f8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FE7F8u;
    {
        const bool branch_taken_0x2fe7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE7F8u;
        // 0x2fe7fc: 0xe6000074  swc1        $f0, 0x74($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe7f8) {
            ctx->pc = 0x2FE810u;
            goto label_2fe810;
        }
    }
    ctx->pc = 0x2FE800u;
label_2fe800:
    // 0x2fe800: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2fe800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2fe804: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x2fe804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe808: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x2fe808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x2fe80c: 0x0  nop
    ctx->pc = 0x2fe80cu;
    // NOP
label_2fe810:
    // 0x2fe810: 0x7a020070  lq          $v0, 0x70($s0)
    ctx->pc = 0x2fe810u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2fe814: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x2fe814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x2fe818: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2fe818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fe81c: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x2FE81Cu;
    SET_GPR_U32(ctx, 31, 0x2FE824u);
    ctx->pc = 0x2FE820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE81Cu;
    // 0x2fe820: 0x7e020050  sq          $v0, 0x50($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2FE81Cu, 0x2FE824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE824u;
label_2fe824:
    // 0x2fe824: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2fe824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fe828: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2fe828u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fe82c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fe82cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fe830: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fe830u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe834: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE834u;
        // 0x2fe838: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE83Cu;
}
