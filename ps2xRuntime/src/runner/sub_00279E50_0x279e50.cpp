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

// Function: sub_00279E50
// Address: 0x279e50 - 0x27a0dc
void sub_00279E50_0x279e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279E50_0x279e50");
#endif

    switch (ctx->pc) {
        case 0x279f80u: goto label_279f80;
        case 0x279fd0u: goto label_279fd0;
        case 0x27a028u: goto label_27a028;
        case 0x27a03cu: goto label_27a03c;
        case 0x27a058u: goto label_27a058;
        case 0x27a090u: goto label_27a090;
        default: break;
    }

    ctx->pc = 0x279e50u;

    // 0x279e50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x279e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x279e54: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x279e54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x279e58: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x279e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x279e5c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x279e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x279e60: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x279e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x279e64: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x279e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x279e68: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x279e68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279e6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x279e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x279e70: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x279e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x279e74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x279e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x279e78: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x279e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x279e7c: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x279e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x279e80: 0x38100  sll         $s0, $v1, 4
    ctx->pc = 0x279e80u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x279e84: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x279e84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x279e88: 0x3c03008c  lui         $v1, 0x8C
    ctx->pc = 0x279e88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)140 << 16));
    // 0x279e8c: 0x24840990  addiu       $a0, $a0, 0x990
    ctx->pc = 0x279e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2448));
    // 0x279e90: 0x246331e0  addiu       $v1, $v1, 0x31E0
    ctx->pc = 0x279e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12768));
    // 0x279e94: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x279e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x279e98: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x279e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x279e9c: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x279e9cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x279ea0: 0x3c03008c  lui         $v1, 0x8C
    ctx->pc = 0x279ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)140 << 16));
    // 0x279ea4: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x279ea4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x279ea8: 0x24630992  addiu       $v1, $v1, 0x992
    ctx->pc = 0x279ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2450));
    // 0x279eac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x279eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x279eb0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x279eb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x279eb4: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x279eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x279eb8: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x279eb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x279ebc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x279ebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x279ec0: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x279EC0u;
    {
        const bool branch_taken_0x279ec0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x279EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279EC0u;
        // 0x279ec4: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x279ec0) {
            ctx->pc = 0x279F18u;
            goto label_279f18;
        }
    }
    ctx->pc = 0x279EC8u;
    // 0x279ec8: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x279ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x279ecc: 0x3c03008c  lui         $v1, 0x8C
    ctx->pc = 0x279eccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)140 << 16));
    // 0x279ed0: 0x24840970  addiu       $a0, $a0, 0x970
    ctx->pc = 0x279ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2416));
    // 0x279ed4: 0x24630974  addiu       $v1, $v1, 0x974
    ctx->pc = 0x279ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2420));
    // 0x279ed8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x279ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x279edc: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x279edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x279ee0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x279ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x279ee4: 0x3c03008c  lui         $v1, 0x8C
    ctx->pc = 0x279ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)140 << 16));
    // 0x279ee8: 0x24630978  addiu       $v1, $v1, 0x978
    ctx->pc = 0x279ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2424));
    // 0x279eec: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x279eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x279ef0: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x279ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x279ef4: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x279ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x279ef8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x279ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x279efc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x279efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279f00: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x279f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x279f04: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x279f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x279f08: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x279f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x279f0c: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x279F0Cu;
    {
        const bool branch_taken_0x279f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279F0Cu;
        // 0x279f10: 0xae43000c  sw          $v1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279f0c) {
            ctx->pc = 0x27A0C0u;
            goto label_27a0c0;
        }
    }
    ctx->pc = 0x279F14u;
    // 0x279f14: 0x0  nop
    ctx->pc = 0x279f14u;
    // NOP
