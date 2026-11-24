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

// Function: sub_00295590
// Address: 0x295590 - 0x2956d0
void sub_00295590_0x295590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295590_0x295590");
#endif

    switch (ctx->pc) {
        case 0x2956b0u: goto label_2956b0;
        default: break;
    }

    ctx->pc = 0x295590u;

    // 0x295590: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x295590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x295594: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x295594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x295598: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x295598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29559c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29559cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2955a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2955a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2955a4: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x2955a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2955a8: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2955A8u;
    {
        const bool branch_taken_0x2955a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2955a8) {
            ctx->pc = 0x2955D8u;
            goto label_2955d8;
        }
    }
    ctx->pc = 0x2955B0u;
    // 0x2955b0: 0x8e0306c8  lw          $v1, 0x6C8($s0)
    ctx->pc = 0x2955b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1736)));
    // 0x2955b4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2955b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2955b8: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2955b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2955bc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2955BCu;
    {
        const bool branch_taken_0x2955bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2955bc) {
            ctx->pc = 0x2955D0u;
            goto label_2955d0;
        }
    }
    ctx->pc = 0x2955C4u;
    // 0x2955c4: 0x9203065c  lbu         $v1, 0x65C($s0)
    ctx->pc = 0x2955c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x2955c8: 0x386300fb  xori        $v1, $v1, 0xFB
    ctx->pc = 0x2955c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)251);
    // 0x2955cc: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x2955ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2955d0:
    // 0x2955d0: 0x1460003b  bnez        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x2955D0u;
    {
        const bool branch_taken_0x2955d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2955d0) {
            ctx->pc = 0x2956C0u;
            goto label_2956c0;
        }
    }
    ctx->pc = 0x2955D8u;
label_2955d8:
    // 0x2955d8: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x2955d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x2955dc: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2955dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2955e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2955e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2955e4: 0xa42004  sllv        $a0, $a0, $a1
    ctx->pc = 0x2955e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x2955e8: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x2955e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x2955ec: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2955ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2955f0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2955F0u;
    {
        const bool branch_taken_0x2955f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2955F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2955F0u;
        // 0x2955f4: 0x3c030067  lui         $v1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2955f0) {
            ctx->pc = 0x295610u;
            goto label_295610;
        }
    }
    ctx->pc = 0x2955F8u;
    // 0x2955f8: 0x24636e80  addiu       $v1, $v1, 0x6E80
    ctx->pc = 0x2955f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28288));
    // 0x2955fc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2955fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x295600: 0x80650000  lb          $a1, 0x0($v1)
    ctx->pc = 0x295600u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x295604: 0xa2052aa0  sb          $a1, 0x2AA0($s0)
    ctx->pc = 0x295604u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10912), (uint8_t)GPR_U32(ctx, 5));
    // 0x295608: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x295608u;
    {
        const bool branch_taken_0x295608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29560Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295608u;
        // 0x29560c: 0xa2002aa1  sb          $zero, 0x2AA1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 10913), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295608) {
            ctx->pc = 0x295628u;
            goto label_295628;
        }
    }
    ctx->pc = 0x295610u;
label_295610:
    // 0x295610: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x295610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x295614: 0x24636e80  addiu       $v1, $v1, 0x6E80
    ctx->pc = 0x295614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28288));
    // 0x295618: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x295618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x29561c: 0x80650000  lb          $a1, 0x0($v1)
    ctx->pc = 0x29561cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x295620: 0xa2002aa0  sb          $zero, 0x2AA0($s0)
    ctx->pc = 0x295620u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10912), (uint8_t)GPR_U32(ctx, 0));
    // 0x295624: 0x0  nop
    ctx->pc = 0x295624u;
    // NOP
