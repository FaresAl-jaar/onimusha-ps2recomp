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

// Function: sub_002AF910
// Address: 0x2af910 - 0x2aff48
void sub_002AF910_0x2af910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AF910_0x2af910");
#endif

    switch (ctx->pc) {
        case 0x2af958u: goto label_2af958;
        case 0x2af9f0u: goto label_2af9f0;
        case 0x2afa3cu: goto label_2afa3c;
        case 0x2afa48u: goto label_2afa48;
        case 0x2afa64u: goto label_2afa64;
        case 0x2afa84u: goto label_2afa84;
        case 0x2afaf8u: goto label_2afaf8;
        case 0x2afb00u: goto label_2afb00;
        case 0x2afc98u: goto label_2afc98;
        default: break;
    }

    ctx->pc = 0x2af910u;

    // 0x2af910: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2af910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2af914: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2af914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2af918: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2af918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2af91c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2af91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2af920: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2af920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2af924: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2af924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2af928: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2af928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2af92c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2af92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2af930: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2af930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2af934: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2af934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2af938: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2af938u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af93c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2af93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2af940: 0x262200c8  addiu       $v0, $s1, 0xC8
    ctx->pc = 0x2af940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 200));
    // 0x2af944: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2af944u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2af948: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x2af948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x2af94c: 0x24845a10  addiu       $a0, $a0, 0x5A10
    ctx->pc = 0x2af94cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23056));
    // 0x2af950: 0xc0ac11c  jal         func_2B0470
    ctx->pc = 0x2AF950u;
    SET_GPR_U32(ctx, 31, 0x2AF958u);
    ctx->pc = 0x2AF954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF950u;
    // 0x2af954: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0470u, 0x2AF950u, 0x2AF958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF958u;
label_2af958:
    // 0x2af958: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AF958u;
    {
        const bool branch_taken_0x2af958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF958u;
        // 0x2af95c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af958) {
            ctx->pc = 0x2AF970u;
            goto label_2af970;
        }
    }
    ctx->pc = 0x2AF960u;
    // 0x2af960: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2af960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af964: 0x1000016c  b           . + 4 + (0x16C << 2)
    ctx->pc = 0x2AF964u;
    {
        const bool branch_taken_0x2af964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF964u;
        // 0x2af968: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af964) {
            ctx->pc = 0x2AFF18u;
            goto label_2aff18;
        }
    }
    ctx->pc = 0x2AF96Cu;
    // 0x2af96c: 0x0  nop
    ctx->pc = 0x2af96cu;
    // NOP
label_2af970:
    // 0x2af970: 0x9223000d  lbu         $v1, 0xD($s1)
    ctx->pc = 0x2af970u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
    // 0x2af974: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2af974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2af978: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AF978u;
    {
        const bool branch_taken_0x2af978 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AF97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF978u;
        // 0x2af97c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af978) {
            ctx->pc = 0x2AF990u;
            goto label_2af990;
        }
    }
    ctx->pc = 0x2AF980u;
    // 0x2af980: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2af980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af984: 0x10000164  b           . + 4 + (0x164 << 2)
    ctx->pc = 0x2AF984u;
    {
        const bool branch_taken_0x2af984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF984u;
        // 0x2af988: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af984) {
            ctx->pc = 0x2AFF18u;
            goto label_2aff18;
        }
    }
    ctx->pc = 0x2AF98Cu;
    // 0x2af98c: 0x0  nop
    ctx->pc = 0x2af98cu;
    // NOP
label_2af990:
    // 0x2af990: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2af990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2af994: 0x80430048  lb          $v1, 0x48($v0)
    ctx->pc = 0x2af994u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2af998: 0x80420049  lb          $v0, 0x49($v0)
    ctx->pc = 0x2af998u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 73)));
    // 0x2af99c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AF99Cu;
    {
        const bool branch_taken_0x2af99c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AF9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF99Cu;
        // 0x2af9a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af99c) {
            ctx->pc = 0x2AF9B0u;
            goto label_2af9b0;
        }
    }
    ctx->pc = 0x2AF9A4u;
    // 0x2af9a4: 0x1000015c  b           . + 4 + (0x15C << 2)
    ctx->pc = 0x2AF9A4u;
    {
        const bool branch_taken_0x2af9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af9a4) {
            ctx->pc = 0x2AFF18u;
            goto label_2aff18;
        }
    }
    ctx->pc = 0x2AF9ACu;
    // 0x2af9ac: 0x0  nop
    ctx->pc = 0x2af9acu;
    // NOP
label_2af9b0:
    // 0x2af9b0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2af9b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2af9b4: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x2af9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x2af9b8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2af9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2af9bc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AF9BCu;
    {
        const bool branch_taken_0x2af9bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF9BCu;
        // 0x2af9c0: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af9bc) {
            ctx->pc = 0x2AF9D8u;
            goto label_2af9d8;
        }
    }
    ctx->pc = 0x2AF9C4u;
    // 0x2af9c4: 0x9022ceaa  lbu         $v0, -0x3156($at)
    ctx->pc = 0x2af9c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294954666)));
    // 0x2af9c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AF9C8u;
    {
        const bool branch_taken_0x2af9c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF9C8u;
        // 0x2af9cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af9c8) {
            ctx->pc = 0x2AF9D8u;
            goto label_2af9d8;
        }
    }
    ctx->pc = 0x2AF9D0u;
    // 0x2af9d0: 0x10000151  b           . + 4 + (0x151 << 2)
    ctx->pc = 0x2AF9D0u;
    {
        const bool branch_taken_0x2af9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af9d0) {
            ctx->pc = 0x2AFF18u;
            goto label_2aff18;
        }
    }
    ctx->pc = 0x2AF9D8u;
