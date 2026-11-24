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

// Function: sub_0015AA60
// Address: 0x15aa60 - 0x15afdc
void sub_0015AA60_0x15aa60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015AA60_0x15aa60");
#endif

    switch (ctx->pc) {
        case 0x15aab0u: goto label_15aab0;
        case 0x15aaccu: goto label_15aacc;
        case 0x15aae8u: goto label_15aae8;
        case 0x15ab04u: goto label_15ab04;
        case 0x15ab20u: goto label_15ab20;
        case 0x15ab3cu: goto label_15ab3c;
        case 0x15ab58u: goto label_15ab58;
        case 0x15ab74u: goto label_15ab74;
        case 0x15ac50u: goto label_15ac50;
        case 0x15aca4u: goto label_15aca4;
        case 0x15ad60u: goto label_15ad60;
        case 0x15ad74u: goto label_15ad74;
        case 0x15ad90u: goto label_15ad90;
        case 0x15adacu: goto label_15adac;
        case 0x15adc8u: goto label_15adc8;
        case 0x15ade4u: goto label_15ade4;
        case 0x15ae00u: goto label_15ae00;
        case 0x15ae1cu: goto label_15ae1c;
        case 0x15aee0u: goto label_15aee0;
        case 0x15af40u: goto label_15af40;
        case 0x15afb0u: goto label_15afb0;
        default: break;
    }

    ctx->pc = 0x15aa60u;

    // 0x15aa60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15aa60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15aa64: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x15aa64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x15aa68: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15aa68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15aa6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15aa6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15aa70: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x15aa70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15aa74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15aa74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15aa78: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x15aa78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15aa7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15aa7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15aa80: 0x8c831a34  lw          $v1, 0x1A34($a0)
    ctx->pc = 0x15aa80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6708)));
    // 0x15aa84: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15AA84u;
    {
        const bool branch_taken_0x15aa84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15AA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA84u;
        // 0x15aa88: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aa84) {
            ctx->pc = 0x15AA98u;
            goto label_15aa98;
        }
    }
    ctx->pc = 0x15AA8Cu;
    // 0x15aa8c: 0x1000014c  b           . + 4 + (0x14C << 2)
    ctx->pc = 0x15AA8Cu;
    {
        const bool branch_taken_0x15aa8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA8Cu;
        // 0x15aa90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aa8c) {
            ctx->pc = 0x15AFC0u;
            goto label_15afc0;
        }
    }
    ctx->pc = 0x15AA94u;
    // 0x15aa94: 0x0  nop
    ctx->pc = 0x15aa94u;
    // NOP
label_15aa98:
    // 0x15aa98: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x15aa98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15aa9c: 0x144000b2  bnez        $v0, . + 4 + (0xB2 << 2)
    ctx->pc = 0x15AA9Cu;
    {
        const bool branch_taken_0x15aa9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15AAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA9Cu;
        // 0x15aaa0: 0x24710090  addiu       $s1, $v1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aa9c) {
            ctx->pc = 0x15AD68u;
            goto label_15ad68;
        }
    }
    ctx->pc = 0x15AAA4u;
    // 0x15aaa4: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x15aaa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x15aaa8: 0xc056c2c  jal         func_15B0B0
    ctx->pc = 0x15AAA8u;
    SET_GPR_U32(ctx, 31, 0x15AAB0u);
    ctx->pc = 0x15AAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AAA8u;
    // 0x15aaac: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B0B0u, 0x15AAA8u, 0x15AAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AAB0u;
label_15aab0:
    // 0x15aab0: 0x2021825  or          $v1, $s0, $v0
    ctx->pc = 0x15aab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x15aab4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15aab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15aab8: 0x8e621a34  lw          $v0, 0x1A34($s3)
    ctx->pc = 0x15aab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6708)));
    // 0x15aabc: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x15aabcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15aac0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x15aac0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15aac4: 0xc056c2c  jal         func_15B0B0
    ctx->pc = 0x15AAC4u;
    SET_GPR_U32(ctx, 31, 0x15AACCu);
    ctx->pc = 0x15AAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AAC4u;
    // 0x15aac8: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B0B0u, 0x15AAC4u, 0x15AACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AACCu;