label_279f18:
    // 0x279f18: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x279f18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x279f1c: 0x24030202  addiu       $v1, $zero, 0x202
    ctx->pc = 0x279f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
    // 0x279f20: 0x10830063  beq         $a0, $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x279F20u;
    {
        const bool branch_taken_0x279f20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x279F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279F20u;
        // 0x279f24: 0x24030102  addiu       $v1, $zero, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279f20) {
            ctx->pc = 0x27A0B0u;
            goto label_27a0b0;
        }
    }
    ctx->pc = 0x279F28u;
    // 0x279f28: 0x1083005f  beq         $a0, $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x279F28u;
    {
        const bool branch_taken_0x279f28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x279f28) {
            ctx->pc = 0x27A0A8u;
            goto label_27a0a8;
        }
    }
    ctx->pc = 0x279F30u;
    // 0x279f30: 0x24030301  addiu       $v1, $zero, 0x301
    ctx->pc = 0x279f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 769));
    // 0x279f34: 0x1083002c  beq         $a0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x279F34u;
    {
        const bool branch_taken_0x279f34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x279F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279F34u;
        // 0x279f38: 0x24030201  addiu       $v1, $zero, 0x201 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279f34) {
            ctx->pc = 0x279FE8u;
            goto label_279fe8;
        }
    }
    ctx->pc = 0x279F3Cu;
    // 0x279f3c: 0x1083002a  beq         $a0, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x279F3Cu;
    {
        const bool branch_taken_0x279f3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x279f3c) {
            ctx->pc = 0x279FE8u;
            goto label_279fe8;
        }
    }
    ctx->pc = 0x279F44u;
    // 0x279f44: 0x24030101  addiu       $v1, $zero, 0x101
    ctx->pc = 0x279f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x279f48: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x279F48u;
    {
        const bool branch_taken_0x279f48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x279f48) {
            ctx->pc = 0x279F58u;
            goto label_279f58;
        }
    }
    ctx->pc = 0x279F50u;
    // 0x279f50: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x279F50u;
    {
        const bool branch_taken_0x279f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x279f50) {
            ctx->pc = 0x27A0B8u;
            goto label_27a0b8;
        }
    }
    ctx->pc = 0x279F58u;
label_279f58:
    // 0x279f58: 0x3c03008c  lui         $v1, 0x8C
    ctx->pc = 0x279f58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)140 << 16));
    // 0x279f5c: 0x246331a0  addiu       $v1, $v1, 0x31A0
    ctx->pc = 0x279f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12704));
    // 0x279f60: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x279f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x279f64: 0x3c03008c  lui         $v1, 0x8C
    ctx->pc = 0x279f64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)140 << 16));
    // 0x279f68: 0x24860020  addiu       $a2, $a0, 0x20
    ctx->pc = 0x279f68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x279f6c: 0x24630950  addiu       $v1, $v1, 0x950
    ctx->pc = 0x279f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2384));
    // 0x279f70: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x279f70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279f74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x279f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x279f78: 0xc09e738  jal         func_279CE0
    ctx->pc = 0x279F78u;
    SET_GPR_U32(ctx, 31, 0x279F80u);
    ctx->pc = 0x279F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279F78u;
    // 0x279f7c: 0x24640020  addiu       $a0, $v1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279CE0u, 0x279F78u, 0x279F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279F80u;