label_2af9d8:
    // 0x2af9d8: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2af9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2af9dc: 0x24845a10  addiu       $a0, $a0, 0x5A10
    ctx->pc = 0x2af9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23056));
    // 0x2af9e0: 0x27a500ec  addiu       $a1, $sp, 0xEC
    ctx->pc = 0x2af9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x2af9e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2af9e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af9e8: 0xc0ac0f0  jal         func_2B03C0
    ctx->pc = 0x2AF9E8u;
    SET_GPR_U32(ctx, 31, 0x2AF9F0u);
    ctx->pc = 0x2AF9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF9E8u;
    // 0x2af9ec: 0x26070004  addiu       $a3, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B03C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B03C0u, 0x2AF9E8u, 0x2AF9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF9F0u;
label_2af9f0:
    // 0x2af9f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2af9f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af9f4: 0x6210004  bgez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AF9F4u;
    {
        const bool branch_taken_0x2af9f4 = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x2af9f4) {
            ctx->pc = 0x2AFA08u;
            goto label_2afa08;
        }
    }
    ctx->pc = 0x2AF9FCu;
    // 0x2af9fc: 0x10000146  b           . + 4 + (0x146 << 2)
    ctx->pc = 0x2AF9FCu;
    {
        const bool branch_taken_0x2af9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF9FCu;
        // 0x2afa00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af9fc) {
            ctx->pc = 0x2AFF18u;
            goto label_2aff18;
        }
    }
    ctx->pc = 0x2AFA04u;
    // 0x2afa04: 0x0  nop
    ctx->pc = 0x2afa04u;
    // NOP
label_2afa08:
    // 0x2afa08: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2afa08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2afa0c: 0xa3808980  sb          $zero, -0x7680($gp)
    ctx->pc = 0x2afa0cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936960), (uint8_t)GPR_U32(ctx, 0));
    // 0x2afa10: 0xaf9189a8  sw          $s1, -0x7658($gp)
    ctx->pc = 0x2afa10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937000), GPR_U32(ctx, 17));
    // 0x2afa14: 0x8fa600ec  lw          $a2, 0xEC($sp)
    ctx->pc = 0x2afa14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2afa18: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x2afa18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2afa1c: 0x80420049  lb          $v0, 0x49($v0)
    ctx->pc = 0x2afa1cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 73)));
    // 0x2afa20: 0x8e080004  lw          $t0, 0x4($s0)
    ctx->pc = 0x2afa20u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2afa24: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2afa24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2afa28: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2afa28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2afa2c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2afa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2afa30: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2afa30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2afa34: 0xc0abb88  jal         func_2AEE20
    ctx->pc = 0x2AFA34u;
    SET_GPR_U32(ctx, 31, 0x2AFA3Cu);
    ctx->pc = 0x2AFA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFA34u;
    // 0x2afa38: 0x8f858988  lw          $a1, -0x7678($gp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936968)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEE20u, 0x2AFA34u, 0x2AFA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFA3Cu;
label_2afa3c:
    // 0x2afa3c: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2afa3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2afa40: 0xc0ac110  jal         func_2B0440
    ctx->pc = 0x2AFA40u;
    SET_GPR_U32(ctx, 31, 0x2AFA48u);
    ctx->pc = 0x2AFA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFA40u;
    // 0x2afa44: 0x24845a10  addiu       $a0, $a0, 0x5A10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0440u, 0x2AFA40u, 0x2AFA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFA48u;
label_2afa48:
    // 0x2afa48: 0x16200125  bnez        $s1, . + 4 + (0x125 << 2)
    ctx->pc = 0x2AFA48u;
    {
        const bool branch_taken_0x2afa48 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2afa48) {
            ctx->pc = 0x2AFEE0u;
            goto label_2afee0;
        }
    }
    ctx->pc = 0x2AFA50u;
    // 0x2afa50: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2afa50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2afa54: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2afa54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2afa58: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x2afa58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2afa5c: 0xc0ab8e4  jal         func_2AE390
    ctx->pc = 0x2AFA5Cu;
    SET_GPR_U32(ctx, 31, 0x2AFA64u);
    ctx->pc = 0x2AFA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFA5Cu;
    // 0x2afa60: 0x24847300  addiu       $a0, $a0, 0x7300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE390u, 0x2AFA5Cu, 0x2AFA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFA64u;
label_2afa64:
    // 0x2afa64: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2afa64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2afa68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2afa68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afa6c: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x2afa6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x2afa70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2afa70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afa74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2afa74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afa78: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2afa78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afa7c: 0xc063c70  jal         func_18F1C0
    ctx->pc = 0x2AFA7Cu;
    SET_GPR_U32(ctx, 31, 0x2AFA84u);
    ctx->pc = 0x2AFA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFA7Cu;
    // 0x2afa80: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F1C0u, 0x2AFA7Cu, 0x2AFA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFA84u;
