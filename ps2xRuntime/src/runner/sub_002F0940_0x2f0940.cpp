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

// Function: sub_002F0940
// Address: 0x2f0940 - 0x2f0aa4
void sub_002F0940_0x2f0940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0940_0x2f0940");
#endif

    switch (ctx->pc) {
        case 0x2f09b4u: goto label_2f09b4;
        case 0x2f09ecu: goto label_2f09ec;
        case 0x2f0a24u: goto label_2f0a24;
        case 0x2f0a5cu: goto label_2f0a5c;
        case 0x2f0a94u: goto label_2f0a94;
        default: break;
    }

    ctx->pc = 0x2f0940u;

    // 0x2f0940: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f0940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f0944: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2f0944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f0948: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f0948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f094c: 0x10830046  beq         $a0, $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x2F094Cu;
    {
        const bool branch_taken_0x2f094c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F0950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F094Cu;
        // 0x2f0950: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f094c) {
            ctx->pc = 0x2F0A68u;
            goto label_2f0a68;
        }
    }
    ctx->pc = 0x2F0954u;
    // 0x2f0954: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2f0954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f0958: 0x10830035  beq         $a0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x2F0958u;
    {
        const bool branch_taken_0x2f0958 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F095Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0958u;
        // 0x2f095c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0958) {
            ctx->pc = 0x2F0A30u;
            goto label_2f0a30;
        }
    }
    ctx->pc = 0x2F0960u;
    // 0x2f0960: 0x10830025  beq         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x2F0960u;
    {
        const bool branch_taken_0x2f0960 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f0960) {
            ctx->pc = 0x2F09F8u;
            goto label_2f09f8;
        }
    }
    ctx->pc = 0x2F0968u;
    // 0x2f0968: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f0968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f096c: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2F096Cu;
    {
        const bool branch_taken_0x2f096c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f096c) {
            ctx->pc = 0x2F09C0u;
            goto label_2f09c0;
        }
    }
    ctx->pc = 0x2F0974u;
    // 0x2f0974: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F0974u;
    {
        const bool branch_taken_0x2f0974 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0974) {
            ctx->pc = 0x2F0988u;
            goto label_2f0988;
        }
    }
    ctx->pc = 0x2F097Cu;
    // 0x2f097c: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x2F097Cu;
    {
        const bool branch_taken_0x2f097c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f097c) {
            ctx->pc = 0x2F0A98u;
            goto label_2f0a98;
        }
    }
    ctx->pc = 0x2F0984u;
    // 0x2f0984: 0x0  nop
    ctx->pc = 0x2f0984u;
    // NOP
label_2f0988:
    // 0x2f0988: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2f0988u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2f098c: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x2f098cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x2f0990: 0x3c021b00  lui         $v0, 0x1B00
    ctx->pc = 0x2f0990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6912 << 16));
    // 0x2f0994: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2f0994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2f0998: 0x34450500  ori         $a1, $v0, 0x500
    ctx->pc = 0x2f0998u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1280);
    // 0x2f099c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f099cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f09a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f09a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f09a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2f09a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f09a8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2f09a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f09ac: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x2F09ACu;
    SET_GPR_U32(ctx, 31, 0x2F09B4u);
    ctx->pc = 0x2F09B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F09ACu;
    // 0x2f09b0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2F09ACu, 0x2F09B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F09B4u;
label_2f09b4:
    // 0x2f09b4: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2F09B4u;
    {
        const bool branch_taken_0x2f09b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f09b4) {
            ctx->pc = 0x2F0A98u;
            goto label_2f0a98;
        }
    }
    ctx->pc = 0x2F09BCu;
    // 0x2f09bc: 0x0  nop
    ctx->pc = 0x2f09bcu;
    // NOP
label_2f09c0:
    // 0x2f09c0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2f09c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2f09c4: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x2f09c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x2f09c8: 0x3c021900  lui         $v0, 0x1900
    ctx->pc = 0x2f09c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6400 << 16));
    // 0x2f09cc: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2f09ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2f09d0: 0x34450500  ori         $a1, $v0, 0x500
    ctx->pc = 0x2f09d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1280);
    // 0x2f09d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f09d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f09d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f09d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f09dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2f09dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f09e0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2f09e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f09e4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x2F09E4u;
    SET_GPR_U32(ctx, 31, 0x2F09ECu);
    ctx->pc = 0x2F09E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F09E4u;
    // 0x2f09e8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2F09E4u, 0x2F09ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F09ECu;
