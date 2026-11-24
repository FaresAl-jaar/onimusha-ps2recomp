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

// Function: sub_00205B48
// Address: 0x205b48 - 0x205de0
void sub_00205B48_0x205b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205B48_0x205b48");
#endif

    switch (ctx->pc) {
        case 0x205b7cu: goto label_205b7c;
        case 0x205ce8u: goto label_205ce8;
        case 0x205cf8u: goto label_205cf8;
        case 0x205d10u: goto label_205d10;
        case 0x205d3cu: goto label_205d3c;
        case 0x205d5cu: goto label_205d5c;
        case 0x205d80u: goto label_205d80;
        case 0x205d9cu: goto label_205d9c;
        case 0x205dbcu: goto label_205dbc;
        default: break;
    }

    ctx->pc = 0x205b48u;

    // 0x205b48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x205b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x205b4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x205b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x205b50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x205b50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205b54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x205b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x205b58: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x205b58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205b5c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x205b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x205b60: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x205b60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205b64: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x205b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x205b68: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x205b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x205b6c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x205B6Cu;
    {
        const bool branch_taken_0x205b6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x205B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205B6Cu;
        // 0x205b70: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205b6c) {
            ctx->pc = 0x205B98u;
            goto label_205b98;
        }
    }
    ctx->pc = 0x205B74u;
    // 0x205b74: 0xc081c12  jal         func_207048
    ctx->pc = 0x205B74u;
    SET_GPR_U32(ctx, 31, 0x205B7Cu);
    ctx->pc = 0x207048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207048u, 0x205B74u, 0x205B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205B7Cu;
label_205b7c:
    // 0x205b7c: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x205b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x205b80: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x205b80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205b84: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x205b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x205b88: 0xac509f70  sw          $s0, -0x6090($v0)
    ctx->pc = 0x205b88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x4B9F70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4B9F70u, _value); } while (0);
    // 0x205b8c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x205B8Cu;
    {
        const bool branch_taken_0x205b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205B8Cu;
        // 0x205b90: 0xac729f74  sw          $s2, -0x608C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294942580), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205b8c) {
            ctx->pc = 0x205BACu;
            goto label_205bac;
        }
    }
    ctx->pc = 0x205B94u;
    // 0x205b94: 0x0  nop
    ctx->pc = 0x205b94u;
    // NOP
label_205b98:
    // 0x205b98: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x205b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x205b9c: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x205b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x205ba0: 0xac409f70  sw          $zero, -0x6090($v0)
    ctx->pc = 0x205ba0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4B9F70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4B9F70u, _value); } while (0);
    // 0x205ba4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x205ba4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205ba8: 0xac609f74  sw          $zero, -0x608C($v1)
    ctx->pc = 0x205ba8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4B9F74u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4B9F74u, _value); } while (0);