label_295628:
    // 0x295628: 0x30aa00ff  andi        $t2, $a1, 0xFF
    ctx->pc = 0x295628u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x29562c: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x29562cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x295630: 0xa2080  sll         $a0, $t2, 2
    ctx->pc = 0x295630u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x295634: 0x24636e40  addiu       $v1, $v1, 0x6E40
    ctx->pc = 0x295634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28224));
    // 0x295638: 0x960529de  lhu         $a1, 0x29DE($s0)
    ctx->pc = 0x295638u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10718)));
    // 0x29563c: 0x645821  addu        $t3, $v1, $a0
    ctx->pc = 0x29563cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x295640: 0x95680000  lhu         $t0, 0x0($t3)
    ctx->pc = 0x295640u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x295644: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x295644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295648: 0x1431804  sllv        $v1, $v1, $t2
    ctx->pc = 0x295648u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 10) & 0x1F));
    // 0x29564c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x29564cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x295650: 0x3069ffff  andi        $t1, $v1, 0xFFFF
    ctx->pc = 0x295650u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x295654: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x295654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x295658: 0xa82824  and         $a1, $a1, $t0
    ctx->pc = 0x295658u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 8));
    // 0x29565c: 0xa60529de  sh          $a1, 0x29DE($s0)
    ctx->pc = 0x29565cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10718), (uint16_t)GPR_U32(ctx, 5));
    // 0x295660: 0x960529de  lhu         $a1, 0x29DE($s0)
    ctx->pc = 0x295660u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10718)));
    // 0x295664: 0xa92825  or          $a1, $a1, $t1
    ctx->pc = 0x295664u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 9));
    // 0x295668: 0xa60529de  sh          $a1, 0x29DE($s0)
    ctx->pc = 0x295668u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10718), (uint16_t)GPR_U32(ctx, 5));
    // 0x29566c: 0x95680000  lhu         $t0, 0x0($t3)
    ctx->pc = 0x29566cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x295670: 0x960529e2  lhu         $a1, 0x29E2($s0)
    ctx->pc = 0x295670u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10722)));
    // 0x295674: 0xa82824  and         $a1, $a1, $t0
    ctx->pc = 0x295674u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 8));
    // 0x295678: 0xa60529e2  sh          $a1, 0x29E2($s0)
    ctx->pc = 0x295678u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10722), (uint16_t)GPR_U32(ctx, 5));
    // 0x29567c: 0x960529e2  lhu         $a1, 0x29E2($s0)
    ctx->pc = 0x29567cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10722)));
    // 0x295680: 0xa92825  or          $a1, $a1, $t1
    ctx->pc = 0x295680u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 9));
    // 0x295684: 0xa60529e2  sh          $a1, 0x29E2($s0)
    ctx->pc = 0x295684u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10722), (uint16_t)GPR_U32(ctx, 5));
    // 0x295688: 0xac862a04  sw          $a2, 0x2A04($a0)
    ctx->pc = 0x295688u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10756), GPR_U32(ctx, 6));
    // 0x29568c: 0x11430004  beq         $t2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29568Cu;
    {
        const bool branch_taken_0x29568c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 3));
        ctx->pc = 0x295690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29568Cu;
        // 0x295690: 0xac872a44  sw          $a3, 0x2A44($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 10820), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29568c) {
            ctx->pc = 0x2956A0u;
            goto label_2956a0;
        }
    }
    ctx->pc = 0x295694u;
    // 0x295694: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x295694u;
    {
        const bool branch_taken_0x295694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x295694) {
            ctx->pc = 0x2956C0u;
            goto label_2956c0;
        }
    }
    ctx->pc = 0x29569Cu;
    // 0x29569c: 0x0  nop
    ctx->pc = 0x29569cu;
    // NOP
label_2956a0:
    // 0x2956a0: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2956a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2956a4: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2956a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2956a8: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2956A8u;
    SET_GPR_U32(ctx, 31, 0x2956B0u);
    ctx->pc = 0x2956ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2956A8u;
    // 0x2956ac: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2956A8u, 0x2956B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2956B0u;
label_2956b0:
    // 0x2956b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2956B0u;
    {
        const bool branch_taken_0x2956b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2956b0) {
            ctx->pc = 0x2956C0u;
            goto label_2956c0;
        }
    }
    ctx->pc = 0x2956B8u;
    // 0x2956b8: 0x7a030020  lq          $v1, 0x20($s0)
    ctx->pc = 0x2956b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2956bc: 0x7e032a90  sq          $v1, 0x2A90($s0)
    ctx->pc = 0x2956bcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 10896), GPR_VEC(ctx, 3));
label_2956c0:
    // 0x2956c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2956c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2956c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2956c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2956c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2956C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2956CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2956C8u;
        // 0x2956cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2956C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2956D0u;
}
