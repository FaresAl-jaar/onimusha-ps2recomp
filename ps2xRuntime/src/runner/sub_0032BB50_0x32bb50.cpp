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

// Function: sub_0032BB50
// Address: 0x32bb50 - 0x32bd2c
void sub_0032BB50_0x32bb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032BB50_0x32bb50");
#endif

    switch (ctx->pc) {
        case 0x32bbd8u: goto label_32bbd8;
        case 0x32bc80u: goto label_32bc80;
        case 0x32bc90u: goto label_32bc90;
        case 0x32bd10u: goto label_32bd10;
        default: break;
    }

    ctx->pc = 0x32bb50u;

    // 0x32bb50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x32bb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x32bb54: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x32bb54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x32bb58: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x32bb58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x32bb5c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x32bb5cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x32bb60: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32bb60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x32bb64: 0x6243c  dsll32      $a0, $a2, 16
    ctx->pc = 0x32bb64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 16));
    // 0x32bb68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32bb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32bb6c: 0x2462fffd  addiu       $v0, $v1, -0x3
    ctx->pc = 0x32bb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x32bb70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32bb70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32bb74: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x32bb74u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x32bb78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32bb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32bb7c: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x32bb7cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32bb80: 0x24620018  addiu       $v0, $v1, 0x18
    ctx->pc = 0x32bb80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x32bb84: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x32bb84u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x32bb88: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x32bb88u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32bb8c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32BB8Cu;
    {
        const bool branch_taken_0x32bb8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x32BB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BB8Cu;
        // 0x32bb90: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bb8c) {
            ctx->pc = 0x32BBA8u;
            goto label_32bba8;
        }
    }
    ctx->pc = 0x32BB94u;
    // 0x32bb94: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32bb94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32bb98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32bb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32bb9c: 0x9023fc8d  lbu         $v1, -0x373($at)
    ctx->pc = 0x32bb9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Du));
    // 0x32bba0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32BBA0u;
    {
        const bool branch_taken_0x32bba0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32bba0) {
            ctx->pc = 0x32BBB8u;
            goto label_32bbb8;
        }
    }
    ctx->pc = 0x32BBA8u;
label_32bba8:
    // 0x32bba8: 0x28810002  slti        $at, $a0, 0x2
    ctx->pc = 0x32bba8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x32bbac: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x32BBACu;
    {
        const bool branch_taken_0x32bbac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x32bbac) {
            ctx->pc = 0x32BBC8u;
            goto label_32bbc8;
        }
    }
    ctx->pc = 0x32BBB4u;
    // 0x32bbb4: 0x0  nop
    ctx->pc = 0x32bbb4u;
    // NOP
label_32bbb8:
    // 0x32bbb8: 0x26220018  addiu       $v0, $s1, 0x18
    ctx->pc = 0x32bbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x32bbbc: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x32bbbcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32bbc0: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x32bbc0u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x32bbc4: 0x0  nop
    ctx->pc = 0x32bbc4u;
    // NOP
label_32bbc8:
    // 0x32bbc8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x32bbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x32bbcc: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x32bbccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x32bbd0: 0xc05e360  jal         func_178D80
    ctx->pc = 0x32BBD0u;
    SET_GPR_U32(ctx, 31, 0x32BBD8u);
    ctx->pc = 0x32BBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BBD0u;
    // 0x32bbd4: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x32BBD0u, 0x32BBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BBD8u;
label_32bbd8:
    // 0x32bbd8: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x32bbd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x32bbdc: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x32bbdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x32bbe0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x32bbe0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x32bbe4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x32bbe4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x32bbe8: 0x24840f20  addiu       $a0, $a0, 0xF20
    ctx->pc = 0x32bbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3872));
    // 0x32bbec: 0x24630f20  addiu       $v1, $v1, 0xF20
    ctx->pc = 0x32bbecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3872));
    // 0x32bbf0: 0x394c0  sll         $s2, $v1, 19
    ctx->pc = 0x32bbf0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 19));
    // 0x32bbf4: 0x49cc0  sll         $s3, $a0, 19
    ctx->pc = 0x32bbf4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 4), 19));
    // 0x32bbf8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x32bbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x32bbfc: 0x3c035030  lui         $v1, 0x5030
    ctx->pc = 0x32bbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20528 << 16));
    // 0x32bc00: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x32bc00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x32bc04: 0x3463004c  ori         $v1, $v1, 0x4C
    ctx->pc = 0x32bc04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)76);
    // 0x32bc08: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x32bc08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x32bc0c: 0x36718000  ori         $s1, $s3, 0x8000
    ctx->pc = 0x32bc0cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)32768);
    // 0x32bc10: 0x3c036000  lui         $v1, 0x6000
    ctx->pc = 0x32bc10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24576 << 16));
    // 0x32bc14: 0x3408fffc  ori         $t0, $zero, 0xFFFC
    ctx->pc = 0x32bc14u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x32bc18: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x32bc18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x32bc1c: 0x36647000  ori         $a0, $s3, 0x7000
    ctx->pc = 0x32bc1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)28672);
    // 0x32bc20: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x32bc20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x32bc24: 0x36508000  ori         $s0, $s2, 0x8000
    ctx->pc = 0x32bc24u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)32768);
    // 0x32bc28: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x32bc28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x32bc2c: 0x36477000  ori         $a3, $s2, 0x7000
    ctx->pc = 0x32bc2cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)28672);
    // 0x32bc30: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x32bc30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x32bc34: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x32bc34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x32bc38: 0xac510018  sw          $s1, 0x18($v0)
    ctx->pc = 0x32bc38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 17));
    // 0x32bc3c: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x32bc3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x32bc40: 0xac48001c  sw          $t0, 0x1C($v0)
    ctx->pc = 0x32bc40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 8));
    // 0x32bc44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32bc44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bc48: 0xac440020  sw          $a0, 0x20($v0)
    ctx->pc = 0x32bc48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 4));
    // 0x32bc4c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x32bc4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32bc50: 0xac480024  sw          $t0, 0x24($v0)
    ctx->pc = 0x32bc50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 8));
    // 0x32bc54: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x32bc54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x32bc58: 0xac500030  sw          $s0, 0x30($v0)
    ctx->pc = 0x32bc58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 16));
    // 0x32bc5c: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x32bc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x32bc60: 0xac480034  sw          $t0, 0x34($v0)
    ctx->pc = 0x32bc60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 8));
    // 0x32bc64: 0xac470038  sw          $a3, 0x38($v0)
    ctx->pc = 0x32bc64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 7));
    // 0x32bc68: 0xac48003c  sw          $t0, 0x3C($v0)
    ctx->pc = 0x32bc68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 8));
    // 0x32bc6c: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x32bc6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x32bc70: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x32bc70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x32bc74: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x32bc74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x32bc78: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x32BC78u;
    SET_GPR_U32(ctx, 31, 0x32BC80u);
    ctx->pc = 0x32BC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BC78u;
    // 0x32bc7c: 0xa040000f  sb          $zero, 0xF($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 15), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x32BC78u, 0x32BC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BC80u;
