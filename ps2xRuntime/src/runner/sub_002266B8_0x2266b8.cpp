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

// Function: sub_002266B8
// Address: 0x2266b8 - 0x22673c
void sub_002266B8_0x2266b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002266B8_0x2266b8");
#endif

    switch (ctx->pc) {
        case 0x226708u: goto label_226708;
        case 0x226718u: goto label_226718;
        default: break;
    }

    ctx->pc = 0x2266b8u;

    // 0x2266b8: 0x617c2  srl         $v0, $a2, 31
    ctx->pc = 0x2266b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x2266bc: 0x51fc2  srl         $v1, $a1, 31
    ctx->pc = 0x2266bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x2266c0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2266c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2266c4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2266c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2266c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2266c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2266cc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2266ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2266d0: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2266d0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2266d4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2266d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2266d8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2266d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2266dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2266dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2266e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2266e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2266e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2266e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2266e8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2266e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2266ec: 0x39043  sra         $s2, $v1, 1
    ctx->pc = 0x2266ecu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2266f0: 0x28843  sra         $s1, $v0, 1
    ctx->pc = 0x2266f0u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2266f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2266f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2266f8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2266f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2266fc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2266fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x226700: 0xc0899d0  jal         func_226740
    ctx->pc = 0x226700u;
    SET_GPR_U32(ctx, 31, 0x226708u);
    ctx->pc = 0x226704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226700u;
    // 0x226704: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226740u, 0x226700u, 0x226708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226708u;
label_226708:
    // 0x226708: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x226708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x22670c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22670cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226710: 0xc0899d0  jal         func_226740
    ctx->pc = 0x226710u;
    SET_GPR_U32(ctx, 31, 0x226718u);
    ctx->pc = 0x226714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226710u;
    // 0x226714: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226740u, 0x226710u, 0x226718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226718u;
label_226718:
    // 0x226718: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x226718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x22671c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22671cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226720: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x226720u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x226724: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x226724u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226728: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x226728u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22672c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22672cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226730: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x226730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x226734: 0x80899d0  j           func_226740
    ctx->pc = 0x226734u;
    ctx->pc = 0x226738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226734u;
    // 0x226738: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226740u;
    sub_00226740_0x226740(rdram, ctx, runtime); return;
    ctx->pc = 0x22673Cu;
}