label_15aacc:
    // 0x15aacc: 0x2021825  or          $v1, $s0, $v0
    ctx->pc = 0x15aaccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x15aad0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15aad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15aad4: 0x8e621a34  lw          $v0, 0x1A34($s3)
    ctx->pc = 0x15aad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6708)));
    // 0x15aad8: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x15aad8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15aadc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x15aadcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15aae0: 0xc056c2c  jal         func_15B0B0
    ctx->pc = 0x15AAE0u;
    SET_GPR_U32(ctx, 31, 0x15AAE8u);
    ctx->pc = 0x15AAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AAE0u;
    // 0x15aae4: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B0B0u, 0x15AAE0u, 0x15AAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AAE8u;
label_15aae8:
    // 0x15aae8: 0x2021825  or          $v1, $s0, $v0
    ctx->pc = 0x15aae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x15aaec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15aaecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15aaf0: 0x8e621a34  lw          $v0, 0x1A34($s3)
    ctx->pc = 0x15aaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6708)));
    // 0x15aaf4: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x15aaf4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15aaf8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x15aaf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15aafc: 0xc056c2c  jal         func_15B0B0
    ctx->pc = 0x15AAFCu;
    SET_GPR_U32(ctx, 31, 0x15AB04u);
    ctx->pc = 0x15AB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AAFCu;
    // 0x15ab00: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B0B0u, 0x15AAFCu, 0x15AB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AB04u;
label_15ab04:
    // 0x15ab04: 0x2021825  or          $v1, $s0, $v0
    ctx->pc = 0x15ab04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x15ab08: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15ab08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ab0c: 0x8e621a34  lw          $v0, 0x1A34($s3)
    ctx->pc = 0x15ab0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6708)));
    // 0x15ab10: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x15ab10u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15ab14: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x15ab14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ab18: 0xc056c2c  jal         func_15B0B0
    ctx->pc = 0x15AB18u;
    SET_GPR_U32(ctx, 31, 0x15AB20u);
    ctx->pc = 0x15AB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AB18u;
    // 0x15ab1c: 0x24450050  addiu       $a1, $v0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B0B0u, 0x15AB18u, 0x15AB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AB20u;
label_15ab20:
    // 0x15ab20: 0x2021825  or          $v1, $s0, $v0
    ctx->pc = 0x15ab20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x15ab24: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15ab24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ab28: 0x8e621a34  lw          $v0, 0x1A34($s3)
    ctx->pc = 0x15ab28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6708)));
    // 0x15ab2c: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x15ab2cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15ab30: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x15ab30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ab34: 0xc056c2c  jal         func_15B0B0
    ctx->pc = 0x15AB34u;
    SET_GPR_U32(ctx, 31, 0x15AB3Cu);
    ctx->pc = 0x15AB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AB34u;
    // 0x15ab38: 0x24450060  addiu       $a1, $v0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B0B0u, 0x15AB34u, 0x15AB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AB3Cu;
label_15ab3c:
    // 0x15ab3c: 0x2021825  or          $v1, $s0, $v0
    ctx->pc = 0x15ab3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x15ab40: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15ab40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ab44: 0x8e621a34  lw          $v0, 0x1A34($s3)
    ctx->pc = 0x15ab44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6708)));
    // 0x15ab48: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x15ab48u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15ab4c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x15ab4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ab50: 0xc056c2c  jal         func_15B0B0
    ctx->pc = 0x15AB50u;
    SET_GPR_U32(ctx, 31, 0x15AB58u);
    ctx->pc = 0x15AB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AB50u;
    // 0x15ab54: 0x24450070  addiu       $a1, $v0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B0B0u, 0x15AB50u, 0x15AB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AB58u;
label_15ab58:
    // 0x15ab58: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x15ab58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x15ab5c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x15ab5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ab60: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x15ab60u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15ab64: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15ab64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ab68: 0x8e621a34  lw          $v0, 0x1A34($s3)
    ctx->pc = 0x15ab68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6708)));
    // 0x15ab6c: 0xc056c2c  jal         func_15B0B0
    ctx->pc = 0x15AB6Cu;
    SET_GPR_U32(ctx, 31, 0x15AB74u);
    ctx->pc = 0x15AB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AB6Cu;
    // 0x15ab70: 0x24450080  addiu       $a1, $v0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B0B0u, 0x15AB6Cu, 0x15AB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AB74u;