label_205bac:
    // 0x205bac: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x205BACu;
    {
        const bool branch_taken_0x205bac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x205BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205BACu;
        // 0x205bb0: 0x3c020087  lui         $v0, 0x87 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)135 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205bac) {
            ctx->pc = 0x205BDCu;
            goto label_205bdc;
        }
    }
    ctx->pc = 0x205BB4u;
    // 0x205bb4: 0x24457920  addiu       $a1, $v0, 0x7920
    ctx->pc = 0x205bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 31008));
    // 0x205bb8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x205bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x205bbc: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x205bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x205bc0: 0x2883000f  slti        $v1, $a0, 0xF
    ctx->pc = 0x205bc0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x205bc4: 0x3c010087  lui         $at, 0x87
    ctx->pc = 0x205bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)135 << 16));
    // 0x205bc8: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x205bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x205bcc: 0xac3178e0  sw          $s1, 0x78E0($at)
    ctx->pc = 0x205bccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30944), GPR_U32(ctx, 17));
    // 0x205bd0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x205BD0u;
    {
        const bool branch_taken_0x205bd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x205BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205BD0u;
        // 0x205bd4: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205bd0) {
            ctx->pc = 0x205BDCu;
            goto label_205bdc;
        }
    }
    ctx->pc = 0x205BD8u;
    // 0x205bd8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x205bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_205bdc:
    // 0x205bdc: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x205bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x205be0: 0x34420f18  ori         $v0, $v0, 0xF18
    ctx->pc = 0x205be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3864);
    // 0x205be4: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x205be4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x205be8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x205BE8u;
    {
        const bool branch_taken_0x205be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x205be8) {
            ctx->pc = 0x205C60u;
            goto label_205c60;
        }
    }
    ctx->pc = 0x205BF0u;
    // 0x205bf0: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x205bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x205bf4: 0x34420f17  ori         $v0, $v0, 0xF17
    ctx->pc = 0x205bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3863);
    // 0x205bf8: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x205bf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x205bfc: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x205BFCu;
    {
        const bool branch_taken_0x205bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205BFCu;
        // 0x205c00: 0x3c140087  lui         $s4, 0x87 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)135 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205bfc) {
            ctx->pc = 0x205D18u;
            goto label_205d18;
        }
    }
    ctx->pc = 0x205C04u;
    // 0x205c04: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x205c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x205c08: 0x3442040c  ori         $v0, $v0, 0x40C
    ctx->pc = 0x205c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1036);
    // 0x205c0c: 0x12220046  beq         $s1, $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x205C0Cu;
    {
        const bool branch_taken_0x205c0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x205C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C0Cu;
        // 0x205c10: 0x51102a  slt         $v0, $v0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205c0c) {
            ctx->pc = 0x205D28u;
            goto label_205d28;
        }
    }
    ctx->pc = 0x205C14u;
    // 0x205c14: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x205C14u;
    {
        const bool branch_taken_0x205c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x205c14) {
            ctx->pc = 0x205C38u;
            goto label_205c38;
        }
    }
    ctx->pc = 0x205C1Cu;
    // 0x205c1c: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x205c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x205c20: 0x34420408  ori         $v0, $v0, 0x408
    ctx->pc = 0x205c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1032);
    // 0x205c24: 0x12220041  beq         $s1, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x205C24u;
    {
        const bool branch_taken_0x205c24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x205C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C24u;
        // 0x205c28: 0x3c050066  lui         $a1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205c24) {
            ctx->pc = 0x205D2Cu;
            goto label_205d2c;
        }
    }
    ctx->pc = 0x205C2Cu;
    // 0x205c2c: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x205C2Cu;
    {
        const bool branch_taken_0x205c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C2Cu;
        // 0x205c30: 0x3c050066  lui         $a1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205c2c) {
            ctx->pc = 0x205DACu;
            goto label_205dac;
        }
    }
    ctx->pc = 0x205C34u;
    // 0x205c34: 0x0  nop
    ctx->pc = 0x205c34u;
    // NOP
label_205c38:
    // 0x205c38: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x205c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x205c3c: 0x34420c04  ori         $v0, $v0, 0xC04
    ctx->pc = 0x205c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3076);
    // 0x205c40: 0x12220049  beq         $s1, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x205C40u;
    {
        const bool branch_taken_0x205c40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x205C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C40u;
        // 0x205c44: 0x3c140087  lui         $s4, 0x87 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)135 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205c40) {
            ctx->pc = 0x205D68u;
            goto label_205d68;
        }
    }
    ctx->pc = 0x205C48u;
    // 0x205c48: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x205c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x205c4c: 0x34420f15  ori         $v0, $v0, 0xF15
    ctx->pc = 0x205c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3861);
    // 0x205c50: 0x1222003d  beq         $s1, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x205C50u;
    {
        const bool branch_taken_0x205c50 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x205C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C50u;
        // 0x205c54: 0x3c050066  lui         $a1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205c50) {
            ctx->pc = 0x205D48u;
            goto label_205d48;
        }
    }
    ctx->pc = 0x205C58u;
    // 0x205c58: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x205C58u;
    {
        const bool branch_taken_0x205c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C58u;
        // 0x205c5c: 0x3c050066  lui         $a1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205c58) {
            ctx->pc = 0x205DACu;
            goto label_205dac;
        }
    }
    ctx->pc = 0x205C60u;