label_2afa84:
    // 0x2afa84: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2afa84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2afa88: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x2afa88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x2afa8c: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x2afa8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x2afa90: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x2afa90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x2afa94: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x2afa94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x2afa98: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2afa98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2afa9c: 0x2703c  dsll32      $t6, $v0, 0
    ctx->pc = 0x2afa9cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2afaa0: 0x3c0b5000  lui         $t3, 0x5000
    ctx->pc = 0x2afaa0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)20480 << 16));
    // 0x2afaa4: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x2afaa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2afaa8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2afaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2afaac: 0x43c825  or          $t9, $v0, $v1
    ctx->pc = 0x2afaacu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2afab0: 0x3c13004e  lui         $s3, 0x4E
    ctx->pc = 0x2afab0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)78 << 16));
    // 0x2afab4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2afab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2afab8: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x2afab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2afabc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2afabcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2afac0: 0x3c0d3000  lui         $t5, 0x3000
    ctx->pc = 0x2afac0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)12288 << 16));
    // 0x2afac4: 0x26734b50  addiu       $s3, $s3, 0x4B50
    ctx->pc = 0x2afac4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 19280));
    // 0x2afac8: 0x348f0004  ori         $t7, $a0, 0x4
    ctx->pc = 0x2afac8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x2afacc: 0x35760004  ori         $s6, $t3, 0x4
    ctx->pc = 0x2afaccu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)4);
    // 0x2afad0: 0x2417000e  addiu       $s7, $zero, 0xE
    ctx->pc = 0x2afad0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2afad4: 0x34920003  ori         $s2, $a0, 0x3
    ctx->pc = 0x2afad4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    // 0x2afad8: 0x348a0001  ori         $t2, $a0, 0x1
    ctx->pc = 0x2afad8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x2afadc: 0x35710003  ori         $s1, $t3, 0x3
    ctx->pc = 0x2afadcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)3);
    // 0x2afae0: 0x241e0050  addiu       $fp, $zero, 0x50
    ctx->pc = 0x2afae0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2afae4: 0x43c025  or          $t8, $v0, $v1
    ctx->pc = 0x2afae4u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2afae8: 0x35690001  ori         $t1, $t3, 0x1
    ctx->pc = 0x2afae8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)1);
    // 0x2afaec: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x2afaecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2afaf0: 0x3c076000  lui         $a3, 0x6000
    ctx->pc = 0x2afaf0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)24576 << 16));
    // 0x2afaf4: 0x0  nop
    ctx->pc = 0x2afaf4u;
    // NOP
label_2afaf8:
    // 0x2afaf8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2afaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2afafc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2afafcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2afb00:
    // 0x2afb00: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x2afb00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2afb04: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x2afb04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x2afb08: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2afb08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2afb0c: 0xafa300ec  sw          $v1, 0xEC($sp)
    ctx->pc = 0x2afb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 3));
    // 0x2afb10: 0x240401c0  addiu       $a0, $zero, 0x1C0
    ctx->pc = 0x2afb10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x2afb14: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x2afb14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2afb18: 0x8c66000c  lw          $a2, 0xC($v1)
    ctx->pc = 0x2afb18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2afb1c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2afb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2afb20: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x2afb20u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2afb24: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AFB24u;
    {
        const bool branch_taken_0x2afb24 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x2AFB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFB24u;
        // 0x2afb28: 0x46043  sra         $t4, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afb24) {
            ctx->pc = 0x2AFB34u;
            goto label_2afb34;
        }
    }
    ctx->pc = 0x2AFB2Cu;
    // 0x2afb2c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2afb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2afb30: 0x46043  sra         $t4, $a0, 1
    ctx->pc = 0x2afb30u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 4), 1));
label_2afb34:
    // 0x2afb34: 0x5810003  bgez        $t4, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AFB34u;
    {
        const bool branch_taken_0x2afb34 = (GPR_S64(ctx, 12) >= 0);
        ctx->pc = 0x2AFB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFB34u;
        // 0x2afb38: 0xc2043  sra         $a0, $t4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afb34) {
            ctx->pc = 0x2AFB44u;
            goto label_2afb44;
        }
    }
    ctx->pc = 0x2AFB3Cu;
    // 0x2afb3c: 0x25840001  addiu       $a0, $t4, 0x1
    ctx->pc = 0x2afb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x2afb40: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x2afb40u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
label_2afb44:
    // 0x2afb44: 0x28610121  slti        $at, $v1, 0x121
    ctx->pc = 0x2afb44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)289) ? 1 : 0);
    // 0x2afb48: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AFB48u;
    {
        const bool branch_taken_0x2afb48 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2afb48) {
            ctx->pc = 0x2AFB58u;
            goto label_2afb58;
        }
    }
    ctx->pc = 0x2AFB50u;
    // 0x2afb50: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x2afb50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x2afb54: 0x0  nop
    ctx->pc = 0x2afb54u;
    // NOP
label_2afb58:
    // 0x2afb58: 0x14a0000f  bnez        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x2AFB58u;
    {
        const bool branch_taken_0x2afb58 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2afb58) {
            ctx->pc = 0x2AFB98u;
            goto label_2afb98;
        }
    }
    ctx->pc = 0x2AFB60u;
    // 0x2afb60: 0x8f83820c  lw          $v1, -0x7DF4($gp)
    ctx->pc = 0x2afb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935052)));
    // 0x2afb64: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2afb64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2afb68: 0x942c50e0  lhu         $t4, 0x50E0($at)
    ctx->pc = 0x2afb68u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)FAST_READ16(0x8D50E0u));
    // 0x2afb6c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2afb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2afb70: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x2afb70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2afb74: 0x318c01ff  andi        $t4, $t4, 0x1FF
    ctx->pc = 0x2afb74u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)511);
    // 0x2afb78: 0x94630006  lhu         $v1, 0x6($v1)
    ctx->pc = 0x2afb78u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2afb7c: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x2afb7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x2afb80: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2AFB80u;
    {
        const bool branch_taken_0x2afb80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AFB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFB80u;
        // 0x2afb84: 0xc6140  sll         $t4, $t4, 5 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afb80) {
            ctx->pc = 0x2AFBE0u;
            goto label_2afbe0;
        }
    }
    ctx->pc = 0x2AFB88u;
    // 0x2afb88: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2afb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2afb8c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2afb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2afb90: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2AFB90u;
    {
        const bool branch_taken_0x2afb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFB90u;
        // 0x2afb94: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afb90) {
            ctx->pc = 0x2AFBE0u;
            goto label_2afbe0;
        }
    }
    ctx->pc = 0x2AFB98u;
