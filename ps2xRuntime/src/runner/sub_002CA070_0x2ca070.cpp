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

// Function: sub_002CA070
// Address: 0x2ca070 - 0x2ca178
void sub_002CA070_0x2ca070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA070_0x2ca070");
#endif

    switch (ctx->pc) {
        case 0x2ca160u: goto label_2ca160;
        default: break;
    }

    ctx->pc = 0x2ca070u;

    // 0x2ca070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ca070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ca074: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2ca074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2ca078: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ca078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ca07c: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x2ca07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2ca080: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ca080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ca084: 0x90256c1c  lbu         $a1, 0x6C1C($at)
    ctx->pc = 0x2ca084u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2ca088: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x2ca088u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2ca08c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ca08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ca090: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2ca090u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ca094: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x2CA094u;
    {
        const bool branch_taken_0x2ca094 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA094u;
        // 0x2ca098: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca094) {
            ctx->pc = 0x2CA0D0u;
            goto label_2ca0d0;
        }
    }
    ctx->pc = 0x2CA09Cu;
    // 0x2ca09c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2ca09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ca0a0: 0x8c245ef4  lw          $a0, 0x5EF4($at)
    ctx->pc = 0x2ca0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 24308)));
    // 0x2ca0a4: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CA0A4u;
    {
        const bool branch_taken_0x2ca0a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2ca0a4) {
            ctx->pc = 0x2CA0B8u;
            goto label_2ca0b8;
        }
    }
    ctx->pc = 0x2CA0ACu;
    // 0x2ca0ac: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2ca0acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2ca0b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CA0B0u;
    {
        const bool branch_taken_0x2ca0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA0B0u;
        // 0x2ca0b4: 0xac245ef0  sw          $a0, 0x5EF0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 24304), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca0b0) {
            ctx->pc = 0x2CA0C0u;
            goto label_2ca0c0;
        }
    }
    ctx->pc = 0x2CA0B8u;
label_2ca0b8:
    // 0x2ca0b8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2ca0b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2ca0bc: 0xac235ef0  sw          $v1, 0x5EF0($at)
    ctx->pc = 0x2ca0bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8D5EF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D5EF0u, _value); } while (0);
label_2ca0c0:
    // 0x2ca0c0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2ca0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ca0c4: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2ca0c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2ca0c8: 0xac235ef4  sw          $v1, 0x5EF4($at)
    ctx->pc = 0x2ca0c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8D5EF4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D5EF4u, _value); } while (0);
    // 0x2ca0cc: 0x0  nop
    ctx->pc = 0x2ca0ccu;
    // NOP
label_2ca0d0:
    // 0x2ca0d0: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x2ca0d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2ca0d4: 0x38640001  xori        $a0, $v1, 0x1
    ctx->pc = 0x2ca0d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2ca0d8: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x2ca0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2ca0dc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2ca0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ca0e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ca0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ca0e4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2ca0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ca0e8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2CA0E8u;
    {
        const bool branch_taken_0x2ca0e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA0E8u;
        // 0x2ca0ec: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca0e8) {
            ctx->pc = 0x2CA128u;
            goto label_2ca128;
        }
    }
    ctx->pc = 0x2CA0F0u;
    // 0x2ca0f0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2ca0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2ca0f4: 0x8c255efc  lw          $a1, 0x5EFC($at)
    ctx->pc = 0x2ca0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 24316)));
    // 0x2ca0f8: 0x10850005  beq         $a0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CA0F8u;
    {
        const bool branch_taken_0x2ca0f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x2ca0f8) {
            ctx->pc = 0x2CA110u;
            goto label_2ca110;
        }
    }
    ctx->pc = 0x2CA100u;
    // 0x2ca100: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2ca100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2ca104: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2CA104u;
    {
        const bool branch_taken_0x2ca104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA104u;
        // 0x2ca108: 0xac255ef8  sw          $a1, 0x5EF8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 24312), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca104) {
            ctx->pc = 0x2CA118u;
            goto label_2ca118;
        }
    }
    ctx->pc = 0x2CA10Cu;
    // 0x2ca10c: 0x0  nop
    ctx->pc = 0x2ca10cu;
    // NOP
label_2ca110:
    // 0x2ca110: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2ca110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2ca114: 0xac245ef8  sw          $a0, 0x5EF8($at)
    ctx->pc = 0x2ca114u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x8D5EF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D5EF8u, _value); } while (0);
label_2ca118:
    // 0x2ca118: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2ca118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2ca11c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2ca11cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2ca120: 0xac235efc  sw          $v1, 0x5EFC($at)
    ctx->pc = 0x2ca120u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8D5EFCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D5EFCu, _value); } while (0);
    // 0x2ca124: 0x0  nop
    ctx->pc = 0x2ca124u;
    // NOP
label_2ca128:
    // 0x2ca128: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x2CA128u;
    {
        const bool branch_taken_0x2ca128 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca128) {
            ctx->pc = 0x2CA168u;
            goto label_2ca168;
        }
    }
    ctx->pc = 0x2CA130u;
    // 0x2ca130: 0x92070002  lbu         $a3, 0x2($s0)
    ctx->pc = 0x2ca130u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2ca134: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2ca134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2ca138: 0x2442f38c  addiu       $v0, $v0, -0xC74
    ctx->pc = 0x2ca138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964108));
    // 0x2ca13c: 0x92060619  lbu         $a2, 0x619($s0)
    ctx->pc = 0x2ca13cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1561)));
    // 0x2ca140: 0x8f848b34  lw          $a0, -0x74CC($gp)
    ctx->pc = 0x2ca140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937396)));
    // 0x2ca144: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2ca144u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2ca148: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2ca148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2ca14c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2ca14cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2ca150: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ca150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ca154: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2ca154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ca158: 0xc0c753c  jal         func_31D4F0
    ctx->pc = 0x2CA158u;
    SET_GPR_U32(ctx, 31, 0x2CA160u);
    ctx->pc = 0x2CA15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA158u;
    // 0x2ca15c: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D4F0u, 0x2CA158u, 0x2CA160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA160u;
label_2ca160:
    // 0x2ca160: 0xa2020619  sb          $v0, 0x619($s0)
    ctx->pc = 0x2ca160u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1561), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ca164: 0x0  nop
    ctx->pc = 0x2ca164u;
    // NOP
label_2ca168:
    // 0x2ca168: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ca168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca16c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ca16cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca170: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA170u;
        // 0x2ca174: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA178u;
}