label_15ab74:
    // 0x15ab74: 0x8e641a34  lw          $a0, 0x1A34($s3)
    ctx->pc = 0x15ab74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6708)));
    // 0x15ab78: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x15ab78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x15ab7c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x15ab7cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15ab80: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x15ab80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x15ab84: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x15ab84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x15ab88: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x15ab88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x15ab8c: 0x3c023bb6  lui         $v0, 0x3BB6
    ctx->pc = 0x15ab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15286 << 16));
    // 0x15ab90: 0x34420b61  ori         $v0, $v0, 0xB61
    ctx->pc = 0x15ab90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2913);
    // 0x15ab94: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x15ab94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ab98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15ab98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ab9c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x15ab9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x15aba0: 0xe4216ca0  swc1        $f1, 0x6CA0($at)
    ctx->pc = 0x15aba0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x696CA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x696CA0u, _value); } while (0); }
    // 0x15aba4: 0x8e621a34  lw          $v0, 0x1A34($s3)
    ctx->pc = 0x15aba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6708)));
    // 0x15aba8: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x15aba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x15abac: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x15abacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15abb0: 0xe4216ca4  swc1        $f1, 0x6CA4($at)
    ctx->pc = 0x15abb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x696CA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x696CA4u, _value); } while (0); }
    // 0x15abb4: 0x8e621a34  lw          $v0, 0x1A34($s3)
    ctx->pc = 0x15abb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6708)));
    // 0x15abb8: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x15abb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x15abbc: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x15abbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15abc0: 0xe4216ca8  swc1        $f1, 0x6CA8($at)
    ctx->pc = 0x15abc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x696CA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x696CA8u, _value); } while (0); }
    // 0x15abc4: 0x8e621a34  lw          $v0, 0x1A34($s3)
    ctx->pc = 0x15abc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6708)));
    // 0x15abc8: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x15abc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x15abcc: 0xc4410044  lwc1        $f1, 0x44($v0)
    ctx->pc = 0x15abccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15abd0: 0xe4216cb0  swc1        $f1, 0x6CB0($at)
    ctx->pc = 0x15abd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x696CB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x696CB0u, _value); } while (0); }
    // 0x15abd4: 0x8e621a34  lw          $v0, 0x1A34($s3)
    ctx->pc = 0x15abd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6708)));
    // 0x15abd8: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x15abd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x15abdc: 0xc4410054  lwc1        $f1, 0x54($v0)
    ctx->pc = 0x15abdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15abe0: 0xe4216cb4  swc1        $f1, 0x6CB4($at)
    ctx->pc = 0x15abe0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x696CB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x696CB4u, _value); } while (0); }
    // 0x15abe4: 0x8e621a34  lw          $v0, 0x1A34($s3)
    ctx->pc = 0x15abe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6708)));
    // 0x15abe8: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x15abe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x15abec: 0xc4410064  lwc1        $f1, 0x64($v0)
    ctx->pc = 0x15abecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15abf0: 0xe4216cb8  swc1        $f1, 0x6CB8($at)
    ctx->pc = 0x15abf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x696CB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x696CB8u, _value); } while (0); }
    // 0x15abf4: 0x8e621a34  lw          $v0, 0x1A34($s3)
    ctx->pc = 0x15abf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6708)));
    // 0x15abf8: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x15abf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x15abfc: 0xc4410074  lwc1        $f1, 0x74($v0)
    ctx->pc = 0x15abfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ac00: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x15ac00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x15ac04: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15ac04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15ac08: 0xe4206cd8  swc1        $f0, 0x6CD8($at)
    ctx->pc = 0x15ac08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x696CD8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x696CD8u, _value); } while (0); }
    // 0x15ac0c: 0x8e631a34  lw          $v1, 0x1A34($s3)
    ctx->pc = 0x15ac0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6708)));
    // 0x15ac10: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x15ac10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x15ac14: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x15AC14u;
    {
        const bool branch_taken_0x15ac14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ac14) {
            ctx->pc = 0x15AC70u;
            goto label_15ac70;
        }
    }
    ctx->pc = 0x15AC1Cu;
    // 0x15ac1c: 0xc4610084  lwc1        $f1, 0x84($v1)
    ctx->pc = 0x15ac1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ac20: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x15ac20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x15ac24: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x15ac24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x15ac28: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x15ac28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x15ac2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15ac2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ac30: 0x0  nop
    ctx->pc = 0x15ac30u;
    // NOP
    // 0x15ac34: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x15ac34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x15ac38: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x15ac38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x15ac3c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x15ac3cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x15ac40: 0x0  nop
    ctx->pc = 0x15ac40u;
    // NOP
    // 0x15ac44: 0x0  nop
    ctx->pc = 0x15ac44u;
    // NOP
    // 0x15ac48: 0xc047b5a  jal         func_11ED68
    ctx->pc = 0x15AC48u;
    SET_GPR_U32(ctx, 31, 0x15AC50u);
    ctx->pc = 0x11ED68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED68u, 0x15AC48u, 0x15AC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AC50u;