label_2afb98:
    // 0x2afb98: 0x8f94820c  lw          $s4, -0x7DF4($gp)
    ctx->pc = 0x2afb98u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935052)));
    // 0x2afb9c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2afb9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2afba0: 0x942c5250  lhu         $t4, 0x5250($at)
    ctx->pc = 0x2afba0u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)FAST_READ16(0x8D5250u));
    // 0x2afba4: 0x14a0c0  sll         $s4, $s4, 3
    ctx->pc = 0x2afba4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x2afba8: 0x274a021  addu        $s4, $s3, $s4
    ctx->pc = 0x2afba8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x2afbac: 0x96940006  lhu         $s4, 0x6($s4)
    ctx->pc = 0x2afbacu;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x2afbb0: 0x318c01ff  andi        $t4, $t4, 0x1FF
    ctx->pc = 0x2afbb0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)511);
    // 0x2afbb4: 0x32940040  andi        $s4, $s4, 0x40
    ctx->pc = 0x2afbb4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)64);
    // 0x2afbb8: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AFBB8u;
    {
        const bool branch_taken_0x2afbb8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFBB8u;
        // 0x2afbbc: 0xc6140  sll         $t4, $t4, 5 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afbb8) {
            ctx->pc = 0x2AFBE0u;
            goto label_2afbe0;
        }
    }
    ctx->pc = 0x2AFBC0u;
    // 0x2afbc0: 0x8e140000  lw          $s4, 0x0($s0)
    ctx->pc = 0x2afbc0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2afbc4: 0x283a018  mult        $s4, $s4, $v1
    ctx->pc = 0x2afbc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
    // 0x2afbc8: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AFBC8u;
    {
        const bool branch_taken_0x2afbc8 = (GPR_S64(ctx, 20) >= 0);
        ctx->pc = 0x2AFBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFBC8u;
        // 0x2afbcc: 0x141843  sra         $v1, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afbc8) {
            ctx->pc = 0x2AFBD8u;
            goto label_2afbd8;
        }
    }
    ctx->pc = 0x2AFBD0u;
    // 0x2afbd0: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x2afbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2afbd4: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2afbd4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_2afbd8:
    // 0x2afbd8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2afbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2afbdc: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x2afbdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_2afbe0:
    // 0x2afbe0: 0x8fb400ec  lw          $s4, 0xEC($sp)
    ctx->pc = 0x2afbe0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2afbe4: 0xc183c  dsll32      $v1, $t4, 0
    ctx->pc = 0x2afbe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) << (32 + 0));
    // 0x2afbe8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2afbe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2afbec: 0x3603c  dsll32      $t4, $v1, 0
    ctx->pc = 0x2afbecu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2afbf0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2afbf0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afbf4: 0xfe920000  sd          $s2, 0x0($s4)
    ctx->pc = 0x2afbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 18));
    // 0x2afbf8: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x2afbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
    // 0x2afbfc: 0x8fb400ec  lw          $s4, 0xEC($sp)
    ctx->pc = 0x2afbfcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2afc00: 0xae91000c  sw          $s1, 0xC($s4)
    ctx->pc = 0x2afc00u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 17));
    // 0x2afc04: 0x8fb400ec  lw          $s4, 0xEC($sp)
    ctx->pc = 0x2afc04u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2afc08: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x2afc08u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x2afc0c: 0xafb400ec  sw          $s4, 0xEC($sp)
    ctx->pc = 0x2afc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 20));
    // 0x2afc10: 0x8fb400ec  lw          $s4, 0xEC($sp)
    ctx->pc = 0x2afc10u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2afc14: 0xfe990000  sd          $t9, 0x0($s4)
    ctx->pc = 0x2afc14u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 25));
    // 0x2afc18: 0xfe970008  sd          $s7, 0x8($s4)
    ctx->pc = 0x2afc18u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 23));
    // 0x2afc1c: 0x8fb500ec  lw          $s5, 0xEC($sp)
    ctx->pc = 0x2afc1cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2afc20: 0x8f948988  lw          $s4, -0x7678($gp)
    ctx->pc = 0x2afc20u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936968)));
    // 0x2afc24: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x2afc24u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x2afc28: 0xafb500ec  sw          $s5, 0xEC($sp)
    ctx->pc = 0x2afc28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 21));
    // 0x2afc2c: 0x14a182  srl         $s4, $s4, 6
    ctx->pc = 0x2afc2cu;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 20), 6));
    // 0x2afc30: 0x14a83c  dsll32      $s5, $s4, 0
    ctx->pc = 0x2afc30u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 20) << (32 + 0));
    // 0x2afc34: 0x8fb400ec  lw          $s4, 0xEC($sp)
    ctx->pc = 0x2afc34u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2afc38: 0x15a83e  dsrl32      $s5, $s5, 0
    ctx->pc = 0x2afc38u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) >> (32 + 0));
    // 0x2afc3c: 0x15ac3c  dsll32      $s5, $s5, 16
    ctx->pc = 0x2afc3cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 16));
    // 0x2afc40: 0x1956025  or          $t4, $t4, $s5
    ctx->pc = 0x2afc40u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 21));
    // 0x2afc44: 0xfe8c0000  sd          $t4, 0x0($s4)
    ctx->pc = 0x2afc44u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 12));
    // 0x2afc48: 0xfe9e0008  sd          $fp, 0x8($s4)
    ctx->pc = 0x2afc48u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 30));
    // 0x2afc4c: 0x8fac00ec  lw          $t4, 0xEC($sp)
    ctx->pc = 0x2afc4cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2afc50: 0x258c0010  addiu       $t4, $t4, 0x10
    ctx->pc = 0x2afc50u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x2afc54: 0xafac00ec  sw          $t4, 0xEC($sp)
    ctx->pc = 0x2afc54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 12));
    // 0x2afc58: 0x8fb400ec  lw          $s4, 0xEC($sp)
    ctx->pc = 0x2afc58u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2afc5c: 0x240c0052  addiu       $t4, $zero, 0x52
    ctx->pc = 0x2afc5cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x2afc60: 0xfe980000  sd          $t8, 0x0($s4)
    ctx->pc = 0x2afc60u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 24));
    // 0x2afc64: 0xfe8c0008  sd          $t4, 0x8($s4)
    ctx->pc = 0x2afc64u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 12));
    // 0x2afc68: 0x8fac00ec  lw          $t4, 0xEC($sp)
    ctx->pc = 0x2afc68u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2afc6c: 0x258c0010  addiu       $t4, $t4, 0x10
    ctx->pc = 0x2afc6cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x2afc70: 0xafac00ec  sw          $t4, 0xEC($sp)
    ctx->pc = 0x2afc70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 12));
    // 0x2afc74: 0x8e140004  lw          $s4, 0x4($s0)
    ctx->pc = 0x2afc74u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2afc78: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AFC78u;
    {
        const bool branch_taken_0x2afc78 = (GPR_S64(ctx, 20) >= 0);
        ctx->pc = 0x2AFC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFC78u;
        // 0x2afc7c: 0x146043  sra         $t4, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afc78) {
            ctx->pc = 0x2AFC88u;
            goto label_2afc88;
        }
    }
    ctx->pc = 0x2AFC80u;
    // 0x2afc80: 0x268c0001  addiu       $t4, $s4, 0x1
    ctx->pc = 0x2afc80u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2afc84: 0xc6043  sra         $t4, $t4, 1
    ctx->pc = 0x2afc84u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 12), 1));