label_279f80:
    // 0x279f80: 0x3c05008c  lui         $a1, 0x8C
    ctx->pc = 0x279f80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)140 << 16));
    // 0x279f84: 0x3c03008c  lui         $v1, 0x8C
    ctx->pc = 0x279f84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)140 << 16));
    // 0x279f88: 0x24a531cc  addiu       $a1, $a1, 0x31CC
    ctx->pc = 0x279f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12748));
    // 0x279f8c: 0x2463097c  addiu       $v1, $v1, 0x97C
    ctx->pc = 0x279f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2428));
    // 0x279f90: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x279f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x279f94: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x279f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x279f98: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x279f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x279f9c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x279f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x279fa0: 0x460208c0  add.s       $f3, $f1, $f2
    ctx->pc = 0x279fa0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x279fa4: 0x46031842  mul.s       $f1, $f3, $f3
    ctx->pc = 0x279fa4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x279fa8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x279fa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x279fac: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x279FACu;
    {
        const bool branch_taken_0x279fac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x279fac) {
            ctx->pc = 0x279FE0u;
            goto label_279fe0;
        }
    }
    ctx->pc = 0x279FB4u;
    // 0x279fb4: 0x0  nop
    ctx->pc = 0x279fb4u;
    // NOP
    // 0x279fb8: 0x0  nop
    ctx->pc = 0x279fb8u;
    // NOP
    // 0x279fbc: 0x46031303  div.s       $f12, $f2, $f3
    ctx->pc = 0x279fbcu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[2], ctx->f[3]); }
    // 0x279fc0: 0x0  nop
    ctx->pc = 0x279fc0u;
    // NOP
    // 0x279fc4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x279fc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279fc8: 0xc0414c0  jal         func_105300
    ctx->pc = 0x279FC8u;
    SET_GPR_U32(ctx, 31, 0x279FD0u);
    ctx->pc = 0x279FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279FC8u;
    // 0x279fcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105300u, 0x279FC8u, 0x279FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279FD0u;
label_279fd0:
    // 0x279fd0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x279fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x279fd4: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x279FD4u;
    {
        const bool branch_taken_0x279fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279FD4u;
        // 0x279fd8: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279fd4) {
            ctx->pc = 0x27A0B8u;
            goto label_27a0b8;
        }
    }
    ctx->pc = 0x279FDCu;
    // 0x279fdc: 0x0  nop
    ctx->pc = 0x279fdcu;
    // NOP
label_279fe0:
    // 0x279fe0: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x279FE0u;
    {
        const bool branch_taken_0x279fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279FE0u;
        // 0x279fe4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279fe0) {
            ctx->pc = 0x27A0C0u;
            goto label_27a0c0;
        }
    }
    ctx->pc = 0x279FE8u;
label_279fe8:
    // 0x279fe8: 0x3c03008c  lui         $v1, 0x8C
    ctx->pc = 0x279fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)140 << 16));
    // 0x279fec: 0x2463097c  addiu       $v1, $v1, 0x97C
    ctx->pc = 0x279fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2428));
    // 0x279ff0: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x279ff0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x279ff4: 0x3c03008c  lui         $v1, 0x8C
    ctx->pc = 0x279ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)140 << 16));
    // 0x279ff8: 0x246331cc  addiu       $v1, $v1, 0x31CC
    ctx->pc = 0x279ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12748));
    // 0x279ffc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x279ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x27a000: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x27a000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a004: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x27a004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27a008: 0x3c03008c  lui         $v1, 0x8C
    ctx->pc = 0x27a008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)140 << 16));
    // 0x27a00c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27a00cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27a010: 0x24630950  addiu       $v1, $v1, 0x950
    ctx->pc = 0x27a010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2384));
    // 0x27a014: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x27a014u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27a018: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x27a018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x27a01c: 0x26650030  addiu       $a1, $s3, 0x30
    ctx->pc = 0x27a01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x27a020: 0xc096988  jal         func_25A620
    ctx->pc = 0x27A020u;
    SET_GPR_U32(ctx, 31, 0x27A028u);
    ctx->pc = 0x27A024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A020u;
    // 0x27a024: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A620u, 0x27A020u, 0x27A028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A028u;
label_27a028:
    // 0x27a028: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x27a028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x27a02c: 0x26650030  addiu       $a1, $s3, 0x30
    ctx->pc = 0x27a02cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x27a030: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x27a030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27a034: 0xc09e744  jal         func_279D10
    ctx->pc = 0x27A034u;
    SET_GPR_U32(ctx, 31, 0x27A03Cu);
    ctx->pc = 0x27A038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A034u;
    // 0x27a038: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x279D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279D10u, 0x27A034u, 0x27A03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A03Cu;