label_15ac50:
    // 0x15ac50: 0x3c0243a0  lui         $v0, 0x43A0
    ctx->pc = 0x15ac50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17312 << 16));
    // 0x15ac54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15ac54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15ac58: 0x0  nop
    ctx->pc = 0x15ac58u;
    // NOP
    // 0x15ac5c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x15ac5cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x15ac60: 0x0  nop
    ctx->pc = 0x15ac60u;
    // NOP
    // 0x15ac64: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x15ac64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x15ac68: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x15AC68u;
    {
        const bool branch_taken_0x15ac68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC68u;
        // 0x15ac6c: 0xe4206ce4  swc1        $f0, 0x6CE4($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 27876), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ac68) {
            ctx->pc = 0x15ACC0u;
            goto label_15acc0;
        }
    }
    ctx->pc = 0x15AC70u;
label_15ac70:
    // 0x15ac70: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x15ac70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x15ac74: 0xc4610084  lwc1        $f1, 0x84($v1)
    ctx->pc = 0x15ac74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ac78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15ac78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ac7c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x15ac7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x15ac80: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x15ac80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x15ac84: 0x0  nop
    ctx->pc = 0x15ac84u;
    // NOP
    // 0x15ac88: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x15ac88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x15ac8c: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x15ac8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x15ac90: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x15ac90u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x15ac94: 0x0  nop
    ctx->pc = 0x15ac94u;
    // NOP
    // 0x15ac98: 0x0  nop
    ctx->pc = 0x15ac98u;
    // NOP
    // 0x15ac9c: 0xc047b5a  jal         func_11ED68
    ctx->pc = 0x15AC9Cu;
    SET_GPR_U32(ctx, 31, 0x15ACA4u);
    ctx->pc = 0x11ED68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED68u, 0x15AC9Cu, 0x15ACA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15ACA4u;
label_15aca4:
    // 0x15aca4: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x15aca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x15aca8: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x15aca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x15acac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15acacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15acb0: 0x0  nop
    ctx->pc = 0x15acb0u;
    // NOP
    // 0x15acb4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x15acb4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x15acb8: 0xe4206ce4  swc1        $f0, 0x6CE4($at)
    ctx->pc = 0x15acb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x696CE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x696CE4u, _value); } while (0); }
    // 0x15acbc: 0x0  nop
    ctx->pc = 0x15acbcu;
    // NOP