label_2afc88:
    // 0x2afc88: 0xc082a  slt         $at, $zero, $t4
    ctx->pc = 0x2afc88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x2afc8c: 0x10200066  beqz        $at, . + 4 + (0x66 << 2)
    ctx->pc = 0x2AFC8Cu;
    {
        const bool branch_taken_0x2afc8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2afc8c) {
            ctx->pc = 0x2AFE28u;
            goto label_2afe28;
        }
    }
    ctx->pc = 0x2AFC94u;
    // 0x2afc94: 0x0  nop
    ctx->pc = 0x2afc94u;
    // NOP
label_2afc98:
    // 0x2afc98: 0x8fb400ec  lw          $s4, 0xEC($sp)
    ctx->pc = 0x2afc98u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2afc9c: 0x646021  addu        $t4, $v1, $a0
    ctx->pc = 0x2afc9cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2afca0: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x2afca0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
    // 0x2afca4: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x2afca4u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x2afca8: 0xc643c  dsll32      $t4, $t4, 16
    ctx->pc = 0x2afca8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 16));
    // 0x2afcac: 0xfe8f0000  sd          $t7, 0x0($s4)
    ctx->pc = 0x2afcacu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 15));
    // 0x2afcb0: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x2afcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
    // 0x2afcb4: 0x8fb400ec  lw          $s4, 0xEC($sp)
    ctx->pc = 0x2afcb4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2afcb8: 0xae96000c  sw          $s6, 0xC($s4)
    ctx->pc = 0x2afcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 22));
    // 0x2afcbc: 0x8fb400ec  lw          $s4, 0xEC($sp)
    ctx->pc = 0x2afcbcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2afcc0: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x2afcc0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x2afcc4: 0xafb400ec  sw          $s4, 0xEC($sp)
    ctx->pc = 0x2afcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 20));
    // 0x2afcc8: 0x8fb400ec  lw          $s4, 0xEC($sp)
    ctx->pc = 0x2afcc8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2afccc: 0xfe990000  sd          $t9, 0x0($s4)
    ctx->pc = 0x2afcccu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 25));
    // 0x2afcd0: 0xfe970008  sd          $s7, 0x8($s4)
    ctx->pc = 0x2afcd0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 23));
    // 0x2afcd4: 0x8fb400ec  lw          $s4, 0xEC($sp)
    ctx->pc = 0x2afcd4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2afcd8: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x2afcd8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x2afcdc: 0xafb400ec  sw          $s4, 0xEC($sp)
    ctx->pc = 0x2afcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 20));
    // 0x2afce0: 0x8fb400ec  lw          $s4, 0xEC($sp)
    ctx->pc = 0x2afce0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2afce4: 0xfe8c0000  sd          $t4, 0x0($s4)
    ctx->pc = 0x2afce4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 12));
    // 0x2afce8: 0x240c0051  addiu       $t4, $zero, 0x51
    ctx->pc = 0x2afce8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x2afcec: 0xfe8c0008  sd          $t4, 0x8($s4)
    ctx->pc = 0x2afcecu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 12));
    // 0x2afcf0: 0x8fac00ec  lw          $t4, 0xEC($sp)
    ctx->pc = 0x2afcf0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2afcf4: 0x258c0010  addiu       $t4, $t4, 0x10
    ctx->pc = 0x2afcf4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x2afcf8: 0xafac00ec  sw          $t4, 0xEC($sp)
    ctx->pc = 0x2afcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 12));
    // 0x2afcfc: 0x8fb400ec  lw          $s4, 0xEC($sp)
    ctx->pc = 0x2afcfcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2afd00: 0x240c0053  addiu       $t4, $zero, 0x53
    ctx->pc = 0x2afd00u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x2afd04: 0xfe800000  sd          $zero, 0x0($s4)
    ctx->pc = 0x2afd04u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 0));
    // 0x2afd08: 0xfe8c0008  sd          $t4, 0x8($s4)
    ctx->pc = 0x2afd08u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 12));
    // 0x2afd0c: 0x8fac00ec  lw          $t4, 0xEC($sp)
    ctx->pc = 0x2afd0cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2afd10: 0x258c0010  addiu       $t4, $t4, 0x10
    ctx->pc = 0x2afd10u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x2afd14: 0xafac00ec  sw          $t4, 0xEC($sp)
    ctx->pc = 0x2afd14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 12));
    // 0x2afd18: 0x8e0c0000  lw          $t4, 0x0($s0)
    ctx->pc = 0x2afd18u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2afd1c: 0x8fb500ec  lw          $s5, 0xEC($sp)
    ctx->pc = 0x2afd1cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2afd20: 0xca080  sll         $s4, $t4, 2
    ctx->pc = 0x2afd20u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x2afd24: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AFD24u;
    {
        const bool branch_taken_0x2afd24 = (GPR_S64(ctx, 20) >= 0);
        ctx->pc = 0x2AFD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFD24u;
        // 0x2afd28: 0x146103  sra         $t4, $s4, 4 (Delay Slot)
        SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afd24) {
            ctx->pc = 0x2AFD34u;
            goto label_2afd34;
        }
    }
    ctx->pc = 0x2AFD2Cu;
    // 0x2afd2c: 0x268c000f  addiu       $t4, $s4, 0xF
    ctx->pc = 0x2afd2cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 20), 15));
    // 0x2afd30: 0xc6103  sra         $t4, $t4, 4
    ctx->pc = 0x2afd30u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 12), 4));
