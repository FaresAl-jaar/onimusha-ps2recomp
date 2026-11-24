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

// Function: sub_00276940
// Address: 0x276940 - 0x2769e0
void sub_00276940_0x276940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276940_0x276940");
#endif

    switch (ctx->pc) {
        case 0x276960u: goto label_276960;
        default: break;
    }

    ctx->pc = 0x276940u;

    // 0x276940: 0x8f838904  lw          $v1, -0x76FC($gp)
    ctx->pc = 0x276940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936836)));
    // 0x276944: 0x18600024  blez        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x276944u;
    {
        const bool branch_taken_0x276944 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x276944) {
            ctx->pc = 0x2769D8u;
            goto label_2769d8;
        }
    }
    ctx->pc = 0x27694Cu;
    // 0x27694c: 0x8f8a8910  lw          $t2, -0x76F0($gp)
    ctx->pc = 0x27694cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936848)));
    // 0x276950: 0x11400021  beqz        $t2, . + 4 + (0x21 << 2)
    ctx->pc = 0x276950u;
    {
        const bool branch_taken_0x276950 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x276954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276950u;
        // 0x276954: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276950) {
            ctx->pc = 0x2769D8u;
            goto label_2769d8;
        }
    }
    ctx->pc = 0x276958u;
    // 0x276958: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x276958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27695c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x27695cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_276960:
    // 0x276960: 0x8d4700c0  lw          $a3, 0xC0($t2)
    ctx->pc = 0x276960u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 192)));
    // 0x276964: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x276964u;
    {
        const bool branch_taken_0x276964 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x276968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276964u;
        // 0x276968: 0x8d4900b8  lw          $t1, 0xB8($t2) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276964) {
            ctx->pc = 0x276978u;
            goto label_276978;
        }
    }
    ctx->pc = 0x27696Cu;
    // 0x27696c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x27696cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x276970: 0x14e3000d  bne         $a3, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x276970u;
    {
        const bool branch_taken_0x276970 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x276970) {
            ctx->pc = 0x2769A8u;
            goto label_2769a8;
        }
    }
    ctx->pc = 0x276978u;
label_276978:
    // 0x276978: 0x914300b7  lbu         $v1, 0xB7($t2)
    ctx->pc = 0x276978u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 183)));
    // 0x27697c: 0x10660006  beq         $v1, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x27697Cu;
    {
        const bool branch_taken_0x27697c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x27697c) {
            ctx->pc = 0x276998u;
            goto label_276998;
        }
    }
    ctx->pc = 0x276984u;
    // 0x276984: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x276984u;
    {
        const bool branch_taken_0x276984 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x276984) {
            ctx->pc = 0x276998u;
            goto label_276998;
        }
    }
    ctx->pc = 0x27698Cu;
    // 0x27698c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x27698Cu;
    {
        const bool branch_taken_0x27698c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27698c) {
            ctx->pc = 0x2769A8u;
            goto label_2769a8;
        }
    }
    ctx->pc = 0x276994u;
    // 0x276994: 0x0  nop
    ctx->pc = 0x276994u;
    // NOP
label_276998:
    // 0x276998: 0xa14500b7  sb          $a1, 0xB7($t2)
    ctx->pc = 0x276998u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 183), (uint8_t)GPR_U32(ctx, 5));
    // 0x27699c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x27699cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2769a0: 0xad4300c0  sw          $v1, 0xC0($t2)
    ctx->pc = 0x2769a0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 192), GPR_U32(ctx, 3));
    // 0x2769a4: 0xa54800c4  sh          $t0, 0xC4($t2)
    ctx->pc = 0x2769a4u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 196), (uint16_t)GPR_U32(ctx, 8));
label_2769a8:
    // 0x2769a8: 0x25030002  addiu       $v1, $t0, 0x2
    ctx->pc = 0x2769a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x2769ac: 0x3443c  dsll32      $t0, $v1, 16
    ctx->pc = 0x2769acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2769b0: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x2769b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2769b4: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x2769b4u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x2769b8: 0x5010004  bgez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2769B8u;
    {
        const bool branch_taken_0x2769b8 = (GPR_S64(ctx, 8) >= 0);
        ctx->pc = 0x2769BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2769B8u;
        // 0x2769bc: 0x3103003f  andi        $v1, $t0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2769b8) {
            ctx->pc = 0x2769CCu;
            goto label_2769cc;
        }
    }
    ctx->pc = 0x2769C0u;
    // 0x2769c0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2769C0u;
    {
        const bool branch_taken_0x2769c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2769C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2769C0u;
        // 0x2769c4: 0x3443c  dsll32      $t0, $v1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2769c0) {
            ctx->pc = 0x2769D0u;
            goto label_2769d0;
        }
    }
    ctx->pc = 0x2769C8u;
    // 0x2769c8: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x2769c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
label_2769cc:
    // 0x2769cc: 0x3443c  dsll32      $t0, $v1, 16
    ctx->pc = 0x2769ccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 16));
label_2769d0:
    // 0x2769d0: 0x1520ffe3  bnez        $t1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x2769D0u;
    {
        const bool branch_taken_0x2769d0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x2769D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2769D0u;
        // 0x2769d4: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2769d0) {
            ctx->pc = 0x276960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_276960;
        }
    }
    ctx->pc = 0x2769D8u;
label_2769d8:
    // 0x2769d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2769D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2769D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2769E0u;
}