label_2f09ec:
    // 0x2f09ec: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2F09ECu;
    {
        const bool branch_taken_0x2f09ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f09ec) {
            ctx->pc = 0x2F0A98u;
            goto label_2f0a98;
        }
    }
    ctx->pc = 0x2F09F4u;
    // 0x2f09f4: 0x0  nop
    ctx->pc = 0x2f09f4u;
    // NOP
label_2f09f8:
    // 0x2f09f8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2f09f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2f09fc: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x2f09fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x2f0a00: 0x3c021f00  lui         $v0, 0x1F00
    ctx->pc = 0x2f0a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7936 << 16));
    // 0x2f0a04: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2f0a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2f0a08: 0x34458e02  ori         $a1, $v0, 0x8E02
    ctx->pc = 0x2f0a08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36354);
    // 0x2f0a0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f0a0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0a10: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f0a10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0a14: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2f0a14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0a18: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2f0a18u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0a1c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x2F0A1Cu;
    SET_GPR_U32(ctx, 31, 0x2F0A24u);
    ctx->pc = 0x2F0A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0A1Cu;
    // 0x2f0a20: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2F0A1Cu, 0x2F0A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0A24u;
label_2f0a24:
    // 0x2f0a24: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2F0A24u;
    {
        const bool branch_taken_0x2f0a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0a24) {
            ctx->pc = 0x2F0A98u;
            goto label_2f0a98;
        }
    }
    ctx->pc = 0x2F0A2Cu;
    // 0x2f0a2c: 0x0  nop
    ctx->pc = 0x2f0a2cu;
    // NOP
label_2f0a30:
    // 0x2f0a30: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2f0a30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2f0a34: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x2f0a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x2f0a38: 0x3c022800  lui         $v0, 0x2800
    ctx->pc = 0x2f0a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10240 << 16));
    // 0x2f0a3c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2f0a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2f0a40: 0x34455502  ori         $a1, $v0, 0x5502
    ctx->pc = 0x2f0a40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21762);
    // 0x2f0a44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f0a44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0a48: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f0a48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0a4c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2f0a4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0a50: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2f0a50u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0a54: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x2F0A54u;
    SET_GPR_U32(ctx, 31, 0x2F0A5Cu);
    ctx->pc = 0x2F0A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0A54u;
    // 0x2f0a58: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2F0A54u, 0x2F0A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0A5Cu;
label_2f0a5c:
    // 0x2f0a5c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2F0A5Cu;
    {
        const bool branch_taken_0x2f0a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0a5c) {
            ctx->pc = 0x2F0A98u;
            goto label_2f0a98;
        }
    }
    ctx->pc = 0x2F0A64u;
    // 0x2f0a64: 0x0  nop
    ctx->pc = 0x2f0a64u;
    // NOP
label_2f0a68:
    // 0x2f0a68: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2f0a68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2f0a6c: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x2f0a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x2f0a70: 0x3c022a00  lui         $v0, 0x2A00
    ctx->pc = 0x2f0a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10752 << 16));
    // 0x2f0a74: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2f0a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2f0a78: 0x34455902  ori         $a1, $v0, 0x5902
    ctx->pc = 0x2f0a78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22786);
    // 0x2f0a7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f0a7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0a80: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f0a80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0a84: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2f0a84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0a88: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2f0a88u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0a8c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x2F0A8Cu;
    SET_GPR_U32(ctx, 31, 0x2F0A94u);
    ctx->pc = 0x2F0A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0A8Cu;
    // 0x2f0a90: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2F0A8Cu, 0x2F0A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0A94u;
label_2f0a94:
    // 0x2f0a94: 0x0  nop
    ctx->pc = 0x2f0a94u;
    // NOP
label_2f0a98:
    // 0x2f0a98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f0a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f0a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0A9Cu;
        // 0x2f0aa0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0AA4u;
}