label_2afd34:
    // 0x2afd34: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x2afd34u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
    // 0x2afd38: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x2afd38u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x2afd3c: 0x18e6025  or          $t4, $t4, $t6
    ctx->pc = 0x2afd3cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 14));
    // 0x2afd40: 0xfeac0000  sd          $t4, 0x0($s5)
    ctx->pc = 0x2afd40u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 12));
    // 0x2afd44: 0xfea00008  sd          $zero, 0x8($s5)
    ctx->pc = 0x2afd44u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 8), GPR_U64(ctx, 0));
    // 0x2afd48: 0x8fac00ec  lw          $t4, 0xEC($sp)
    ctx->pc = 0x2afd48u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2afd4c: 0x258c0010  addiu       $t4, $t4, 0x10
    ctx->pc = 0x2afd4cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x2afd50: 0xafac00ec  sw          $t4, 0xEC($sp)
    ctx->pc = 0x2afd50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 12));
    // 0x2afd54: 0x8e0c0000  lw          $t4, 0x0($s0)
    ctx->pc = 0x2afd54u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2afd58: 0x8fb400ec  lw          $s4, 0xEC($sp)
    ctx->pc = 0x2afd58u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2afd5c: 0xca880  sll         $s5, $t4, 2
    ctx->pc = 0x2afd5cu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x2afd60: 0x6a10003  bgez        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AFD60u;
    {
        const bool branch_taken_0x2afd60 = (GPR_S64(ctx, 21) >= 0);
        ctx->pc = 0x2AFD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFD60u;
        // 0x2afd64: 0x156103  sra         $t4, $s5, 4 (Delay Slot)
        SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afd60) {
            ctx->pc = 0x2AFD70u;
            goto label_2afd70;
        }
    }
    ctx->pc = 0x2AFD68u;
    // 0x2afd68: 0x26ac000f  addiu       $t4, $s5, 0xF
    ctx->pc = 0x2afd68u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 21), 15));
    // 0x2afd6c: 0xc6103  sra         $t4, $t4, 4
    ctx->pc = 0x2afd6cu;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 12), 4));
