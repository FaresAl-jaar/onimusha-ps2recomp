#include <cstdio>
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

// Function: sub_00239A78
// Address: 0x239a78 - 0x239afc
void sub_00239A78_0x239a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239A78_0x239a78");
#endif

    switch (ctx->pc) {
        case 0x239ac0u: goto label_239ac0;
        case 0x239ac8u: goto label_239ac8;
        case 0x239adcu: goto label_239adc;
        case 0x239ae8u: goto label_239ae8;
        default: break;
    }

    ctx->pc = 0x239a78u;

    { static uint64_t last[3]={}; static bool first=true; static uint32_t lines=0, hits=0; ++hits; const uint64_t cur[3]={(uint64_t)(GPR_U32(ctx,4)),(uint64_t)(GPR_U32(ctx,5)),(uint64_t)(GPR_U32(ctx,31)),}; bool chg=first; for(int i=0;i<3;++i) chg = chg || cur[i]!=last[i]; if (chg && lines<20) { ++lines; first=false; for(int i=0;i<3;++i) last[i]=cur[i]; fprintf(stderr,"[px startsj] hit=%u " "h=0x%llx sj=0x%llx ra=0x%llx" "\n",hits,(unsigned long long)cur[0],(unsigned long long)cur[1],(unsigned long long)cur[2]); } }
    // 0x239a78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x239a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x239a7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x239a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x239a80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x239a80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239a84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x239a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x239a88: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x239a88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239a8c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x239A8Cu;
    {
        const bool branch_taken_0x239a8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x239A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239A8Cu;
        // 0x239a90: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239a8c) {
            ctx->pc = 0x239A9Cu;
            goto label_239a9c;
        }
    }
    ctx->pc = 0x239A94u;
    // 0x239a94: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x239A94u;
    {
        const bool branch_taken_0x239a94 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x239a94) {
            ctx->pc = 0x239AB8u;
            goto label_239ab8;
        }
    }
    ctx->pc = 0x239A9Cu;
label_239a9c:
    // 0x239a9c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x239a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x239aa0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x239aa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239aa4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x239aa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x239aa8: 0x2484b058  addiu       $a0, $a0, -0x4FA8
    ctx->pc = 0x239aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946904));
    // 0x239aac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x239aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239ab0: 0x808baa4  j           func_22EA90
    ctx->pc = 0x239AB0u;
    ctx->pc = 0x239AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239AB0u;
    // 0x239ab4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    sub_0022EA90_0x22ea90(rdram, ctx, runtime); return;
    ctx->pc = 0x239AB8u;
label_239ab8:
    // 0x239ab8: 0xc08e700  jal         func_239C00
    ctx->pc = 0x239AB8u;
    SET_GPR_U32(ctx, 31, 0x239AC0u);
    ctx->pc = 0x239C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239C00u, 0x239AB8u, 0x239AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239AC0u;
label_239ac0:
    // 0x239ac0: 0xc08b528  jal         func_22D4A0
    ctx->pc = 0x239AC0u;
    SET_GPR_U32(ctx, 31, 0x239AC8u);
    ctx->pc = 0x22D4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4A0u, 0x239AC0u, 0x239AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239AC8u;
label_239ac8:
    // 0x239ac8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x239ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x239acc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x239accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239ad0: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x239ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x239ad4: 0xc08e618  jal         func_239860
    ctx->pc = 0x239AD4u;
    SET_GPR_U32(ctx, 31, 0x239ADCu);
    ctx->pc = 0x239AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239AD4u;
    // 0x239ad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239860u, 0x239AD4u, 0x239ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239ADCu;
label_239adc:
    // 0x239adc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239ae0: 0xc08efba  jal         func_23BEE8
    ctx->pc = 0x239AE0u;
    SET_GPR_U32(ctx, 31, 0x239AE8u);
    ctx->pc = 0x239AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239AE0u;
    // 0x239ae4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BEE8u, 0x239AE0u, 0x239AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239AE8u;
label_239ae8:
    // 0x239ae8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x239ae8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239aec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x239aecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x239af0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x239af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239af4: 0x808b52e  j           func_22D4B8
    ctx->pc = 0x239AF4u;
    ctx->pc = 0x239AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239AF4u;
    // 0x239af8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4B8u;
    sub_0022D4B8_0x22d4b8(rdram, ctx, runtime); return;
    ctx->pc = 0x239AFCu;
}
