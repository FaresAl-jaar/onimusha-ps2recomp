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

// Function: sub_0023C128
// Address: 0x23c128 - 0x23c1c0
void sub_0023C128_0x23c128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C128_0x23c128");
#endif

    switch (ctx->pc) {
        case 0x23c194u: goto label_23c194;
        default: break;
    }

    ctx->pc = 0x23c128u;

    // 0x23c128: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23c128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23c12c: 0x28a30002  slti        $v1, $a1, 0x2
    ctx->pc = 0x23c12cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x23c130: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x23c130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x23c134: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x23c134u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c138: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x23c138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x23c13c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23c13cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c140: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x23C140u;
    {
        const bool branch_taken_0x23c140 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C140u;
        // 0x23c144: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c140) {
            ctx->pc = 0x23C1B0u;
            goto label_23c1b0;
        }
    }
    ctx->pc = 0x23C148u;
    // 0x23c148: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x23c148u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x23c14c: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x23c14cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x23c150: 0x33200  sll         $a2, $v1, 8
    ctx->pc = 0x23c150u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x23c154: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x23c154u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x23c158: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x23c158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x23c15c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x23c15cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x23c160: 0x54670014  bnel        $v1, $a3, . + 4 + (0x14 << 2)
    ctx->pc = 0x23C160u;
    {
        const bool branch_taken_0x23c160 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x23c160) {
            ctx->pc = 0x23C164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C160u;
            // 0x23c164: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C1B4u;
            goto label_23c1b4;
        }
    }
    ctx->pc = 0x23C168u;
    // 0x23c168: 0x27a20018  addiu       $v0, $sp, 0x18
    ctx->pc = 0x23c168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x23c16c: 0x27a3001c  addiu       $v1, $sp, 0x1C
    ctx->pc = 0x23c16cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x23c170: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x23c170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23c174: 0x27a70012  addiu       $a3, $sp, 0x12
    ctx->pc = 0x23c174u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 18));
    // 0x23c178: 0x27a80013  addiu       $t0, $sp, 0x13
    ctx->pc = 0x23c178u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 19));
    // 0x23c17c: 0x27a90014  addiu       $t1, $sp, 0x14
    ctx->pc = 0x23c17cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x23c180: 0x27aa0015  addiu       $t2, $sp, 0x15
    ctx->pc = 0x23c180u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 21));
    // 0x23c184: 0x27ab0020  addiu       $t3, $sp, 0x20
    ctx->pc = 0x23c184u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23c188: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x23c188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x23c18c: 0xc08b5da  jal         func_22D768
    ctx->pc = 0x23C18Cu;
    SET_GPR_U32(ctx, 31, 0x23C194u);
    ctx->pc = 0x23C190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C18Cu;
    // 0x23c190: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D768u, 0x23C18Cu, 0x23C194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C194u;
label_23c194:
    // 0x23c194: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23C194u;
    {
        const bool branch_taken_0x23c194 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x23C198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C194u;
        // 0x23c198: 0x87a30010  lh          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c194) {
            ctx->pc = 0x23C1A8u;
            goto label_23c1a8;
        }
    }
    ctx->pc = 0x23C19Cu;
    // 0x23c19c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23C19Cu;
    {
        const bool branch_taken_0x23c19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C19Cu;
        // 0x23c1a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c19c) {
            ctx->pc = 0x23C1B0u;
            goto label_23c1b0;
        }
    }
    ctx->pc = 0x23C1A4u;
    // 0x23c1a4: 0x0  nop
    ctx->pc = 0x23c1a4u;
    // NOP
label_23c1a8:
    // 0x23c1a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23c1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23c1ac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x23c1acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_23c1b0:
    // 0x23c1b0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x23c1b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23c1b4:
    // 0x23c1b4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x23c1b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23c1b8: 0x3e00008  jr          $ra
    ctx->pc = 0x23C1B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C1B8u;
        // 0x23c1bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C1B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C1C0u;
}
