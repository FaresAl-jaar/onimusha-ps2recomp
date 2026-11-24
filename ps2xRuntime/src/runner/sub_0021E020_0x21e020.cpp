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

// Function: sub_0021E020
// Address: 0x21e020 - 0x21e09c
void sub_0021E020_0x21e020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E020_0x21e020");
#endif

    switch (ctx->pc) {
        case 0x21e044u: goto label_21e044;
        default: break;
    }

    ctx->pc = 0x21e020u;

    // 0x21e020: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21e020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21e024: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21e024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21e028: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21e028u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e02c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21e02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21e030: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21e030u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e034: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21e034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21e038: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x21e038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x21e03c: 0xc084968  jal         func_2125A0
    ctx->pc = 0x21E03Cu;
    SET_GPR_U32(ctx, 31, 0x21E044u);
    ctx->pc = 0x21E040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E03Cu;
    // 0x21e040: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x21E03Cu, 0x21E044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E044u;
label_21e044:
    // 0x21e044: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x21e044u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x21e048: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21e048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e04c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21e04cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e050: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x21e050u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e054: 0x34a50135  ori         $a1, $a1, 0x135
    ctx->pc = 0x21e054u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)309);
    // 0x21e058: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21E058u;
    {
        const bool branch_taken_0x21e058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E058u;
        // 0x21e05c: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e058) {
            ctx->pc = 0x21E080u;
            goto label_21e080;
        }
    }
    ctx->pc = 0x21E060u;
    // 0x21e060: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21e060u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e064: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21e064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e068: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21e068u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21e06c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21e06cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21e070: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21e070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21e074: 0x80848e0  j           func_212380
    ctx->pc = 0x21E074u;
    ctx->pc = 0x21E078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E074u;
    // 0x21e078: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x21E07Cu;
    // 0x21e07c: 0x0  nop
    ctx->pc = 0x21e07cu;
    // NOP
label_21e080:
    // 0x21e080: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21e080u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e084: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21e084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e088: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21e088u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21e08c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21e08cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21e090: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21e090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21e094: 0x80888d6  j           func_222358
    ctx->pc = 0x21E094u;
    ctx->pc = 0x21E098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E094u;
    // 0x21e098: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222358u;
    sub_00222358_0x222358(rdram, ctx, runtime); return;
    ctx->pc = 0x21E09Cu;
}
