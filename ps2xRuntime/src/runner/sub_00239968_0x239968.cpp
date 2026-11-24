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

// Function: sub_00239968
// Address: 0x239968 - 0x239a34
void sub_00239968_0x239968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239968_0x239968");
#endif

    switch (ctx->pc) {
        case 0x2399b0u: goto label_2399b0;
        case 0x2399c0u: goto label_2399c0;
        case 0x2399d0u: goto label_2399d0;
        case 0x2399dcu: goto label_2399dc;
        case 0x2399e4u: goto label_2399e4;
        case 0x2399ecu: goto label_2399ec;
        case 0x239a04u: goto label_239a04;
        case 0x239a0cu: goto label_239a0c;
        default: break;
    }

    ctx->pc = 0x239968u;

    // 0x239968: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x239968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23996c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23996cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x239970: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x239970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239974: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x239974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x239978: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x239978u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23997c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23997cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x239980: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x239980u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239984: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x239984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x239988: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x239988u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23998c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x23998cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x239990: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x239990u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239994: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x239994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x239998: 0x8605003e  lh          $a1, 0x3E($s0)
    ctx->pc = 0x239998u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 62)));
    // 0x23999c: 0x8606003c  lh          $a2, 0x3C($s0)
    ctx->pc = 0x23999cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2399a0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2399a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2399a4: 0x52ac0  sll         $a1, $a1, 11
    ctx->pc = 0x2399a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 11));
    // 0x2399a8: 0xc08e0c6  jal         func_238318
    ctx->pc = 0x2399A8u;
    SET_GPR_U32(ctx, 31, 0x2399B0u);
    ctx->pc = 0x2399ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2399A8u;
    // 0x2399ac: 0x632c0  sll         $a2, $a2, 11 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238318u, 0x2399A8u, 0x2399B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2399B0u;
label_2399b0:
    // 0x2399b0: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x2399b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x2399b4: 0x8c658f80  lw          $a1, -0x7080($v1)
    ctx->pc = 0x2399b4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4C8F80u));
    // 0x2399b8: 0xc08de70  jal         func_2379C0
    ctx->pc = 0x2399B8u;
    SET_GPR_U32(ctx, 31, 0x2399C0u);
    ctx->pc = 0x2399BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2399B8u;
    // 0x2399bc: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2379C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2379C0u, 0x2399B8u, 0x2399C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2399C0u;
label_2399c0:
    // 0x2399c0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2399c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2399c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2399c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2399c8: 0xc08de58  jal         func_237960
    ctx->pc = 0x2399C8u;
    SET_GPR_U32(ctx, 31, 0x2399D0u);
    ctx->pc = 0x2399CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2399C8u;
    // 0x2399cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237960u, 0x2399C8u, 0x2399D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2399D0u;
label_2399d0:
    // 0x2399d0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2399d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2399d4: 0xc08dd94  jal         func_237650
    ctx->pc = 0x2399D4u;
    SET_GPR_U32(ctx, 31, 0x2399DCu);
    ctx->pc = 0x2399D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2399D4u;
    // 0x2399d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237650u, 0x2399D4u, 0x2399DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2399DCu;
label_2399dc:
    // 0x2399dc: 0xc08de12  jal         func_237848
    ctx->pc = 0x2399DCu;
    SET_GPR_U32(ctx, 31, 0x2399E4u);
    ctx->pc = 0x2399E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2399DCu;
    // 0x2399e0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237848u, 0x2399DCu, 0x2399E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2399E4u;
label_2399e4:
    // 0x2399e4: 0xc08dd46  jal         func_237518
    ctx->pc = 0x2399E4u;
    SET_GPR_U32(ctx, 31, 0x2399ECu);
    ctx->pc = 0x2399E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2399E4u;
    // 0x2399e8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237518u, 0x2399E4u, 0x2399ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2399ECu;
label_2399ec:
    // 0x2399ec: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2399ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2399f0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2399f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2399f4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2399f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2399f8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2399f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2399fc: 0xc08dce2  jal         func_237388
    ctx->pc = 0x2399FCu;
    SET_GPR_U32(ctx, 31, 0x239A04u);
    ctx->pc = 0x239A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2399FCu;
    // 0x239a00: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237388u, 0x2399FCu, 0x239A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239A04u;
label_239a04:
    // 0x239a04: 0xc08ddd0  jal         func_237740
    ctx->pc = 0x239A04u;
    SET_GPR_U32(ctx, 31, 0x239A0Cu);
    ctx->pc = 0x239A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239A04u;
    // 0x239a08: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237740u, 0x239A04u, 0x239A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239A0Cu;
label_239a0c:
    // 0x239a0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239a10: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x239a10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x239a14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x239a14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239a18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x239a18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x239a1c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x239a1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239a20: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x239a20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x239a24: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x239a24u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x239a28: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x239a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239a2c: 0x808e618  j           func_239860
    ctx->pc = 0x239A2Cu;
    ctx->pc = 0x239A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239A2Cu;
    // 0x239a30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239860u;
    sub_00239860_0x239860(rdram, ctx, runtime); return;
    ctx->pc = 0x239A34u;
}
