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

// Function: sub_00230100
// Address: 0x230100 - 0x230194
void sub_00230100_0x230100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230100_0x230100");
#endif

    switch (ctx->pc) {
        case 0x230114u: goto label_230114;
        case 0x230130u: goto label_230130;
        case 0x23014cu: goto label_23014c;
        default: break;
    }

    ctx->pc = 0x230100u;

    // 0x230100: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x230100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x230104: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x230104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x230108: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x230108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23010c: 0xc08c02a  jal         func_2300A8
    ctx->pc = 0x23010Cu;
    SET_GPR_U32(ctx, 31, 0x230114u);
    ctx->pc = 0x2300A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2300A8u, 0x23010Cu, 0x230114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230114u;
label_230114:
    // 0x230114: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x230114u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230118: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x230118u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x23011c: 0x2484a560  addiu       $a0, $a0, -0x5AA0
    ctx->pc = 0x23011cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944096));
    // 0x230120: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x230120u;
    {
        const bool branch_taken_0x230120 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x230124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230120u;
        // 0x230124: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230120) {
            ctx->pc = 0x230144u;
            goto label_230144;
        }
    }
    ctx->pc = 0x230128u;
    // 0x230128: 0xc08dc9c  jal         func_237270
    ctx->pc = 0x230128u;
    SET_GPR_U32(ctx, 31, 0x230130u);
    ctx->pc = 0x23012Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230128u;
    // 0x23012c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237270u, 0x230128u, 0x230130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230130u;
label_230130:
    // 0x230130: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x230130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x230134: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x230134u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x230138: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x230138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x23013c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23013Cu;
    {
        const bool branch_taken_0x23013c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x230140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23013Cu;
        // 0x230140: 0x2484a598  addiu       $a0, $a0, -0x5A68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23013c) {
            ctx->pc = 0x230158u;
            goto label_230158;
        }
    }
    ctx->pc = 0x230144u;
label_230144:
    // 0x230144: 0xc08baa4  jal         func_22EA90
    ctx->pc = 0x230144u;
    SET_GPR_U32(ctx, 31, 0x23014Cu);
    ctx->pc = 0x22EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA90u, 0x230144u, 0x23014Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23014Cu;
label_23014c:
    // 0x23014c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x23014Cu;
    {
        const bool branch_taken_0x23014c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23014Cu;
        // 0x230150: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23014c) {
            ctx->pc = 0x230184u;
            goto label_230184;
        }
    }
    ctx->pc = 0x230154u;
    // 0x230154: 0x0  nop
    ctx->pc = 0x230154u;
    // NOP
label_230158:
    // 0x230158: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x230158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x23015c: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x23015cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x230160: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x230160u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x230164: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x230164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x230168: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x230168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x23016c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x23016cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x230170: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x230170u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x230174: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x230174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x230178: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x230178u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x23017c: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x23017cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x230180: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x230180u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_230184:
    // 0x230184: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x230184u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230188: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x230188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23018c: 0x3e00008  jr          $ra
    ctx->pc = 0x23018Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23018Cu;
        // 0x230190: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23018Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230194u;
}