label_15acc0:
    // 0x15acc0: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x15acc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x15acc4: 0xc4266ca0  lwc1        $f6, 0x6CA0($at)
    ctx->pc = 0x15acc4u;
    { uint32_t bits = FAST_READ32(0x696CA0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x15acc8: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x15acc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x15accc: 0xc6450000  lwc1        $f5, 0x0($s2)
    ctx->pc = 0x15acccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x15acd0: 0x24846ca0  addiu       $a0, $a0, 0x6CA0
    ctx->pc = 0x15acd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27808));
    // 0x15acd4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15acd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15acd8: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x15acd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x15acdc: 0xc4246ca4  lwc1        $f4, 0x6CA4($at)
    ctx->pc = 0x15acdcu;
    { uint32_t bits = FAST_READ32(0x696CA4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15ace0: 0x46053140  add.s       $f5, $f6, $f5
    ctx->pc = 0x15ace0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x15ace4: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x15ace4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x15ace8: 0xc4226ca8  lwc1        $f2, 0x6CA8($at)
    ctx->pc = 0x15ace8u;
    { uint32_t bits = FAST_READ32(0x696CA8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15acec: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x15acecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x15acf0: 0xc4236cb0  lwc1        $f3, 0x6CB0($at)
    ctx->pc = 0x15acf0u;
    { uint32_t bits = FAST_READ32(0x696CB0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15acf4: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x15acf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x15acf8: 0xc4216cb4  lwc1        $f1, 0x6CB4($at)
    ctx->pc = 0x15acf8u;
    { uint32_t bits = FAST_READ32(0x696CB4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15acfc: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x15acfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x15ad00: 0xc4206cb8  lwc1        $f0, 0x6CB8($at)
    ctx->pc = 0x15ad00u;
    { uint32_t bits = FAST_READ32(0x696CB8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ad04: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x15ad04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x15ad08: 0xe4256ca0  swc1        $f5, 0x6CA0($at)
    ctx->pc = 0x15ad08u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x696CA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x696CA0u, _value); } while (0); }
    // 0x15ad0c: 0xc6450004  lwc1        $f5, 0x4($s2)
    ctx->pc = 0x15ad0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x15ad10: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x15ad10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x15ad14: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x15ad14u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x15ad18: 0xe4246ca4  swc1        $f4, 0x6CA4($at)
    ctx->pc = 0x15ad18u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x696CA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x696CA4u, _value); } while (0); }
    // 0x15ad1c: 0xc6440008  lwc1        $f4, 0x8($s2)
    ctx->pc = 0x15ad1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15ad20: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x15ad20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x15ad24: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x15ad24u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x15ad28: 0xe4226ca8  swc1        $f2, 0x6CA8($at)
    ctx->pc = 0x15ad28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x696CA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x696CA8u, _value); } while (0); }
    // 0x15ad2c: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x15ad2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15ad30: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x15ad30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x15ad34: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x15ad34u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x15ad38: 0xe4226cb0  swc1        $f2, 0x6CB0($at)
    ctx->pc = 0x15ad38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x696CB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x696CB0u, _value); } while (0); }
    // 0x15ad3c: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x15ad3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15ad40: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x15ad40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x15ad44: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x15ad44u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x15ad48: 0xe4216cb4  swc1        $f1, 0x6CB4($at)
    ctx->pc = 0x15ad48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x696CB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x696CB4u, _value); } while (0); }
    // 0x15ad4c: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x15ad4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ad50: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x15ad50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x15ad54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15ad54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x15ad58: 0xc04bc7c  jal         func_12F1F0
    ctx->pc = 0x15AD58u;
    SET_GPR_U32(ctx, 31, 0x15AD60u);
    ctx->pc = 0x15AD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AD58u;
    // 0x15ad5c: 0xe4206cb8  swc1        $f0, 0x6CB8($at) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 27832), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F1F0u, 0x15AD58u, 0x15AD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AD60u;
label_15ad60:
    // 0x15ad60: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x15AD60u;
    {
        const bool branch_taken_0x15ad60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ad60) {
            ctx->pc = 0x15AFB0u;
            goto label_15afb0;
        }
    }
    ctx->pc = 0x15AD68u;
label_15ad68:
    // 0x15ad68: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x15ad68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x15ad6c: 0xc056c2c  jal         func_15B0B0
    ctx->pc = 0x15AD6Cu;
    SET_GPR_U32(ctx, 31, 0x15AD74u);
    ctx->pc = 0x15AD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AD6Cu;
    // 0x15ad70: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B0B0u, 0x15AD6Cu, 0x15AD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AD74u;
label_15ad74:
    // 0x15ad74: 0x2021825  or          $v1, $s0, $v0
    ctx->pc = 0x15ad74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x15ad78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15ad78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ad7c: 0x8e621a34  lw          $v0, 0x1A34($s3)
    ctx->pc = 0x15ad7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6708)));
    // 0x15ad80: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x15ad80u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15ad84: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x15ad84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ad88: 0xc056c2c  jal         func_15B0B0
    ctx->pc = 0x15AD88u;
    SET_GPR_U32(ctx, 31, 0x15AD90u);
    ctx->pc = 0x15AD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AD88u;
    // 0x15ad8c: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B0B0u, 0x15AD88u, 0x15AD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AD90u;
