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

// Function: sub_0034D750
// Address: 0x34d750 - 0x34d824
void sub_0034D750_0x34d750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034D750_0x34d750");
#endif

    switch (ctx->pc) {
        case 0x34d7a8u: goto label_34d7a8;
        case 0x34d7c0u: goto label_34d7c0;
        case 0x34d7ecu: goto label_34d7ec;
        case 0x34d7f4u: goto label_34d7f4;
        default: break;
    }

    ctx->pc = 0x34d750u;

    // 0x34d750: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x34d750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x34d754: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x34d754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x34d758: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x34d758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x34d75c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x34d75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x34d760: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34d760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x34d764: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x34d764u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d768: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34d768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34d76c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x34d76cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d770: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x34D770u;
    {
        const bool branch_taken_0x34d770 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34D774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D770u;
        // 0x34d774: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d770) {
            ctx->pc = 0x34D798u;
            goto label_34d798;
        }
    }
    ctx->pc = 0x34D778u;
    // 0x34d778: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x34d778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x34d77c: 0xac32a0d4  sw          $s2, -0x5F2C($at)
    ctx->pc = 0x34d77cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x91A0D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x91A0D4u, _value); } while (0);
    // 0x34d780: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x34d780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x34d784: 0x9023a0ba  lbu         $v1, -0x5F46($at)
    ctx->pc = 0x34d784u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x91A0BAu));
    // 0x34d788: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x34d788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x34d78c: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x34d78cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x34d790: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x34D790u;
    {
        const bool branch_taken_0x34d790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D790u;
        // 0x34d794: 0xa023a0ba  sb          $v1, -0x5F46($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294942906), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d790) {
            ctx->pc = 0x34D808u;
            goto label_34d808;
        }
    }
    ctx->pc = 0x34D798u;
label_34d798:
    // 0x34d798: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x34d798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d79c: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x34d79cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x34d7a0: 0xc0d3860  jal         func_34E180
    ctx->pc = 0x34D7A0u;
    SET_GPR_U32(ctx, 31, 0x34D7A8u);
    ctx->pc = 0x34D7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D7A0u;
    // 0x34d7a4: 0x2484a090  addiu       $a0, $a0, -0x5F70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E180u, 0x34D7A0u, 0x34D7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D7A8u;
label_34d7a8:
    // 0x34d7a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x34d7a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d7ac: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x34D7ACu;
    {
        const bool branch_taken_0x34d7ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D7ACu;
        // 0x34d7b0: 0x3c040092  lui         $a0, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d7ac) {
            ctx->pc = 0x34D808u;
            goto label_34d808;
        }
    }
    ctx->pc = 0x34D7B4u;
    // 0x34d7b4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x34d7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34d7b8: 0xc0d3838  jal         func_34E0E0
    ctx->pc = 0x34D7B8u;
    SET_GPR_U32(ctx, 31, 0x34D7C0u);
    ctx->pc = 0x34D7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D7B8u;
    // 0x34d7bc: 0x2484a090  addiu       $a0, $a0, -0x5F70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E0E0u, 0x34D7B8u, 0x34D7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D7C0u;
label_34d7c0:
    // 0x34d7c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x34d7c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d7c4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x34D7C4u;
    {
        const bool branch_taken_0x34d7c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d7c4) {
            ctx->pc = 0x34D808u;
            goto label_34d808;
        }
    }
    ctx->pc = 0x34D7CCu;
    // 0x34d7cc: 0x82220017  lb          $v0, 0x17($s1)
    ctx->pc = 0x34d7ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 23)));
    // 0x34d7d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34d7d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d7d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x34d7d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d7d8: 0xae13000c  sw          $s3, 0xC($s0)
    ctx->pc = 0x34d7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 19));
    // 0x34d7dc: 0xae120018  sw          $s2, 0x18($s0)
    ctx->pc = 0x34d7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 18));
    // 0x34d7e0: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x34d7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x34d7e4: 0xc0d4420  jal         func_351080
    ctx->pc = 0x34D7E4u;
    SET_GPR_U32(ctx, 31, 0x34D7ECu);
    ctx->pc = 0x34D7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D7E4u;
    // 0x34d7e8: 0xa2020014  sb          $v0, 0x14($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351080u, 0x34D7E4u, 0x34D7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D7ECu;
label_34d7ec:
    // 0x34d7ec: 0xc0d4398  jal         func_350E60
    ctx->pc = 0x34D7ECu;
    SET_GPR_U32(ctx, 31, 0x34D7F4u);
    ctx->pc = 0x34D7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D7ECu;
    // 0x34d7f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350E60u, 0x34D7ECu, 0x34D7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D7F4u;
label_34d7f4:
    // 0x34d7f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34D7F4u;
    {
        const bool branch_taken_0x34d7f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d7f4) {
            ctx->pc = 0x34D808u;
            goto label_34d808;
        }
    }
    ctx->pc = 0x34D7FCu;
    // 0x34d7fc: 0x92030012  lbu         $v1, 0x12($s0)
    ctx->pc = 0x34d7fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x34d800: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x34d800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x34d804: 0xa2030012  sb          $v1, 0x12($s0)
    ctx->pc = 0x34d804u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 3));
label_34d808:
    // 0x34d808: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x34d808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34d80c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x34d80cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34d810: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34d810u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34d814: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34d814u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34d818: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34d818u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34d81c: 0x3e00008  jr          $ra
    ctx->pc = 0x34D81Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34D820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D81Cu;
        // 0x34d820: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34D81Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34D824u;
}