label_205c60:
    // 0x205c60: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x205c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x205c64: 0x34420f40  ori         $v0, $v0, 0xF40
    ctx->pc = 0x205c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3904);
    // 0x205c68: 0x12220017  beq         $s1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x205C68u;
    {
        const bool branch_taken_0x205c68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x205C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C68u;
        // 0x205c6c: 0x51102a  slt         $v0, $v0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205c68) {
            ctx->pc = 0x205CC8u;
            goto label_205cc8;
        }
    }
    ctx->pc = 0x205C70u;
    // 0x205c70: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x205C70u;
    {
        const bool branch_taken_0x205c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C70u;
        // 0x205c74: 0x2a22ffff  slti        $v0, $s1, -0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4294967295) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205c70) {
            ctx->pc = 0x205CA0u;
            goto label_205ca0;
        }
    }
    ctx->pc = 0x205C78u;
    // 0x205c78: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x205c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x205c7c: 0x34420f1c  ori         $v0, $v0, 0xF1C
    ctx->pc = 0x205c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3868);
    // 0x205c80: 0x12220029  beq         $s1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x205C80u;
    {
        const bool branch_taken_0x205c80 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x205C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C80u;
        // 0x205c84: 0x3c140087  lui         $s4, 0x87 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)135 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205c80) {
            ctx->pc = 0x205D28u;
            goto label_205d28;
        }
    }
    ctx->pc = 0x205C88u;
    // 0x205c88: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x205c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x205c8c: 0x34420f1f  ori         $v0, $v0, 0xF1F
    ctx->pc = 0x205c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3871);
    // 0x205c90: 0x1222003d  beq         $s1, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x205C90u;
    {
        const bool branch_taken_0x205c90 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x205C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C90u;
        // 0x205c94: 0x3c050066  lui         $a1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205c90) {
            ctx->pc = 0x205D88u;
            goto label_205d88;
        }
    }
    ctx->pc = 0x205C98u;
    // 0x205c98: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x205C98u;
    {
        const bool branch_taken_0x205c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C98u;
        // 0x205c9c: 0x3c050066  lui         $a1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205c98) {
            ctx->pc = 0x205DACu;
            goto label_205dac;
        }
    }
    ctx->pc = 0x205CA0u;
label_205ca0:
    // 0x205ca0: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x205CA0u;
    {
        const bool branch_taken_0x205ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205CA0u;
        // 0x205ca4: 0x3c140087  lui         $s4, 0x87 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)135 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205ca0) {
            ctx->pc = 0x205DA8u;
            goto label_205da8;
        }
    }
    ctx->pc = 0x205CA8u;
    // 0x205ca8: 0x2a22fffd  slti        $v0, $s1, -0x3
    ctx->pc = 0x205ca8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4294967293) ? 1 : 0);
    // 0x205cac: 0x5440003f  bnel        $v0, $zero, . + 4 + (0x3F << 2)
    ctx->pc = 0x205CACu;
    {
        const bool branch_taken_0x205cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x205cac) {
            ctx->pc = 0x205CB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205CACu;
            // 0x205cb0: 0x3c050066  lui         $a1, 0x66 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205DACu;
            goto label_205dac;
        }
    }
    ctx->pc = 0x205CB4u;
    // 0x205cb4: 0x3c140087  lui         $s4, 0x87
    ctx->pc = 0x205cb4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)135 << 16));
    // 0x205cb8: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x205cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x205cbc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x205CBCu;
    {
        const bool branch_taken_0x205cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205CBCu;
        // 0x205cc0: 0x24a56fa0  addiu       $a1, $a1, 0x6FA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205cbc) {
            ctx->pc = 0x205D30u;
            goto label_205d30;
        }
    }
    ctx->pc = 0x205CC4u;
    // 0x205cc4: 0x0  nop
    ctx->pc = 0x205cc4u;
    // NOP
label_205cc8:
    // 0x205cc8: 0x3c140087  lui         $s4, 0x87
    ctx->pc = 0x205cc8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)135 << 16));
    // 0x205ccc: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x205cccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x205cd0: 0x26907928  addiu       $s0, $s4, 0x7928
    ctx->pc = 0x205cd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 31016));
    // 0x205cd4: 0x3c06ff00  lui         $a2, 0xFF00
    ctx->pc = 0x205cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65280 << 16));
    // 0x205cd8: 0x24a56fb8  addiu       $a1, $a1, 0x6FB8
    ctx->pc = 0x205cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28600));
    // 0x205cdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x205cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205ce0: 0xc049ce8  jal         func_1273A0
    ctx->pc = 0x205CE0u;
    SET_GPR_U32(ctx, 31, 0x205CE8u);
    ctx->pc = 0x205CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205CE0u;
    // 0x205ce4: 0x34c60f40  ori         $a2, $a2, 0xF40 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)3904);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1273A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1273A0u, 0x205CE0u, 0x205CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205CE8u;