label_2afd70:
    // 0x2afd70: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x2afd70u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
    // 0x2afd74: 0x6a93c  dsll32      $s5, $a2, 4
    ctx->pc = 0x2afd74u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 6) << (32 + 4));
    // 0x2afd78: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x2afd78u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x2afd7c: 0x15a93e  dsrl32      $s5, $s5, 4
    ctx->pc = 0x2afd7cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) >> (32 + 4));
    // 0x2afd80: 0x18d6025  or          $t4, $t4, $t5
    ctx->pc = 0x2afd80u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 13));
    // 0x2afd84: 0x15a83c  dsll32      $s5, $s5, 0
    ctx->pc = 0x2afd84u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 0));
    // 0x2afd88: 0x2ac6025  or          $t4, $s5, $t4
    ctx->pc = 0x2afd88u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 21) | GPR_U64(ctx, 12));
    // 0x2afd8c: 0xfe8c0000  sd          $t4, 0x0($s4)
    ctx->pc = 0x2afd8cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 12));
    // 0x2afd90: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x2afd90u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
    // 0x2afd94: 0x8e0c0000  lw          $t4, 0x0($s0)
    ctx->pc = 0x2afd94u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2afd98: 0xca080  sll         $s4, $t4, 2
    ctx->pc = 0x2afd98u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x2afd9c: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AFD9Cu;
    {
        const bool branch_taken_0x2afd9c = (GPR_S64(ctx, 20) >= 0);
        ctx->pc = 0x2AFDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFD9Cu;
        // 0x2afda0: 0x146103  sra         $t4, $s4, 4 (Delay Slot)
        SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afd9c) {
            ctx->pc = 0x2AFDACu;
            goto label_2afdac;
        }
    }
    ctx->pc = 0x2AFDA4u;
    // 0x2afda4: 0x268c000f  addiu       $t4, $s4, 0xF
    ctx->pc = 0x2afda4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 20), 15));
    // 0x2afda8: 0xc6103  sra         $t4, $t4, 4
    ctx->pc = 0x2afda8u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 12), 4));
label_2afdac:
    // 0x2afdac: 0x18ba025  or          $s4, $t4, $t3
    ctx->pc = 0x2afdacu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 12) | GPR_U64(ctx, 11));
    // 0x2afdb0: 0x8fac00ec  lw          $t4, 0xEC($sp)
    ctx->pc = 0x2afdb0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2afdb4: 0xad94000c  sw          $s4, 0xC($t4)
    ctx->pc = 0x2afdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 20));
    // 0x2afdb8: 0x8fb400ec  lw          $s4, 0xEC($sp)
    ctx->pc = 0x2afdb8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2afdbc: 0x8f8c820c  lw          $t4, -0x7DF4($gp)
    ctx->pc = 0x2afdbcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935052)));
    // 0x2afdc0: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x2afdc0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x2afdc4: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x2afdc4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x2afdc8: 0xafb400ec  sw          $s4, 0xEC($sp)
    ctx->pc = 0x2afdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 20));
    // 0x2afdcc: 0x26c6021  addu        $t4, $s3, $t4
    ctx->pc = 0x2afdccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 12)));
    // 0x2afdd0: 0x958c0006  lhu         $t4, 0x6($t4)
    ctx->pc = 0x2afdd0u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 6)));
    // 0x2afdd4: 0x318c0040  andi        $t4, $t4, 0x40
    ctx->pc = 0x2afdd4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)64);
    // 0x2afdd8: 0x11800005  beqz        $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AFDD8u;
    {
        const bool branch_taken_0x2afdd8 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x2afdd8) {
            ctx->pc = 0x2AFDF0u;
            goto label_2afdf0;
        }
    }
    ctx->pc = 0x2AFDE0u;
    // 0x2afde0: 0x8e0c0000  lw          $t4, 0x0($s0)
    ctx->pc = 0x2afde0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2afde4: 0xc6080  sll         $t4, $t4, 2
    ctx->pc = 0x2afde4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x2afde8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2AFDE8u;
    {
        const bool branch_taken_0x2afde8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFDE8u;
        // 0x2afdec: 0xcc3021  addu        $a2, $a2, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afde8) {
            ctx->pc = 0x2AFE00u;
            goto label_2afe00;
        }
    }
    ctx->pc = 0x2AFDF0u;
label_2afdf0:
    // 0x2afdf0: 0x8e0c0000  lw          $t4, 0x0($s0)
    ctx->pc = 0x2afdf0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2afdf4: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x2afdf4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x2afdf8: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x2afdf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x2afdfc: 0x0  nop
    ctx->pc = 0x2afdfcu;
    // NOP
label_2afe00:
    // 0x2afe00: 0x8e140004  lw          $s4, 0x4($s0)
    ctx->pc = 0x2afe00u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2afe04: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2afe04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2afe08: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AFE08u;
    {
        const bool branch_taken_0x2afe08 = (GPR_S64(ctx, 20) >= 0);
        ctx->pc = 0x2AFE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFE08u;
        // 0x2afe0c: 0x146043  sra         $t4, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afe08) {
            ctx->pc = 0x2AFE18u;
            goto label_2afe18;
        }
    }
    ctx->pc = 0x2AFE10u;
    // 0x2afe10: 0x268c0001  addiu       $t4, $s4, 0x1
    ctx->pc = 0x2afe10u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2afe14: 0xc6043  sra         $t4, $t4, 1
    ctx->pc = 0x2afe14u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 12), 1));
label_2afe18:
    // 0x2afe18: 0x6c602a  slt         $t4, $v1, $t4
    ctx->pc = 0x2afe18u;
    SET_GPR_U64(ctx, 12, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x2afe1c: 0x1580ff9e  bnez        $t4, . + 4 + (-0x62 << 2)
    ctx->pc = 0x2AFE1Cu;
    {
        const bool branch_taken_0x2afe1c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x2afe1c) {
            ctx->pc = 0x2AFC98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2afc98;
        }
    }
    ctx->pc = 0x2AFE24u;
    // 0x2afe24: 0x0  nop
    ctx->pc = 0x2afe24u;
    // NOP