label_15ad90:
    // 0x15ad90: 0x2021825  or          $v1, $s0, $v0
    ctx->pc = 0x15ad90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x15ad94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15ad94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ad98: 0x8e621a34  lw          $v0, 0x1A34($s3)
    ctx->pc = 0x15ad98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6708)));
    // 0x15ad9c: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x15ad9cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15ada0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x15ada0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ada4: 0xc056c2c  jal         func_15B0B0
    ctx->pc = 0x15ADA4u;
    SET_GPR_U32(ctx, 31, 0x15ADACu);
    ctx->pc = 0x15ADA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15ADA4u;
    // 0x15ada8: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B0B0u, 0x15ADA4u, 0x15ADACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15ADACu;
label_15adac:
    // 0x15adac: 0x2021825  or          $v1, $s0, $v0
    ctx->pc = 0x15adacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x15adb0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15adb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15adb4: 0x8e621a34  lw          $v0, 0x1A34($s3)
    ctx->pc = 0x15adb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6708)));
    // 0x15adb8: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x15adb8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15adbc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x15adbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15adc0: 0xc056c2c  jal         func_15B0B0
    ctx->pc = 0x15ADC0u;
    SET_GPR_U32(ctx, 31, 0x15ADC8u);
    ctx->pc = 0x15ADC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15ADC0u;
    // 0x15adc4: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B0B0u, 0x15ADC0u, 0x15ADC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15ADC8u;
label_15adc8:
    // 0x15adc8: 0x2021825  or          $v1, $s0, $v0
    ctx->pc = 0x15adc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x15adcc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15adccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15add0: 0x8e621a34  lw          $v0, 0x1A34($s3)
    ctx->pc = 0x15add0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6708)));
    // 0x15add4: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x15add4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15add8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x15add8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15addc: 0xc056c2c  jal         func_15B0B0
    ctx->pc = 0x15ADDCu;
    SET_GPR_U32(ctx, 31, 0x15ADE4u);
    ctx->pc = 0x15ADE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15ADDCu;
    // 0x15ade0: 0x24450050  addiu       $a1, $v0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B0B0u, 0x15ADDCu, 0x15ADE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15ADE4u;
label_15ade4:
    // 0x15ade4: 0x2021825  or          $v1, $s0, $v0
    ctx->pc = 0x15ade4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x15ade8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15ade8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15adec: 0x8e621a34  lw          $v0, 0x1A34($s3)
    ctx->pc = 0x15adecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6708)));
    // 0x15adf0: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x15adf0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15adf4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x15adf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15adf8: 0xc056c2c  jal         func_15B0B0
    ctx->pc = 0x15ADF8u;
    SET_GPR_U32(ctx, 31, 0x15AE00u);
    ctx->pc = 0x15ADFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15ADF8u;
    // 0x15adfc: 0x24450060  addiu       $a1, $v0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B0B0u, 0x15ADF8u, 0x15AE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AE00u;
label_15ae00:
    // 0x15ae00: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x15ae00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x15ae04: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x15ae04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ae08: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x15ae08u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15ae0c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15ae0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ae10: 0x8e621a34  lw          $v0, 0x1A34($s3)
    ctx->pc = 0x15ae10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6708)));
    // 0x15ae14: 0xc056c2c  jal         func_15B0B0
    ctx->pc = 0x15AE14u;
    SET_GPR_U32(ctx, 31, 0x15AE1Cu);
    ctx->pc = 0x15AE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AE14u;
    // 0x15ae18: 0x24450080  addiu       $a1, $v0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B0B0u, 0x15AE14u, 0x15AE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AE1Cu;