label_205ce8:
    // 0x205ce8: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x205CE8u;
    {
        const bool branch_taken_0x205ce8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x205ce8) {
            ctx->pc = 0x205CFCu;
            goto label_205cfc;
        }
    }
    ctx->pc = 0x205CF0u;
    // 0x205cf0: 0xc086d20  jal         func_21B480
    ctx->pc = 0x205CF0u;
    SET_GPR_U32(ctx, 31, 0x205CF8u);
    ctx->pc = 0x205CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205CF0u;
    // 0x205cf4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B480u, 0x205CF0u, 0x205CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205CF8u;
label_205cf8:
    // 0x205cf8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x205cf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205cfc:
    // 0x205cfc: 0x1260002f  beqz        $s3, . + 4 + (0x2F << 2)
    ctx->pc = 0x205CFCu;
    {
        const bool branch_taken_0x205cfc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x205D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205CFCu;
        // 0x205d00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205cfc) {
            ctx->pc = 0x205DBCu;
            goto label_205dbc;
        }
    }
    ctx->pc = 0x205D04u;
    // 0x205d04: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x205d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205d08: 0xc049f66  jal         func_127D98
    ctx->pc = 0x205D08u;
    SET_GPR_U32(ctx, 31, 0x205D10u);
    ctx->pc = 0x205D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205D08u;
    // 0x205d0c: 0x240600e9  addiu       $a2, $zero, 0xE9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 233));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127D98u, 0x205D08u, 0x205D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205D10u;
label_205d10:
    // 0x205d10: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x205D10u;
    {
        const bool branch_taken_0x205d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205D10u;
        // 0x205d14: 0x26847928  addiu       $a0, $s4, 0x7928 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 31016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205d10) {
            ctx->pc = 0x205DC0u;
            goto label_205dc0;
        }
    }
    ctx->pc = 0x205D18u;
label_205d18:
    // 0x205d18: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x205d18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x205d1c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x205D1Cu;
    {
        const bool branch_taken_0x205d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205D1Cu;
        // 0x205d20: 0x24a56fd0  addiu       $a1, $a1, 0x6FD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205d1c) {
            ctx->pc = 0x205D30u;
            goto label_205d30;
        }
    }
    ctx->pc = 0x205D24u;
    // 0x205d24: 0x0  nop
    ctx->pc = 0x205d24u;
    // NOP
label_205d28:
    // 0x205d28: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x205d28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_205d2c:
    // 0x205d2c: 0x24a57030  addiu       $a1, $a1, 0x7030
    ctx->pc = 0x205d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28720));
label_205d30:
    // 0x205d30: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x205d30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205d34: 0xc049ce8  jal         func_1273A0
    ctx->pc = 0x205D34u;
    SET_GPR_U32(ctx, 31, 0x205D3Cu);
    ctx->pc = 0x205D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205D34u;
    // 0x205d38: 0x26847928  addiu       $a0, $s4, 0x7928 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 31016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1273A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1273A0u, 0x205D34u, 0x205D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205D3Cu;
label_205d3c:
    // 0x205d3c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x205D3Cu;
    {
        const bool branch_taken_0x205d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205D3Cu;
        // 0x205d40: 0x26847928  addiu       $a0, $s4, 0x7928 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 31016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205d3c) {
            ctx->pc = 0x205DC0u;
            goto label_205dc0;
        }
    }
    ctx->pc = 0x205D44u;
    // 0x205d44: 0x0  nop
    ctx->pc = 0x205d44u;
    // NOP
label_205d48:
    // 0x205d48: 0x3c06ff00  lui         $a2, 0xFF00
    ctx->pc = 0x205d48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65280 << 16));
    // 0x205d4c: 0x24a57088  addiu       $a1, $a1, 0x7088
    ctx->pc = 0x205d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28808));
    // 0x205d50: 0x26847928  addiu       $a0, $s4, 0x7928
    ctx->pc = 0x205d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 31016));
    // 0x205d54: 0xc049ce8  jal         func_1273A0
    ctx->pc = 0x205D54u;
    SET_GPR_U32(ctx, 31, 0x205D5Cu);
    ctx->pc = 0x205D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205D54u;
    // 0x205d58: 0x34c60f15  ori         $a2, $a2, 0xF15 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)3861);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1273A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1273A0u, 0x205D54u, 0x205D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205D5Cu;