label_2afe28:
    // 0x2afe28: 0x8fa400ec  lw          $a0, 0xEC($sp)
    ctx->pc = 0x2afe28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2afe2c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2afe2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2afe30: 0x28a30002  slti        $v1, $a1, 0x2
    ctx->pc = 0x2afe30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2afe34: 0xfc8a0000  sd          $t2, 0x0($a0)
    ctx->pc = 0x2afe34u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 10));
    // 0x2afe38: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2afe38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2afe3c: 0x8fa400ec  lw          $a0, 0xEC($sp)
    ctx->pc = 0x2afe3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2afe40: 0xac89000c  sw          $t1, 0xC($a0)
    ctx->pc = 0x2afe40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 9));
    // 0x2afe44: 0x8fa400ec  lw          $a0, 0xEC($sp)
    ctx->pc = 0x2afe44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2afe48: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x2afe48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2afe4c: 0xafa400ec  sw          $a0, 0xEC($sp)
    ctx->pc = 0x2afe4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 4));
    // 0x2afe50: 0x8fa400ec  lw          $a0, 0xEC($sp)
    ctx->pc = 0x2afe50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2afe54: 0xfc880000  sd          $t0, 0x0($a0)
    ctx->pc = 0x2afe54u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 8));
    // 0x2afe58: 0xfc800008  sd          $zero, 0x8($a0)
    ctx->pc = 0x2afe58u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 0));
    // 0x2afe5c: 0x8fa400ec  lw          $a0, 0xEC($sp)
    ctx->pc = 0x2afe5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2afe60: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x2afe60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2afe64: 0xafa400ec  sw          $a0, 0xEC($sp)
    ctx->pc = 0x2afe64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 4));
    // 0x2afe68: 0x8fa400ec  lw          $a0, 0xEC($sp)
    ctx->pc = 0x2afe68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2afe6c: 0x4213c  dsll32      $a0, $a0, 4
    ctx->pc = 0x2afe6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 4));
    // 0x2afe70: 0x4213e  dsrl32      $a0, $a0, 4
    ctx->pc = 0x2afe70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 4));
    // 0x2afe74: 0xac440030  sw          $a0, 0x30($v0)
    ctx->pc = 0x2afe74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 4));
    // 0x2afe78: 0x8fa400ec  lw          $a0, 0xEC($sp)
    ctx->pc = 0x2afe78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2afe7c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2afe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2afe80: 0xfc870000  sd          $a3, 0x0($a0)
    ctx->pc = 0x2afe80u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 7));
    // 0x2afe84: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2afe84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2afe88: 0x8fa400ec  lw          $a0, 0xEC($sp)
    ctx->pc = 0x2afe88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2afe8c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2afe8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x2afe90: 0x8fa400ec  lw          $a0, 0xEC($sp)
    ctx->pc = 0x2afe90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2afe94: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x2afe94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2afe98: 0x1460ff19  bnez        $v1, . + 4 + (-0xE7 << 2)
    ctx->pc = 0x2AFE98u;
    {
        const bool branch_taken_0x2afe98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AFE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFE98u;
        // 0x2afe9c: 0xafa400ec  sw          $a0, 0xEC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afe98) {
            ctx->pc = 0x2AFB00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2afb00;
        }
    }
    ctx->pc = 0x2AFEA0u;
    // 0x2afea0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2afea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2afea4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2afea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2afea8: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x2afea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x2afeac: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2afeacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2afeb0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2afeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2afeb4: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x2afeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x2afeb8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2afeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2afebc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2afebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2afec0: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x2afec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x2afec4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2afec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2afec8: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x2afec8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2afecc: 0x1440ff0a  bnez        $v0, . + 4 + (-0xF6 << 2)
    ctx->pc = 0x2AFECCu;
    {
        const bool branch_taken_0x2afecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2afecc) {
            ctx->pc = 0x2AFAF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2afaf8;
        }
    }
    ctx->pc = 0x2AFED4u;
    // 0x2afed4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2afed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2afed8: 0xa0400048  sb          $zero, 0x48($v0)
    ctx->pc = 0x2afed8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x2afedc: 0x0  nop
    ctx->pc = 0x2afedcu;
    // NOP
label_2afee0:
    // 0x2afee0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2afee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2afee4: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x2afee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2afee8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2afee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2afeec: 0x80450049  lb          $a1, 0x49($v0)
    ctx->pc = 0x2afeecu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 73)));
    // 0x2afef0: 0xa0650048  sb          $a1, 0x48($v1)
    ctx->pc = 0x2afef0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 72), (uint8_t)GPR_U32(ctx, 5));
    // 0x2afef4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2afef4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afef8: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x2afef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2afefc: 0x80630049  lb          $v1, 0x49($v1)
    ctx->pc = 0x2afefcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 73)));
    // 0x2aff00: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2aff00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2aff04: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x2aff04u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2aff08: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x2aff08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2aff0c: 0x0  nop
    ctx->pc = 0x2aff0cu;
    // NOP
    // 0x2aff10: 0x2010  mfhi        $a0
    ctx->pc = 0x2aff10u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2aff14: 0xa0640049  sb          $a0, 0x49($v1)
    ctx->pc = 0x2aff14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 73), (uint8_t)GPR_U32(ctx, 4));
label_2aff18:
    // 0x2aff18: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2aff18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2aff1c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2aff1cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2aff20: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2aff20u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2aff24: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2aff24u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2aff28: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2aff28u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2aff2c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2aff2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2aff30: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2aff30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2aff34: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2aff34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aff38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2aff38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aff3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2aff3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aff40: 0x3e00008  jr          $ra
    ctx->pc = 0x2AFF40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AFF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFF40u;
        // 0x2aff44: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AFF40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AFF48u;
}
