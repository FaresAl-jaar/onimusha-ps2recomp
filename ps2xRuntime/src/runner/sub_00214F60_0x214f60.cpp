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

// Function: sub_00214F60
// Address: 0x214f60 - 0x21503c
void sub_00214F60_0x214f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214F60_0x214f60");
#endif

    switch (ctx->pc) {
        case 0x214f70u: goto label_214f70;
        case 0x214f78u: goto label_214f78;
        case 0x214f80u: goto label_214f80;
        case 0x214facu: goto label_214fac;
        case 0x214ffcu: goto label_214ffc;
        case 0x215010u: goto label_215010;
        case 0x215024u: goto label_215024;
        default: break;
    }

    ctx->pc = 0x214f60u;

    // 0x214f60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x214f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x214f64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x214f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x214f68: 0xc086c6e  jal         func_21B1B8
    ctx->pc = 0x214F68u;
    SET_GPR_U32(ctx, 31, 0x214F70u);
    ctx->pc = 0x21B1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B1B8u, 0x214F68u, 0x214F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214F70u;
label_214f70:
    // 0x214f70: 0xc085410  jal         func_215040
    ctx->pc = 0x214F70u;
    SET_GPR_U32(ctx, 31, 0x214F78u);
    ctx->pc = 0x215040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215040u, 0x214F70u, 0x214F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214F78u;
label_214f78:
    // 0x214f78: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x214F78u;
    {
        const bool branch_taken_0x214f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214F78u;
        // 0x214f7c: 0x3c050088  lui         $a1, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)136 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214f78) {
            ctx->pc = 0x214FA0u;
            goto label_214fa0;
        }
    }
    ctx->pc = 0x214F80u;
label_214f80:
    // 0x214f80: 0x0  nop
    ctx->pc = 0x214f80u;
    // NOP
    // 0x214f84: 0x0  nop
    ctx->pc = 0x214f84u;
    // NOP
    // 0x214f88: 0x0  nop
    ctx->pc = 0x214f88u;
    // NOP
    // 0x214f8c: 0x0  nop
    ctx->pc = 0x214f8cu;
    // NOP
    // 0x214f90: 0x0  nop
    ctx->pc = 0x214f90u;
    // NOP
    // 0x214f94: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x214F94u;
    {
        const bool branch_taken_0x214f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x214f94) {
            ctx->pc = 0x214F80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214f80;
        }
    }
    ctx->pc = 0x214F9Cu;
    // 0x214f9c: 0x0  nop
    ctx->pc = 0x214f9cu;
    // NOP
label_214fa0:
    // 0x214fa0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x214fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x214fa4: 0xc080282  jal         func_200A08
    ctx->pc = 0x214FA4u;
    SET_GPR_U32(ctx, 31, 0x214FACu);
    ctx->pc = 0x214FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214FA4u;
    // 0x214fa8: 0x24a51630  addiu       $a1, $a1, 0x1630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200A08u, 0x214FA4u, 0x214FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214FACu;
label_214fac:
    // 0x214fac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x214facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214fb0: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x214FB0u;
    {
        const bool branch_taken_0x214fb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x214FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214FB0u;
        // 0x214fb4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214fb0) {
            ctx->pc = 0x214FE8u;
            goto label_214fe8;
        }
    }
    ctx->pc = 0x214FB8u;
    // 0x214fb8: 0x3c02ff03  lui         $v0, 0xFF03
    ctx->pc = 0x214fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65283 << 16));
    // 0x214fbc: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x214fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x214fc0: 0x3442ff05  ori         $v0, $v0, 0xFF05
    ctx->pc = 0x214fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65285);
    // 0x214fc4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x214fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x214fc8: 0x821026  xor         $v0, $a0, $v0
    ctx->pc = 0x214fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x214fcc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x214fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214fd0: 0x34630f01  ori         $v1, $v1, 0xF01
    ctx->pc = 0x214fd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3841);
    // 0x214fd4: 0x34a50f13  ori         $a1, $a1, 0xF13
    ctx->pc = 0x214fd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3859);
    // 0x214fd8: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x214fd8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x214fdc: 0x80848e0  j           func_212380
    ctx->pc = 0x214FDCu;
    ctx->pc = 0x214FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214FDCu;
    // 0x214fe0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x214FE4u;
    // 0x214fe4: 0x0  nop
    ctx->pc = 0x214fe4u;
    // NOP
label_214fe8:
    // 0x214fe8: 0x3c040088  lui         $a0, 0x88
    ctx->pc = 0x214fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)136 << 16));
    // 0x214fec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x214fecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214ff0: 0x24845970  addiu       $a0, $a0, 0x5970
    ctx->pc = 0x214ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22896));
    // 0x214ff4: 0xc049590  jal         func_125640
    ctx->pc = 0x214FF4u;
    SET_GPR_U32(ctx, 31, 0x214FFCu);
    ctx->pc = 0x214FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214FF4u;
    // 0x214ff8: 0x24060024  addiu       $a2, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x214FF4u, 0x214FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214FFCu;
label_214ffc:
    // 0x214ffc: 0x3c040088  lui         $a0, 0x88
    ctx->pc = 0x214ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)136 << 16));
    // 0x215000: 0x24845998  addiu       $a0, $a0, 0x5998
    ctx->pc = 0x215000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22936));
    // 0x215004: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x215004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215008: 0xc049590  jal         func_125640
    ctx->pc = 0x215008u;
    SET_GPR_U32(ctx, 31, 0x215010u);
    ctx->pc = 0x21500Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215008u;
    // 0x21500c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x215008u, 0x215010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215010u;
label_215010:
    // 0x215010: 0x3c040088  lui         $a0, 0x88
    ctx->pc = 0x215010u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)136 << 16));
    // 0x215014: 0x248459a0  addiu       $a0, $a0, 0x59A0
    ctx->pc = 0x215014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22944));
    // 0x215018: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x215018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21501c: 0xc049590  jal         func_125640
    ctx->pc = 0x21501Cu;
    SET_GPR_U32(ctx, 31, 0x215024u);
    ctx->pc = 0x215020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21501Cu;
    // 0x215020: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x21501Cu, 0x215024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215024u;
label_215024:
    // 0x215024: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x215024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x215028: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x215028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21502c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21502cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215030: 0xac60a1f8  sw          $zero, -0x5E08($v1)
    ctx->pc = 0x215030u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4BA1F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BA1F8u, _value); } while (0);
    // 0x215034: 0x3e00008  jr          $ra
    ctx->pc = 0x215034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215034u;
        // 0x215038: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21503Cu;
}