label_205d5c:
    // 0x205d5c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x205D5Cu;
    {
        const bool branch_taken_0x205d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205D5Cu;
        // 0x205d60: 0x26847928  addiu       $a0, $s4, 0x7928 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 31016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205d5c) {
            ctx->pc = 0x205DC0u;
            goto label_205dc0;
        }
    }
    ctx->pc = 0x205D64u;
    // 0x205d64: 0x0  nop
    ctx->pc = 0x205d64u;
    // NOP
label_205d68:
    // 0x205d68: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x205d68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x205d6c: 0x3c06ff00  lui         $a2, 0xFF00
    ctx->pc = 0x205d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65280 << 16));
    // 0x205d70: 0x24a570f8  addiu       $a1, $a1, 0x70F8
    ctx->pc = 0x205d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28920));
    // 0x205d74: 0x26847928  addiu       $a0, $s4, 0x7928
    ctx->pc = 0x205d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 31016));
    // 0x205d78: 0xc049ce8  jal         func_1273A0
    ctx->pc = 0x205D78u;
    SET_GPR_U32(ctx, 31, 0x205D80u);
    ctx->pc = 0x205D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205D78u;
    // 0x205d7c: 0x34c60c04  ori         $a2, $a2, 0xC04 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)3076);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1273A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1273A0u, 0x205D78u, 0x205D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205D80u;
label_205d80:
    // 0x205d80: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x205D80u;
    {
        const bool branch_taken_0x205d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205D80u;
        // 0x205d84: 0x26847928  addiu       $a0, $s4, 0x7928 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 31016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205d80) {
            ctx->pc = 0x205DC0u;
            goto label_205dc0;
        }
    }
    ctx->pc = 0x205D88u;
label_205d88:
    // 0x205d88: 0x3c06ff00  lui         $a2, 0xFF00
    ctx->pc = 0x205d88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65280 << 16));
    // 0x205d8c: 0x24a57180  addiu       $a1, $a1, 0x7180
    ctx->pc = 0x205d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29056));
    // 0x205d90: 0x26847928  addiu       $a0, $s4, 0x7928
    ctx->pc = 0x205d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 31016));
    // 0x205d94: 0xc049ce8  jal         func_1273A0
    ctx->pc = 0x205D94u;
    SET_GPR_U32(ctx, 31, 0x205D9Cu);
    ctx->pc = 0x205D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205D94u;
    // 0x205d98: 0x34c60f1f  ori         $a2, $a2, 0xF1F (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)3871);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1273A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1273A0u, 0x205D94u, 0x205D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205D9Cu;
label_205d9c:
    // 0x205d9c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x205D9Cu;
    {
        const bool branch_taken_0x205d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205D9Cu;
        // 0x205da0: 0x26847928  addiu       $a0, $s4, 0x7928 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 31016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205d9c) {
            ctx->pc = 0x205DC0u;
            goto label_205dc0;
        }
    }
    ctx->pc = 0x205DA4u;
    // 0x205da4: 0x0  nop
    ctx->pc = 0x205da4u;
    // NOP
label_205da8:
    // 0x205da8: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x205da8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_205dac:
    // 0x205dac: 0x24a571c8  addiu       $a1, $a1, 0x71C8
    ctx->pc = 0x205dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29128));
    // 0x205db0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x205db0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205db4: 0xc049ce8  jal         func_1273A0
    ctx->pc = 0x205DB4u;
    SET_GPR_U32(ctx, 31, 0x205DBCu);
    ctx->pc = 0x205DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205DB4u;
    // 0x205db8: 0x26847928  addiu       $a0, $s4, 0x7928 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 31016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1273A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1273A0u, 0x205DB4u, 0x205DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205DBCu;
label_205dbc:
    // 0x205dbc: 0x26847928  addiu       $a0, $s4, 0x7928
    ctx->pc = 0x205dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 31016));
label_205dc0:
    // 0x205dc0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x205dc0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x205dc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x205dc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205dc8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x205dc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x205dcc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x205dccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x205dd0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x205dd0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205dd4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x205dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x205dd8: 0x8082e3e  j           func_20B8F8
    ctx->pc = 0x205DD8u;
    ctx->pc = 0x205DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205DD8u;
    // 0x205ddc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x205DE0u;
}