label_27a03c:
    // 0x27a03c: 0x3c02008c  lui         $v0, 0x8C
    ctx->pc = 0x27a03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)140 << 16));
    // 0x27a040: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27a040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a044: 0x244231a0  addiu       $v0, $v0, 0x31A0
    ctx->pc = 0x27a044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12704));
    // 0x27a048: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x27a048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x27a04c: 0x24460020  addiu       $a2, $v0, 0x20
    ctx->pc = 0x27a04cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x27a050: 0xc09e750  jal         func_279D40
    ctx->pc = 0x27A050u;
    SET_GPR_U32(ctx, 31, 0x27A058u);
    ctx->pc = 0x27A054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A050u;
    // 0x27a054: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279D40u, 0x27A050u, 0x27A058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A058u;
label_27a058:
    // 0x27a058: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x27A058u;
    {
        const bool branch_taken_0x27a058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a058) {
            ctx->pc = 0x27A0A0u;
            goto label_27a0a0;
        }
    }
    ctx->pc = 0x27A060u;
    // 0x27a060: 0x3c02008c  lui         $v0, 0x8C
    ctx->pc = 0x27a060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)140 << 16));
    // 0x27a064: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x27a064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a068: 0x244231cc  addiu       $v0, $v0, 0x31CC
    ctx->pc = 0x27a068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12748));
    // 0x27a06c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x27a06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x27a070: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x27a070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a074: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x27a074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27a078: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27a078u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27a07c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x27a07cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x27a080: 0x0  nop
    ctx->pc = 0x27a080u;
    // NOP
    // 0x27a084: 0x0  nop
    ctx->pc = 0x27a084u;
    // NOP
    // 0x27a088: 0xc0414c0  jal         func_105300
    ctx->pc = 0x27A088u;
    SET_GPR_U32(ctx, 31, 0x27A090u);
    ctx->pc = 0x105300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105300u, 0x27A088u, 0x27A090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A090u;
label_27a090:
    // 0x27a090: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x27a090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x27a094: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27A094u;
    {
        const bool branch_taken_0x27a094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A094u;
        // 0x27a098: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a094) {
            ctx->pc = 0x27A0B8u;
            goto label_27a0b8;
        }
    }
    ctx->pc = 0x27A09Cu;
    // 0x27a09c: 0x0  nop
    ctx->pc = 0x27a09cu;
    // NOP
label_27a0a0:
    // 0x27a0a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27A0A0u;
    {
        const bool branch_taken_0x27a0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A0A0u;
        // 0x27a0a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a0a0) {
            ctx->pc = 0x27A0C0u;
            goto label_27a0c0;
        }
    }
    ctx->pc = 0x27A0A8u;
label_27a0a8:
    // 0x27a0a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x27A0A8u;
    {
        const bool branch_taken_0x27a0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A0A8u;
        // 0x27a0ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a0a8) {
            ctx->pc = 0x27A0C0u;
            goto label_27a0c0;
        }
    }
    ctx->pc = 0x27A0B0u;
label_27a0b0:
    // 0x27a0b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27A0B0u;
    {
        const bool branch_taken_0x27a0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A0B0u;
        // 0x27a0b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a0b0) {
            ctx->pc = 0x27A0C0u;
            goto label_27a0c0;
        }
    }
    ctx->pc = 0x27A0B8u;
label_27a0b8:
    // 0x27a0b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27a0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27a0bc: 0x0  nop
    ctx->pc = 0x27a0bcu;
    // NOP
label_27a0c0:
    // 0x27a0c0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x27a0c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27a0c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27a0c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27a0c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27a0c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27a0cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27a0ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27a0d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27a0d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27a0d4: 0x3e00008  jr          $ra
    ctx->pc = 0x27A0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A0D4u;
        // 0x27a0d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A0D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A0DCu;
}