label_15ae1c:
    // 0x15ae1c: 0x8e631a34  lw          $v1, 0x1A34($s3)
    ctx->pc = 0x15ae1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6708)));
    // 0x15ae20: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x15ae20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x15ae24: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x15ae24u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15ae28: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x15ae28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x15ae2c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15ae2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15ae30: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x15ae30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ae34: 0xe4206ca0  swc1        $f0, 0x6CA0($at)
    ctx->pc = 0x15ae34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x696CA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x696CA0u, _value); } while (0); }
    // 0x15ae38: 0x8e631a34  lw          $v1, 0x1A34($s3)
    ctx->pc = 0x15ae38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6708)));
    // 0x15ae3c: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x15ae3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x15ae40: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x15ae40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ae44: 0xe4206ca4  swc1        $f0, 0x6CA4($at)
    ctx->pc = 0x15ae44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x696CA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x696CA4u, _value); } while (0); }
    // 0x15ae48: 0x8e631a34  lw          $v1, 0x1A34($s3)
    ctx->pc = 0x15ae48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6708)));
    // 0x15ae4c: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x15ae4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x15ae50: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x15ae50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ae54: 0xe4206ca8  swc1        $f0, 0x6CA8($at)
    ctx->pc = 0x15ae54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x696CA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x696CA8u, _value); } while (0); }
    // 0x15ae58: 0x8e631a34  lw          $v1, 0x1A34($s3)
    ctx->pc = 0x15ae58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6708)));
    // 0x15ae5c: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x15ae5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x15ae60: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x15ae60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ae64: 0xe4206cd0  swc1        $f0, 0x6CD0($at)
    ctx->pc = 0x15ae64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x696CD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x696CD0u, _value); } while (0); }
    // 0x15ae68: 0x8e631a34  lw          $v1, 0x1A34($s3)
    ctx->pc = 0x15ae68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6708)));
    // 0x15ae6c: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x15ae6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x15ae70: 0xc4600054  lwc1        $f0, 0x54($v1)
    ctx->pc = 0x15ae70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ae74: 0xe4206cd4  swc1        $f0, 0x6CD4($at)
    ctx->pc = 0x15ae74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x696CD4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x696CD4u, _value); } while (0); }
    // 0x15ae78: 0x8e631a34  lw          $v1, 0x1A34($s3)
    ctx->pc = 0x15ae78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6708)));
    // 0x15ae7c: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x15ae7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x15ae80: 0xc4600064  lwc1        $f0, 0x64($v1)
    ctx->pc = 0x15ae80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ae84: 0xe4206cd8  swc1        $f0, 0x6CD8($at)
    ctx->pc = 0x15ae84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x696CD8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x696CD8u, _value); } while (0); }
    // 0x15ae88: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x15ae88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x15ae8c: 0xac226ce0  sw          $v0, 0x6CE0($at)
    ctx->pc = 0x15ae8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x696CE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x696CE0u, _value); } while (0);
    // 0x15ae90: 0x8e631a34  lw          $v1, 0x1A34($s3)
    ctx->pc = 0x15ae90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6708)));
    // 0x15ae94: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x15ae94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x15ae98: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x15AE98u;
    {
        const bool branch_taken_0x15ae98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ae98) {
            ctx->pc = 0x15AF00u;
            goto label_15af00;
        }
    }
    ctx->pc = 0x15AEA0u;
    // 0x15aea0: 0xc4620084  lwc1        $f2, 0x84($v1)
    ctx->pc = 0x15aea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15aea4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x15aea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x15aea8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x15aea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x15aeac: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x15aeacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x15aeb0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x15aeb0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x15aeb4: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x15aeb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x15aeb8: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x15aeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x15aebc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x15aebcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15aec0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15aec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15aec4: 0x0  nop
    ctx->pc = 0x15aec4u;
    // NOP
    // 0x15aec8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x15aec8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x15aecc: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x15aeccu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x15aed0: 0x0  nop
    ctx->pc = 0x15aed0u;
    // NOP
    // 0x15aed4: 0x0  nop
    ctx->pc = 0x15aed4u;
    // NOP
    // 0x15aed8: 0xc047b5a  jal         func_11ED68
    ctx->pc = 0x15AED8u;
    SET_GPR_U32(ctx, 31, 0x15AEE0u);
    ctx->pc = 0x11ED68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED68u, 0x15AED8u, 0x15AEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AEE0u;
label_15aee0:
    // 0x15aee0: 0x3c0243a0  lui         $v0, 0x43A0
    ctx->pc = 0x15aee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17312 << 16));
    // 0x15aee4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15aee4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15aee8: 0x0  nop
    ctx->pc = 0x15aee8u;
    // NOP
    // 0x15aeec: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x15aeecu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x15aef0: 0x0  nop
    ctx->pc = 0x15aef0u;
    // NOP
    // 0x15aef4: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x15aef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x15aef8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x15AEF8u;
    {
        const bool branch_taken_0x15aef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AEF8u;
        // 0x15aefc: 0xe4206ce4  swc1        $f0, 0x6CE4($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 27876), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aef8) {
            ctx->pc = 0x15AF58u;
            goto label_15af58;
        }
    }
    ctx->pc = 0x15AF00u;