label_32bc80:
    // 0x32bc80: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x32bc80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x32bc84: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x32bc84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x32bc88: 0xc05e360  jal         func_178D80
    ctx->pc = 0x32BC88u;
    SET_GPR_U32(ctx, 31, 0x32BC90u);
    ctx->pc = 0x32BC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BC88u;
    // 0x32bc8c: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x32BC88u, 0x32BC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BC90u;
label_32bc90:
    // 0x32bc90: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x32bc90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x32bc94: 0x3c035030  lui         $v1, 0x5030
    ctx->pc = 0x32bc94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20528 << 16));
    // 0x32bc98: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x32bc98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x32bc9c: 0x3463004c  ori         $v1, $v1, 0x4C
    ctx->pc = 0x32bc9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)76);
    // 0x32bca0: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x32bca0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x32bca4: 0x3c046000  lui         $a0, 0x6000
    ctx->pc = 0x32bca4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24576 << 16));
    // 0x32bca8: 0xac440010  sw          $a0, 0x10($v0)
    ctx->pc = 0x32bca8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
    // 0x32bcac: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x32bcacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x32bcb0: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x32bcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x32bcb4: 0x3409fffc  ori         $t1, $zero, 0xFFFC
    ctx->pc = 0x32bcb4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x32bcb8: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x32bcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
    // 0x32bcbc: 0x36689000  ori         $t0, $s3, 0x9000
    ctx->pc = 0x32bcbcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)36864);
    // 0x32bcc0: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x32bcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x32bcc4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x32bcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x32bcc8: 0xac510018  sw          $s1, 0x18($v0)
    ctx->pc = 0x32bcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 17));
    // 0x32bccc: 0x36479000  ori         $a3, $s2, 0x9000
    ctx->pc = 0x32bcccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)36864);
    // 0x32bcd0: 0xac49001c  sw          $t1, 0x1C($v0)
    ctx->pc = 0x32bcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 9));
    // 0x32bcd4: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x32bcd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x32bcd8: 0xac480020  sw          $t0, 0x20($v0)
    ctx->pc = 0x32bcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 8));
    // 0x32bcdc: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x32bcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x32bce0: 0xac490024  sw          $t1, 0x24($v0)
    ctx->pc = 0x32bce0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 9));
    // 0x32bce4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32bce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bce8: 0xac500030  sw          $s0, 0x30($v0)
    ctx->pc = 0x32bce8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 16));
    // 0x32bcec: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x32bcecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32bcf0: 0xac490034  sw          $t1, 0x34($v0)
    ctx->pc = 0x32bcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 9));
    // 0x32bcf4: 0xac470038  sw          $a3, 0x38($v0)
    ctx->pc = 0x32bcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 7));
    // 0x32bcf8: 0xac49003c  sw          $t1, 0x3C($v0)
    ctx->pc = 0x32bcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 9));
    // 0x32bcfc: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x32bcfcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x32bd00: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x32bd00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x32bd04: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x32bd04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x32bd08: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x32BD08u;
    SET_GPR_U32(ctx, 31, 0x32BD10u);
    ctx->pc = 0x32BD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BD08u;
    // 0x32bd0c: 0xa040000f  sb          $zero, 0xF($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 15), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x32BD08u, 0x32BD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BD10u;
label_32bd10:
    // 0x32bd10: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x32bd10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32bd14: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32bd14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32bd18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32bd18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32bd1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32bd1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32bd20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32bd20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32bd24: 0x3e00008  jr          $ra
    ctx->pc = 0x32BD24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32BD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BD24u;
        // 0x32bd28: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32BD24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32BD2Cu;
}