label_15af00:
    // 0x15af00: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x15af00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x15af04: 0xc4620084  lwc1        $f2, 0x84($v1)
    ctx->pc = 0x15af04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15af08: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x15af08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x15af0c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15af0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15af10: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x15af10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x15af14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15af14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15af18: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x15af18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x15af1c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x15af1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x15af20: 0x0  nop
    ctx->pc = 0x15af20u;
    // NOP
    // 0x15af24: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x15af24u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x15af28: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x15af28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x15af2c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x15af2cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x15af30: 0x0  nop
    ctx->pc = 0x15af30u;
    // NOP
    // 0x15af34: 0x0  nop
    ctx->pc = 0x15af34u;
    // NOP
    // 0x15af38: 0xc047b5a  jal         func_11ED68
    ctx->pc = 0x15AF38u;
    SET_GPR_U32(ctx, 31, 0x15AF40u);
    ctx->pc = 0x11ED68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED68u, 0x15AF38u, 0x15AF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AF40u;
label_15af40:
    // 0x15af40: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x15af40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x15af44: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x15af44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x15af48: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15af48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15af4c: 0x0  nop
    ctx->pc = 0x15af4cu;
    // NOP
    // 0x15af50: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x15af50u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x15af54: 0xe4206ce4  swc1        $f0, 0x6CE4($at)
    ctx->pc = 0x15af54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x696CE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x696CE4u, _value); } while (0); }
label_15af58:
    // 0x15af58: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x15af58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x15af5c: 0xc4236ca0  lwc1        $f3, 0x6CA0($at)
    ctx->pc = 0x15af5cu;
    { uint32_t bits = FAST_READ32(0x696CA0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15af60: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x15af60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x15af64: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x15af64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15af68: 0x24846ca0  addiu       $a0, $a0, 0x6CA0
    ctx->pc = 0x15af68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27808));
    // 0x15af6c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x15af6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15af70: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x15af70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x15af74: 0xc4216ca4  lwc1        $f1, 0x6CA4($at)
    ctx->pc = 0x15af74u;
    { uint32_t bits = FAST_READ32(0x696CA4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15af78: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x15af78u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x15af7c: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x15af7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x15af80: 0xc4206ca8  lwc1        $f0, 0x6CA8($at)
    ctx->pc = 0x15af80u;
    { uint32_t bits = FAST_READ32(0x696CA8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15af84: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x15af84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x15af88: 0xe4226ca0  swc1        $f2, 0x6CA0($at)
    ctx->pc = 0x15af88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x696CA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x696CA0u, _value); } while (0); }
    // 0x15af8c: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x15af8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15af90: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x15af90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x15af94: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x15af94u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x15af98: 0xe4216ca4  swc1        $f1, 0x6CA4($at)
    ctx->pc = 0x15af98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x696CA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x696CA4u, _value); } while (0); }
    // 0x15af9c: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x15af9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15afa0: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x15afa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x15afa4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15afa4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x15afa8: 0xc04bc7c  jal         func_12F1F0
    ctx->pc = 0x15AFA8u;
    SET_GPR_U32(ctx, 31, 0x15AFB0u);
    ctx->pc = 0x15AFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AFA8u;
    // 0x15afac: 0xe4206ca8  swc1        $f0, 0x6CA8($at) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 27816), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F1F0u, 0x15AFA8u, 0x15AFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AFB0u;
label_15afb0:
    // 0x15afb0: 0x96631a08  lhu         $v1, 0x1A08($s3)
    ctx->pc = 0x15afb0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 6664)));
    // 0x15afb4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x15afb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15afb8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15afb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15afbc: 0xa6631a08  sh          $v1, 0x1A08($s3)
    ctx->pc = 0x15afbcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 6664), (uint16_t)GPR_U32(ctx, 3));
label_15afc0:
    // 0x15afc0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x15afc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15afc4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15afc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15afc8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15afc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15afcc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15afccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15afd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15afd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15afd4: 0x3e00008  jr          $ra
    ctx->pc = 0x15AFD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15AFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AFD4u;
        // 0x15afd8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15AFD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15AFDCu;
}
